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
    int arr1[] = {6, 4, 1, 3, 7, 5, 8, 8, 9, 2, 1, 7};
    int arr2[] = {8, 7, 1, 9, 2};

    int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

    int bool;

    compareMagnitude(arr1, arr1Size, arr2, arr2Size, &bool);

    while(bool >=0){
        for(int i = 0; i < arr2Size; i++){
            if(arr1[i] >= arr2[i]){
                arr1[i] -= arr2[i];
            }
            else{
                arr1[i] += 10;
                arr1[i+1] -= 1;
                arr1[i] -= arr2[i];
            }
        }

        for(int i = 0; i < arr1Size - 1; i++){
            if(arr1[i] < 0){
                arr1[i] += 10;
                arr1[i+1] -= 1;
            }
        }

        compareMagnitude(arr1, arr1Size, arr2, arr2Size, &bool);

        // for(int i = 0; i < 12; i++){
        //     printf("%d ", arr1[i]);
        // }
        // printf("\n");
    }

    printf("%d\n", bool);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("%d\n", 712988573146 % 29178);
    // printf("%d\n", 52/10);

    return 0;
}