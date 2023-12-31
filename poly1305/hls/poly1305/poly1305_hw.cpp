#include "poly1305_head.h"

void poly1305_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream){
    #pragma HLS INTERFACE axis port=input_stream
    #pragma HLS INTERFACE axis port=result_stream
    #pragma HLS INTERFACE ap_ctrl_none port=return

    uint8_t key[32];
    bool flag = false;

    //--------------Read input stream----------------
    int textLength = 0;
    while(flag == false){
        axis temp = input_stream.read();
        if(temp.last == 1){
            flag = true;
        }
        textLength += temp.data;
    }   

    
    uint8_t text[1000];

    //read input stream
    for(int i = 0; i < textLength; i++){
        text[i] = input_stream.read().data;
    }
    for(int i = 0; i < 32; i++){
        key[i] = input_stream.read().data;
    }

    #pragma HLS ARRAY_PARTITION variable=key complete dim=1
    #pragma HLS ARRAY_PARTITION variable=text complete dim=1

    //--------------Splitting the key---------------
    uint8_t r[16], s[16];

    for(int i = 0; i<16; i++){
        r[i] = key[i];
        s[i] = key[i+16];
    }

    #pragma HLS ARRAY_PARTITION variable=r complete dim=1

    //------------------clamping r------------------
    r[3] &= 0x0f;               //lesser than 16, first 4 bits need to be 0
    r[7] &= 0x0f;
    r[11] &= 0x0f;
    r[15] &= 0x0f;

    r[4] &= 0xfc;               //divisible by 4, last two bits need to be 0
    r[8] &= 0xfc;
    r[12] &= 0xfc;

    uint8_t acc[17] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    if(textLength%16==0){
        for(int i = 0; i < textLength/16; i++){
    #pragma HLS PIPELINE 
            uint8_t textBlock[17];
            for(int j = 0; j < 16; j++){
                textBlock[j] = text[(16*i) + j];
            }
            textBlock[16] = 0x01;

            for(int j = 0; j < 17; j++){
                printf("%02x ", textBlock[j]);
            }
            printf("\n");

            //------------addition with acc--------------

            uint8_t addCarry = 0;
            uint8_t accSum[17];
            for(int j = 0; j < 17; j++){
                uint16_t sum = textBlock[j] + acc[j] + addCarry;
                if(sum > 0xFF){
                    addCarry = (uint8_t)(sum / 0x100);
                }
                else{
                    addCarry = 0;
                }
                accSum[j] = (uint8_t)(sum & 0x00FF);
            }
            //--------------multiplication---------------
            uint8_t mul[33];
            for(int k = 0; k < 33; k++){
                mul[k] = 0;
            }

            addCarry = 0;
            for(int i = 0; i < 16; i++){
                uint8_t mulCarry = 0;
        #pragma HLS PIPELINE
                for(int j =0; j < 17; j++){
                    uint16_t mulTemp = (accSum[j] * r[i]) + mulCarry;
                    if(mulTemp > 0xFF){
                        mulCarry = (uint8_t)(mulTemp / 0x100);
                    }
                    else{
                        mulCarry = 0;
                    }

                    if(j == 16 && mulCarry != 0){
                        mul[i + j + 1] = mulCarry;
                        mulCarry = 0;
                    }

                    uint16_t addTemp = (mulTemp & 0xFF) + mul[i + j] + addCarry;
                    if(addTemp > 0xFF){
                        addCarry = (uint8_t)(addTemp / 0x100);
                    } 
                    else{
                        addCarry = 0;
                    }
                    mul[i + j] = (uint8_t)(addTemp & 0xFF);

                    if(i == 15 && j == 16 && addCarry != 0){
                        mul[i + j + 1] += addCarry;
                        addCarry = 0;
                    }
                }
            }

            for(int j = 0; j<33; j++){
                printf("%02x ", mul[j]);
            }
            printf("\n");


            //-------------------modulus------------------------
            int arr1[33];
            for(int i = 0; i < 33; i++){
                arr1[i] = (int)mul[i];
            }
            int arr2[] = {0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03};  // Constant P


            int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
            int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

            int boolean;
            int arr1Zeroes = 0;
            int arr2Zeroes = 0;

            for(int i = arr1Size - 1; i >= 0; i--){
                if(arr1[i] == 0){
                    arr1Zeroes++;
                }
                else break;
            }

            for(int i = arr2Size - 1; i >= 0; i--){
                if(arr2[i] == 0){
                    arr2Zeroes++;
                }
                else break;
            }

            if(arr1Size - arr1Zeroes > arr2Size - arr2Zeroes){
                boolean = 1;
            }
            else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                boolean = -1;
            }
            else{
                for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                    if(arr1[i] > arr2[i]){
                        boolean = 1;
                        break;
                    }
                    else if(arr1[i] < arr2[i]){
                        boolean = -1;
                        break;
                    }
                    else{
                        boolean = 0;
                    }
                }
            }

            for(int i = arr1Size - 1; i >= 0; i--){
                if(arr1[i] == 0){
                    arr1Zeroes++;
                }
                else break;
            }

            for(int i = arr2Size - 1; i >= 0; i--){
                if(arr2[i] == 0){
                    arr2Zeroes++;
                }
                else break;
            }

            if(arr1Size != arr1Zeroes){
                if(boolean == -1){
                }

                while(boolean >=0){
                    int temp[40];
                    for(int k = 0; k < arr1Size - arr1Zeroes - 1; k++){
                        temp[k] = 0;
                    }

                    if(arr1Size - arr1Zeroes - 1 <= arr2Size){
                        for(int i = 0; i < arr2Size; i++){
                            if(arr1[i] >= arr2[i]){
                                arr1[i] -= arr2[i];
                            }
                            else{
                                arr1[i] += 0x100;
                                arr1[i+1] -= 1;
                                arr1[i] -= arr2[i];
                            }
                        }
                    }

                    else{
                        int fullArr[40];
                        for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                            fullArr[k] = 0xFF;
                        }

                        addCarry = 0;
                        for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
                    #pragma HLS PIPELINE
                            int mulCarry = 0;
                            for(int j =0; j < arr2Size; j++){
                                int mulTemp = (arr2[j] * fullArr[i]) + mulCarry;
                                if(mulTemp > 0xFF){
                                    mulCarry = (mulTemp/ 0x100);
                                }
                                else{
                                    mulCarry = 0;
                                }

                                if(j == arr2Size - 1 && mulCarry != 0){
                                    temp[i + j + 1] = mulCarry;
                                    mulCarry = 0;
                                }

                                int addTemp = (mulTemp & 0xFF) + temp[i + j] + addCarry;
                                if(addTemp > 0xFF){
                                    addCarry = (addTemp / 0x100);
                                } 
                                else{
                                    addCarry = 0;
                                }
                                temp[i + j] = (addTemp & 0xFF);

                                if(i == arr1Size - arr1Zeroes - arr2Size - 2 && j == arr2Size - 1 && addCarry != 0){
                                    temp[i + j + 1] += addCarry;
                                    addCarry = 0;
                                }
                            }
                        }
                    
                        for(int i = 0; i < arr1Size - arr1Zeroes - 1; i++){
                            if(arr1[i] >= temp[i]){
                                arr1[i] -= temp[i];
                            }
                            else{
                                arr1[i] += 0x100;
                                arr1[i+1] -= 1;
                                arr1[i] -= temp[i];
                            }
                        }
                    }
                

                    for(int i = 0; i < arr1Size - 1; i++){
                        if(arr1[i] < 0){
                            arr1[i] += 0x100;
                            arr1[i+1] -= 1;
                        }
                    }

                    arr1Zeroes = 0;
                    arr2Zeroes = 0;

                    for(int i = arr1Size - 1; i >= 0; i--){
                        if(arr1[i] == 0){
                            arr1Zeroes++;
                        }
                        else break;
                    }

                    for(int i = arr2Size - 1; i >= 0; i--){
                        if(arr2[i] == 0){
                            arr2Zeroes++;
                        }
                        else break;
                    }

                    if(arr1Size - arr1Zeroes > arr2Size - arr2Zeroes){
                        boolean = 1;
                    }
                    else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                        boolean = -1;
                    }
                    else{
                        for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                            if(arr1[i] > arr2[i]){
                                boolean = 1;
                                break;
                            }
                            else if(arr1[i] < arr2[i]){
                                boolean = -1;
                                break;
                            }
                            else{
                                boolean = 0;
                            }
                        }
                    }

                    if(arr1Zeroes == arr1Size){
                        break;
                    }
                }
            }

            // uint8_t modPArr[17];
            for(int i = 0; i < 17; i++){
                acc[i] = (uint8_t)arr1[i];
                printf("%02x ", acc[i]);
            }
            printf("\n");

        }

    }

    else{
    //------------------even cases------------------------- 
        for(int i = 0; i < textLength/16; i++){
    #pragma HLS PIPELINE
            uint8_t textBlock[17];
            for(int j = 0; j < 16; j++){
                textBlock[j] = text[(16*i) + j];
            }
            textBlock[16] = 0x01;

            for(int j = 0; j < 17; j++){
                printf("%02x ", textBlock[j]);
            }
            printf("\n");

            //------------addition with acc--------------

            uint8_t addCarry = 0;
            uint8_t accSum[17];
            for(int j = 0; j < 17; j++){
                uint16_t sum = textBlock[j] + acc[j] + addCarry;
                if(sum > 0xFF){
                    addCarry = (uint8_t)(sum / 0x100);
                }
                else{
                    addCarry = 0;
                }
                accSum[j] = (uint8_t)(sum & 0x00FF);
            }

            for(int j = 0; j < 17; j++){
                printf("%02x ", accSum[j]);
            }
            printf("\n");


            //--------------multiplication---------------
            uint8_t mul[33];
            for(int k = 0; k < 33; k++){
                mul[k] = 0;
            }

            addCarry = 0;
            for(int i = 0; i < 16; i++){
        #pragma HLS PIPELINE
                uint8_t mulCarry = 0;
                for(int j =0; j < 17; j++){
                    uint16_t mulTemp = (accSum[j] * r[i]) + mulCarry;
                    if(mulTemp > 0xFF){
                        mulCarry = (uint8_t)(mulTemp / 0x100);
                    }
                    else{
                        mulCarry = 0;
                    }

                    if(j == 16 && mulCarry != 0){
                        mul[i + j + 1] = mulCarry;
                        mulCarry = 0;
                    }

                    uint16_t addTemp = (mulTemp & 0xFF) + mul[i + j] + addCarry;
                    if(addTemp > 0xFF){
                        addCarry = (uint8_t)(addTemp / 0x100);
                    } 
                    else{
                        addCarry = 0;
                    }
                    mul[i + j] = (uint8_t)(addTemp & 0xFF);

                    if(i == 15 && j == 16 && addCarry != 0){
                        mul[i + j + 1] += addCarry;
                        addCarry = 0;
                    }
                }
            }


            for(int j = 0; j<33; j++){
                printf("%02x ", mul[j]);
            }
            printf("\n");


            //-------------------modulus------------------------
            int arr1[33];
            for(int i = 0; i < 33; i++){
                arr1[i] = (int)mul[i];
            }
            int arr2[] = {0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03};  // Constant P


            int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
            int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

            int boolean;
            int arr1Zeroes = 0;
            int arr2Zeroes = 0;

            for(int i = arr1Size - 1; i >= 0; i--){
                if(arr1[i] == 0){
                    arr1Zeroes++;
                }
                else break;
            }

            for(int i = arr2Size - 1; i >= 0; i--){
                if(arr2[i] == 0){
                    arr2Zeroes++;
                }
                else break;
            }

            if(arr1Size - arr1Zeroes > arr2Size - arr2Zeroes){
                boolean = 1;
            }
            else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                boolean = -1;
            }
            else{
                for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                    if(arr1[i] > arr2[i]){
                        boolean = 1;
                        break;
                    }
                    else if(arr1[i] < arr2[i]){
                        boolean = -1;
                        break;
                    }
                    else{
                        boolean = 0;
                    }
                }
            }

            for(int i = arr1Size - 1; i >= 0; i--){
                if(arr1[i] == 0){
                    arr1Zeroes++;
                }
                else break;
            }

            for(int i = arr2Size - 1; i >= 0; i--){
                if(arr2[i] == 0){
                    arr2Zeroes++;
                }
                else break;
            }

            if(arr1Zeroes != arr1Size){
                while(boolean >=0){
                    int temp[40];
                    for(int k = 0; k < arr1Size - arr1Zeroes - 1; k++){
                        temp[k] = 0;
                    }

                    if(arr1Size - arr1Zeroes - 1 <= arr2Size){
                        for(int i = 0; i < arr2Size; i++){
                            if(arr1[i] >= arr2[i]){
                                arr1[i] -= arr2[i];
                            }
                            else{
                                arr1[i] += 0x100;
                                arr1[i+1] -= 1;
                                arr1[i] -= arr2[i];
                            }
                        }
                    }

                    else{
                        int fullArr[40];
                        for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                            fullArr[k] = 0xFF;
                        }

                        addCarry = 0;
                        for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
                    #pragma HLS PIPELINE
                            int mulCarry = 0;
                            for(int j =0; j < arr2Size; j++){
                                int mulTemp = (arr2[j] * fullArr[i]) + mulCarry;
                                if(mulTemp > 0xFF){
                                    mulCarry = (mulTemp/ 0x100);
                                }
                                else{
                                    mulCarry = 0;
                                }

                                if(j == arr2Size - 1 && mulCarry != 0){
                                    temp[i + j + 1] = mulCarry;
                                    mulCarry = 0;
                                }

                                int addTemp = (mulTemp & 0xFF) + temp[i + j] + addCarry;
                                if(addTemp > 0xFF){
                                    addCarry = (addTemp / 0x100);
                                } 
                                else{
                                    addCarry = 0;
                                }
                                temp[i + j] = (addTemp & 0xFF);

                                if(i == arr1Size - arr1Zeroes - arr2Size - 2 && j == arr2Size - 1 && addCarry != 0){
                                    temp[i + j + 1] += addCarry;
                                    addCarry = 0;
                                }
                            }
                        }
                    
                        for(int i = 0; i < arr1Size - arr1Zeroes - 1; i++){
                            if(arr1[i] >= temp[i]){
                                arr1[i] -= temp[i];
                            }
                            else{
                                arr1[i] += 0x100;
                                arr1[i+1] -= 1;
                                arr1[i] -= temp[i];
                            }
                        }
                    }
                

                    for(int i = 0; i < arr1Size - 1; i++){
                        if(arr1[i] < 0){
                            arr1[i] += 0x100;
                            arr1[i+1] -= 1;
                        }
                    }

                    arr1Zeroes = 0;
                    arr2Zeroes = 0;

                    for(int i = arr1Size - 1; i >= 0; i--){
                        if(arr1[i] == 0){
                            arr1Zeroes++;
                        }
                        else break;
                    }

                    for(int i = arr2Size - 1; i >= 0; i--){
                        if(arr2[i] == 0){
                            arr2Zeroes++;
                        }
                        else break;
                    }

                    if(arr1Size - arr1Zeroes > arr2Size - arr2Zeroes){
                        boolean = 1;
                    }
                    else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                        boolean = -1;
                    }
                    else{
                        for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                            if(arr1[i] > arr2[i]){
                                boolean = 1;
                                break;
                            }
                            else if(arr1[i] < arr2[i]){
                                boolean = -1;
                                break;
                            }
                            else{
                                boolean = 0;
                            }
                        }
                    }
                    if(arr1Zeroes == arr1Size){
                        break;
                    }
                }
            }

            // uint8_t modPArr[17];
            for(int i = 0; i < 17; i++){
                acc[i] = (uint8_t)arr1[i];
                printf("%02x ", acc[i]);
            }
            printf("\n");

        }

    //---------------------------odd cases--------------------------------
        uint8_t textBlock[17];
        for(int i = 0; i < textLength % 16; i++){
            textBlock[i] = text[(textLength/16)*16 + i];
        }
        textBlock[textLength % 16] = 0x01;

        for(int i = textLength % 16 + 1; i < 17; i++){
            textBlock[i] = 0x00;
        }

        for(int j = 0; j < 17; j++){
            printf("%02x ", textBlock[j]);
        }
        printf("\n");


        //------------addition with acc--------------

        uint8_t addCarry = 0;
        uint8_t accSum[17];
        for(int j = 0; j < 17; j++){
            uint16_t sum = textBlock[j] + acc[j] + addCarry;
            if(sum > 0xFF){
                addCarry = (uint8_t)(sum / 0x100);
            }
            else{
                addCarry = 0;
            }
            accSum[j] = (uint8_t)(sum & 0x00FF);
        }
        
        for(int j = 0; j < 17; j++){
            printf("%02x ", accSum[j]);
        }
        printf("\n");

        //--------------multiplication---------------
        uint8_t mul[33];
        for(int k = 0; k < 33; k++){
            mul[k] = 0;
        }

        addCarry = 0;
        for(int i = 0; i < 16; i++){
    #pragma HLS PIPELINE
            uint8_t mulCarry = 0;
            for(int j =0; j < 17; j++){
                uint16_t mulTemp = (accSum[j] * r[i]) + mulCarry;
                if(mulTemp > 0xFF){
                    mulCarry = (uint8_t)(mulTemp / 0x100);
                }
                else{
                    mulCarry = 0;
                }

                if(j == 16 && mulCarry != 0){
                    mul[i + j + 1] = mulCarry;
                    mulCarry = 0;
                }

                uint16_t addTemp = (mulTemp & 0xFF) + mul[i + j] + addCarry;
                if(addTemp > 0xFF){
                    addCarry = (uint8_t)(addTemp / 0x100);
                } 
                else{
                    addCarry = 0;
                }
                mul[i + j] = (uint8_t)(addTemp & 0xFF);

                if(i == 15 && j == 16 && addCarry != 0){
                    mul[i + j + 1] += addCarry;
                    addCarry = 0;
                }
            }
        }
        for(int j = 0; j<33; j++){
            printf("%02x ", mul[j]);
        }
        printf("\n");


        //-------------------modulus------------------------
        int arr1[33];
        for(int i = 0; i < 33; i++){
            arr1[i] = (int)mul[i];
        }
        int arr2[] = {0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03};  // Constant P


        int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
        int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

        int boolean = 1;
        int arr1Zeroes = 0;
        int arr2Zeroes = 0;

        for(int i = arr1Size - 1; i >= 0; i--){
            if(arr1[i] == 0){
                arr1Zeroes++;
            }
            else break;
        }

        for(int i = arr2Size - 1; i >= 0; i--){
            if(arr2[i] == 0){
                arr2Zeroes++;
            }
            else break;
        }

        if(arr1Zeroes != arr1Size){
            while(boolean >=0){
                int temp[40];
                for(int k = 0; k < arr1Size - arr1Zeroes - 1; k++){
                    temp[k] = 0;
                }

                if(arr1Size - arr1Zeroes - 1 <= arr2Size){
                    for(int i = 0; i < arr2Size; i++){
                        if(arr1[i] >= arr2[i]){
                            arr1[i] -= arr2[i];
                        }
                        else{
                            arr1[i] += 0x100;
                            arr1[i+1] -= 1;
                            arr1[i] -= arr2[i];
                        }
                    }
                }

                else{
                    int fullArr[40];
                    for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                        fullArr[k] = 0xFF;
                    }

                    addCarry = 0;
                    for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
                #pragma HLS PIPELINE
                        int mulCarry = 0;
                        for(int j =0; j < arr2Size; j++){
                            int mulTemp = (arr2[j] * fullArr[i]) + mulCarry;
                            if(mulTemp > 0xFF){
                                mulCarry = (mulTemp/ 0x100);
                            }
                            else{
                                mulCarry = 0;
                            }

                            if(j == arr2Size - 1 && mulCarry != 0){
                                temp[i + j + 1] = mulCarry;
                                mulCarry = 0;
                            }

                            int addTemp = (mulTemp & 0xFF) + temp[i + j] + addCarry;
                            if(addTemp > 0xFF){
                                addCarry = (addTemp / 0x100);
                            } 
                            else{
                                addCarry = 0;
                            }
                            temp[i + j] = (addTemp & 0xFF);

                            if(i == arr1Size - arr1Zeroes - arr2Size - 2 && j == arr2Size - 1 && addCarry != 0){
                                temp[i + j + 1] += addCarry;
                                addCarry = 0;
                            }
                        }
                    }
                
                    for(int i = 0; i < arr1Size - arr1Zeroes - 1; i++){
                        if(arr1[i] >= temp[i]){
                            arr1[i] -= temp[i];
                        }
                        else{
                            arr1[i] += 0x100;
                            arr1[i+1] -= 1;
                            arr1[i] -= temp[i];
                        }
                    }
                }
            

                for(int i = 0; i < arr1Size - 1; i++){
                    if(arr1[i] < 0){
                        arr1[i] += 0x100;
                        arr1[i+1] -= 1;
                    }
                }

                arr1Zeroes = 0;
                arr2Zeroes = 0;

                for(int i = arr1Size - 1; i >= 0; i--){
                    if(arr1[i] == 0){
                        arr1Zeroes++;
                    }
                    else break;
                }

                for(int i = arr2Size - 1; i >= 0; i--){
                    if(arr2[i] == 0){
                        arr2Zeroes++;
                    }
                    else break;
                }

                if(arr1Size - arr1Zeroes > arr2Size - arr2Zeroes){
                    boolean = 1;
                }
                else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                    boolean = -1;
                }
                else{
                    for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                        if(arr1[i] > arr2[i]){
                            boolean = 1;
                            break;
                        }
                        else if(arr1[i] < arr2[i]){
                            boolean = -1;
                            break;
                        }
                        else{
                            boolean = 0;
                        }
                    }
                }

                if(arr1Zeroes == arr1Size){
                    break;
                }
            }
        }

        // uint8_t modPArr[17];
        for(int i = 0; i < 17; i++){
            acc[i] = (uint8_t)arr1[i];
            printf("%02x ", acc[i]);
        }
        printf("\n");

    }


    //----------------------adding accumulator with s------------------------

    uint8_t tag[16];
    uint8_t addCarry = 0;
    for(int j = 0; j < 16; j++){
        uint16_t sum = s[j] + acc[j] + addCarry;
        if(sum > 0xFF){
            addCarry = (uint8_t)(sum / 0x100);
        }
        else{
            addCarry = 0;
        }
        tag[j] = (uint8_t)(sum & 0x00FF);
        // if(j == 15 && addCarry != 0){
        //     tag[j+1] = addCarry;
        // }
    }



    //populating output stream
    for(int i = 0; i < 16; i++){
        axis temp;
        temp.data = tag[i];
        if(i == 15){
            temp.last = 1;
        }
        else{
            temp.last = 0;
        }
        result_stream.write(temp);
    }

}


