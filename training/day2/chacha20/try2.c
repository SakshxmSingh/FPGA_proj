
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void uint8_textToUint32(const char input[], uint32_t outputArray[], size_t outputSize) {
    size_t inputLen = strlen(input);
    inputLen--;

    size_t numElements = inputLen / 9;  // Each element in the input string has length 9 ("XX XXXXXX ")

    // Split the input into individual uint8_t elements
    uint8_t uint8Array[numElements * 4];
    size_t i = 0;
    size_t tokenStart = 0;
    size_t tokenEnd = 0;
    size_t tokenLength = 0;

    for (size_t k = 0; k <= inputLen; k++) {
        if (input[k] != ' ' && k != inputLen) {
            tokenEnd = k;
            tokenLength++;
        } else {
            if (tokenLength > 0) {
                uint8_t value = 0;
                for (size_t m = tokenStart; m <= tokenEnd; m++) {
                    if (input[m] >= '0' && input[m] <= '9') {
                        value = value * 16 + (input[m] - '0');
                    } else if (input[m] >= 'A' && input[m] <= 'F') {
                        value = value * 16 + (input[m] - 'A' + 10);
                    } else if (input[m] >= 'a' && input[m] <= 'f') {
                        value = value * 16 + (input[m] - 'a' + 10);
                    }
                }
                uint8Array[i++] = value;
            }

            tokenStart = k + 1;
            tokenLength = 0;
        }
    }

    // Handle padding if necessary
    size_t remainder = numElements % 4;
    if (remainder != 0) {
        size_t paddingElements = 4 - remainder;
        memset(uint8Array + numElements * 4, 0, paddingElements * 4);
        numElements += paddingElements;
    }

    // Group uint8_t elements into uint32_t elements
    for (size_t j = 0; j < numElements; j += 4) {
        outputArray[j / 4] = (uint32_t)(uint8Array[j + 3] << 24) |
                             (uint32_t)(uint8Array[j + 2] << 16) |
                             (uint32_t)(uint8Array[j + 1] << 8) |
                             (uint32_t)uint8Array[j];
    }
}


// void uint8_textToUint32(const char input[], uint32_t outputArray[], size_t outputSize) {
//     size_t inputLen = 0;
//     while (input[inputLen] != '\0') {
//         inputLen++;
//     }
//     inputLen--;

//     size_t numElements = inputLen / 9;  // Each element in the input string has length 9 ("XX XXXXXX ")

//     // Split the input into individual uint8_t elements
//     uint8_t uint8Array[numElements * 4];
//     size_t i = 0;
//     size_t tokenStart = 0;
//     size_t tokenEnd = 0;
//     size_t tokenLength = 0;

//     for (size_t k = 0; k <= inputLen; k++) {
//         if (input[k] != ' ' && k != inputLen) {
//             tokenEnd = k;
//             tokenLength++;
//         } else {
//             if (tokenLength > 0) {
//                 uint8_t value = 0;
//                 for (size_t m = tokenStart; m <= tokenEnd; m++) {
//                     if (input[m] >= '0' && input[m] <= '9') {
//                         value = value * 16 + (input[m] - '0');
//                     } else if (input[m] >= 'A' && input[m] <= 'F') {
//                         value = value * 16 + (input[m] - 'A' + 10);
//                     } else if (input[m] >= 'a' && input[m] <= 'f') {
//                         value = value * 16 + (input[m] - 'a' + 10);
//                     }
//                 }
//                 uint8Array[i++] = value;
//             }

//             tokenStart = k + 1;
//             tokenLength = 0;
//         }
//     }

//     // Group uint8_t elements into uint32_t elements
//     for (size_t j = 0; j < numElements; j++) {
//         outputArray[j] = (uint32_t)(uint8Array[j * 4 + 3] << 24) |
//                         (uint32_t)(uint8Array[j * 4 + 2] << 16) |
//                         (uint32_t)(uint8Array[j * 4 + 1] << 8) |
//                         (uint32_t)uint8Array[j * 4];
//     }
// }


void serializeString(const char input[], uint8_t outputArray[], size_t outputSize) {
    size_t inputLen = strlen(input);

    // Ensure outputSize is sufficient to hold the serialized elements
    if (outputSize < inputLen) {
        printf("Output array size is insufficient.\n");
        return;
    }

    // Serialize the string into uint8_t elements in hexadecimal
    for (size_t i = 0; i < inputLen; i++) {
        outputArray[i] = (uint8_t)input[i];
    }
}

void convertToHexArray(const char* text, uint8_t hexArray[], int length) {
    int i = 0;
    int j = 0;

    while (text[i] != '\0' && j < length) {
        // Convert two characters to a hex value
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

        // Skip any spaces
        while (text[i] == ' ')
            i++;
    }
}

int main() {
    // const char input[] = "'Twas brillig, and the slithy toves.Did gyre and gimble in the wabe:.All mimsy were the borogoves,.And the mome raths outgrabe.";
    // size_t outputSize = strlen(input);
    // uint8_t outputArray[outputSize];

    // serializeString(input, outputArray, outputSize);

    // // Output the result
    // for (size_t i = 0; i < outputSize; i++) {
    //     printf("%02x ", outputArray[i]);
    // }
    // printf("\n");

    char input[] = "00 02 2a 42 5c 2a";

    uint8_t outputArray[6];
    convertToHexArray(input, outputArray, 6);

    // Output the result
    for (size_t i = 0; i < 6; i++) {
        printf("%02x ", outputArray[i]);
    }

    return 0;
}
