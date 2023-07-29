#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void compareMagnitude(int arr1[], int arr1Size, int arr2[], int arr2Size, int *bool){
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
        *bool = 1;
        return;
    }
    else if(arr1Size - arr1Zeroes < arr2Size - arr2Zeroes){
        *bool = -1;
        return;
    }
    else{
        for(int i = arr1Size - arr1Zeroes - 1; i >= 0; i--){
            if(arr1[i] > arr2[i]){
                *bool = 1;
                return;
            }
            else if(arr1[i] < arr2[i]){
                *bool = -1;
                return;
            }
        }
        *bool = 0;
    }
}

int main(){
    // int arr1[] = {0x32, 0x21, 0x8a, 0x0f, 0x54};
    // int arr2[] = {0x05, 0x82};

    // int arr1[] = {0x32, 0x91, 0x43, 0x32};
    // int arr2[] = {0x05, 0x82};

    int arr1[] = {0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00};
    int arr2[] = {0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03};

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
                // printf("%02x ", fullArr[k]);
            }
            // printf("\n");

            int addCarry = 0;
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
                printf("%02x ", temp[i]);
            }
            printf("\n");
        
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

        for(int i=0; i < arr1Size; i++){
            printf("%02x ", arr1[i]);
        }
        printf("\n");
    }

    printf("%d\n", bool);

    for(int i = 0; i < arr1Size; i++){
        printf("%02x ", arr1[i]);
    }
    printf("\n");
    // printf("%0x\n", 0x540f8a2132 % 0x8205);

    return 0;
}