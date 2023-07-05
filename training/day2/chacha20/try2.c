
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void uint8_textToUint32(const char input[], uint32_t outputArray[], size_t outputSize) {
    size_t inputLen = strlen(input);
    size_t numElements = inputLen / 9;  // Each element in the input string has length 9 ("XX XXXXXX ")

    // Split the input into individual uint8_t elements
    uint8_t uint8Array[numElements * 4];
    size_t i = 0;
    const char* delimiter = " ";
    char* token = strtok((char*)input, delimiter);
    while (token != NULL && i < numElements * 4) {
        uint8Array[i++] = (uint8_t)strtol(token, NULL, 16);
        token = strtok(NULL, delimiter);
    }

    // Group uint8_t elements into uint32_t elements
    for (size_t j = 0; j < numElements; j++) {
        outputArray[j] = (uint32_t)(uint8Array[j * 4 + 3] << 24) |
                        (uint32_t)(uint8Array[j * 4 + 2] << 16) |
                        (uint32_t)(uint8Array[j * 4 + 1] << 8) |
                        (uint32_t)uint8Array[j * 4];
    }

}

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

int main() {
    const char input[] = "'Twas brillig, and the slithy toves.Did gyre and gimble in the wabe:.All mimsy were the borogoves,.And the mome raths outgrabe.";
    size_t outputSize = strlen(input);
    uint8_t outputArray[outputSize];

    serializeString(input, outputArray, outputSize);

    // Output the result
    for (size_t i = 0; i < outputSize; i++) {
        printf("%02x ", outputArray[i]);
    }
    printf("\n");

    return 0;
}
