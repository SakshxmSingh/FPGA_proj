#include <stdio.h>
#include <stdint.h>

void textNumToHexArr(char text[], uint8_t hexArray[], int output_length) {
    int i = 0;
    int j = 0;

    while (text[i] != '\0' && j < output_length) {
        uint8_t value = 0;
        int k;
        for (k = 0; k < 2; k++) {
            char c = text[i++];
            value <<= 4;
            if (c >= '0' && c <= '9')
                value |= c - '0';
            else if (c >= 'a' && c <= 'f')
                value |= c - 'a' + 10;
            else if (c >= 'A' && c <= 'F')
                value |= c - 'A' + 10;
        }

        hexArray[j++] = value;

        while (text[i] == ' ')
            i++;
    }
}

void textToHex(char text[], uint8_t hexArray[], int output_length){
    for(int i = 0; i < output_length; i++){
        hexArray[i] = (uint8_t)text[i];
    }
}

int main(){
    // char key_text[] = "85 d6 be 78 57 55 6d 33 7f 44 52 fe 42 d5 06 a8 01 03 80 8a fb 0d b2 fd 4a bf f6 af 41 49 f5 1b";
    // char plainText[] = "Cryptographic Forum Research Group";

    // char key_text[] = "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // char plainText[] = "................................................................";

    // char key_text[] = "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 36 e5 f6 b5 c5 e0 60 70 f0 ef ca 96 22 7a 86 3e";
    // char plainText[] = "Any submission to the IETF intended by the Contributor for publication as all or part of an IETF Internet-Draft or RFC and any statement made within the context of an IETF activity is considered an \"IETF Contribution\". Such statements include oral statements in IETF sessions, as well as written and electronic communications made at any time or place, which are addressed to";    
    
    char key_text[] = "36 e5 f6 b5 c5 e0 60 70 f0 ef ca 96 22 7a 86 3e 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    char plainText[] = "Any submission to the IETF intended by the Contributor for publication as all or part of an IETF Internet-Draft or RFC and any statement made within the context of an IETF activity is considered an \"IETF Contribution\". Such statements include oral statements in IETF sessions, as well as written and electronic communications made at any time or place, which are addressed to";    
    
    // char key_text[] = "1c 92 40 a5 eb 55 d3 8a f3 33 88 86 04 f6 b5 f0 47 39 17 c1 40 2b 80 09 9d ca 5c bc 20 70 75 c0";
    // char plainText[] = "'Twas brillig, and the slithy toves.Did gyre and gimble in the wabe:.All mimsy were the borogoves,.And the mome raths outgrabe.";

    // char key_text[] = "02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

    // char key_text[] = "02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF";
    // uint8_t text[] = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    // char key_text[] = "01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    //                   0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    //                   0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    // char key_text[] = "01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    //                   0xFB, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    //                   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01};

    // char key_text[] = "02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

    // char key_text[] = "01 00 00 00 00 00 00 00 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xE3, 0x35, 0x94, 0xD7, 0x50, 0x5E, 0x43, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                   0x33, 0x94, 0xD7, 0x50, 0x5E, 0x43, 0x79, 0xCD, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    // char key_text[] = "01 00 00 00 00 00 00 00 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00";
    // uint8_t text[] = {0xE3, 0x35, 0x94, 0xD7, 0x50, 0x5E, 0x43, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                   0x33, 0x94, 0xD7, 0x50, 0x5E, 0x43, 0x79, 0xCD, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    uint8_t key[32];
    textNumToHexArr(key_text, key, 32);

    int textLength = sizeof(plainText) - 1;
    // int textLength = sizeof(text)/sizeof(text[0]);
    uint8_t text[textLength];
    textToHex(plainText, text, textLength);


    //--------------Splitting the key---------------
    uint8_t r[16], s[16];

    for(int i = 0; i<16; i++){
        r[i] = key[i];
        s[i] = key[i+16];
    }

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

            int bool;
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
                bool = 1;
            }
            else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                bool = -1;
            }
            else{
                for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                    if(arr1[i] > arr2[i]){
                        bool = 1;
                        break;
                    }
                    else if(arr1[i] < arr2[i]){
                        bool = -1;
                        break;
                    }
                    else{
                        bool = 0;
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
                if(bool == -1){
                }

                while(bool >=0){
                    int temp[arr1Size - arr1Zeroes - 1];
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
                        int fullArr[arr1Size - arr1Zeroes - arr2Size - 1];
                        for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                            fullArr[k] = 0xFF;
                        }

                        addCarry = 0;
                        for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
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
                        bool = 1;
                    }
                    else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                        bool = -1;
                    }
                    else{
                        for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                            if(arr1[i] > arr2[i]){
                                bool = 1;
                                break;
                            }
                            else if(arr1[i] < arr2[i]){
                                bool = -1;
                                break;
                            }
                            else{
                                bool = 0;
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

            int bool;
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
                bool = 1;
            }
            else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                bool = -1;
            }
            else{
                for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                    if(arr1[i] > arr2[i]){
                        bool = 1;
                        break;
                    }
                    else if(arr1[i] < arr2[i]){
                        bool = -1;
                        break;
                    }
                    else{
                        bool = 0;
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
                while(bool >=0){
                    int temp[arr1Size - arr1Zeroes - 1];
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
                        int fullArr[arr1Size - arr1Zeroes - arr2Size - 1];
                        for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                            fullArr[k] = 0xFF;
                        }

                        addCarry = 0;
                        for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
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
                        bool = 1;
                    }
                    else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                        bool = -1;
                    }
                    else{
                        for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                            if(arr1[i] > arr2[i]){
                                bool = 1;
                                break;
                            }
                            else if(arr1[i] < arr2[i]){
                                bool = -1;
                                break;
                            }
                            else{
                                bool = 0;
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

        int bool = 1;
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


            while(bool >=0){
                int temp[arr1Size - arr1Zeroes - 1];
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
                    int fullArr[arr1Size - arr1Zeroes - arr2Size - 1];
                    for(int k = 0; k < arr1Size - arr1Zeroes - arr2Size - 1; k++){
                        fullArr[k] = 0xFF;
                    }

                    addCarry = 0;
                    for(int i = 0; i < arr1Size - arr1Zeroes - arr2Size - 1; i++){
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
                    bool = 1;
                }
                else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
                    bool = -1;
                }
                else{
                    for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
                        if(arr1[i] > arr2[i]){
                            bool = 1;
                            break;
                        }
                        else if(arr1[i] < arr2[i]){
                            bool = -1;
                            break;
                        }
                        else{
                            bool = 0;
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
    // sumAccS[16] += acc[16];

    printf("\n---------------------------tag---------------------------------\n");

    for(int i = 0; i < 16; i++){
        printf("%02x ", tag[i]);
    }
    printf("\n");

    for(int i = 0; i < 16; i++){
        printf("%c", tag[i]);
    }
    printf("\n");

    return 0;
}