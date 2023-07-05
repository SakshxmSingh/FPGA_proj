#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 16

void serialize(uint32_t input[], uint8_t output[], size_t outputSize){
    size_t byteIndex = 0;

    for (size_t i = 0; i < 16; ++i) {
        uint32_t value = input[i];
        for (size_t j = 0; j < sizeof(uint32_t); ++j) {
            uint8_t byte = (value >> (j * 8)) & 0xFF;
            output[byteIndex++] = byte;
        }
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

void convertToUint32(const uint8_t input[], size_t inputSize, uint32_t output[]) {
    size_t numUint32 = inputSize / 4;
    size_t remainder = inputSize % 4;

    size_t i;
    for (i = 0; i < numUint32; i++) {
        output[i] = (input[i * 4] << 24) |
                    (input[i * 4 + 1] << 16) |
                    (input[i * 4 + 2] << 8) |
                    input[i * 4 + 3];
    }

    if (remainder > 0) {
        uint32_t value = 0;
        size_t j;
        for (j = 0; j < remainder; j++) {
            value |= input[numUint32 * 4 + j] << (24 - j * 8);
        }
        output[i] = value;
    }
}

void chacha20(uint32_t input_key[SIZE], uint32_t text[SIZE], uint32_t output[SIZE]) {

    // for(int k = 0; k<4; k++){

        uint32_t temp_after_round[SIZE];
        uint32_t temp_after_add[SIZE];

        for (int i = 0; i < SIZE; i++) {
            temp_after_round[i] = input_key[i];
        }
        for (int i = 0; i < SIZE; i++) {
            temp_after_add[i] = input_key[i];
        }

        for (int i = 0; i < 10; i++) {

            //-----------------------column quarter round----------------------------
            // a = input_key[0]
            // b = input_key[4]
            // c = input_key[8]
            // d = input_key[12]

            for (int j = 0; j < 4; j++) {
                temp_after_round[j] += temp_after_round[j + 4];
                temp_after_round[j + 12] ^= temp_after_round[j];
                uint32_t temp = temp_after_round[j + 12];
                temp_after_round[j + 12] = (temp << 16) | (temp >> 16);

                temp_after_round[j + 8] += temp_after_round[j + 12];
                temp_after_round[j + 4] ^= temp_after_round[j + 8];
                temp = temp_after_round[j + 4];
                temp_after_round[j + 4] = (temp << 12) | (temp >> 20);

                temp_after_round[j] += temp_after_round[j + 4];
                temp_after_round[j + 12] ^= temp_after_round[j];
                temp = temp_after_round[j + 12];
                temp_after_round[j + 12] = (temp << 8) | (temp >> 24);

                temp_after_round[j + 8] += temp_after_round[j + 12];
                temp_after_round[j + 4] ^= temp_after_round[j + 8];
                temp = temp_after_round[j + 4];
                temp_after_round[j + 4] = (temp << 7) | (temp >> 25);
            }

            //-----------------------diagonal quarter round----------------------------
            // a = input_key[(j+0)%4]
            // b = input_key[(j+5)%4 + 4]
            // c = input_key[(j+10)%4 + 8]
            // d = input_key[(j+15)%4 + 12]

            for (int j = 0; j < 4; j++) {
                temp_after_round[j] += temp_after_round[(j + 5) % 4 + 4];
                temp_after_round[(j + 15) % 4 + 12] ^= temp_after_round[j];
                uint32_t temp = temp_after_round[(j + 15) % 4 + 12];
                temp_after_round[(j + 15) % 4 + 12] = (temp << 16) | (temp >> 16);

                temp_after_round[(j + 10) % 4 + 8] += temp_after_round[(j + 15) % 4 + 12];
                temp_after_round[(j + 5) % 4 + 4] ^= temp_after_round[(j + 10) % 4 + 8];
                temp = temp_after_round[(j + 5) % 4 + 4];
                temp_after_round[(j + 5) % 4 + 4] = (temp << 12) | (temp >> 20);

                temp_after_round[j] += temp_after_round[(j + 5) % 4 + 4];
                temp_after_round[(j + 15) % 4 + 12] ^= temp_after_round[j];
                temp = temp_after_round[(j + 15) % 4 + 12];
                temp_after_round[(j + 15) % 4 + 12] = (temp << 8) | (temp >> 24);

                temp_after_round[(j + 10) % 4 + 8] += temp_after_round[(j + 15) % 4 + 12];
                temp_after_round[(j + 5) % 4 + 4] ^= temp_after_round[(j + 10) % 4 + 8];
                temp = temp_after_round[(j + 5) % 4 + 4];
                temp_after_round[(j + 5) % 4 + 4] = (temp << 7) | (temp >> 25);
            }
        }

        //modulo addition
        for(int j = 0; j < SIZE; j++) {
            temp_after_add[j] = temp_after_round[j] + input_key[j];
        }

        uint8_t serialized[SIZE * 4];

        serialize(temp_after_add, serialized, SIZE*4);
        convertToUint32(serialized, SIZE*4, temp_after_add);

        // for(int j = 0; j < SIZE; j++) {
        //     printf("%08x ", temp_after_add[j]);
        // }
        // printf("\n");

        for (int j = 0; j < SIZE; j++) {
            uint32_t temp = temp_after_add[j];
            // output[(k)*SIZE + j ] = temp ^ text[k*SIZE + j];
            output[j] = temp ^ text[j];

        }

    // }

}

int main() {
    // uint8_t text_8[][SIZE*4] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    

    uint32_t state_matrix[SIZE] = { 0x61707865, 0x3320646e, 0x79622d32, 0x6b206574};

    const char key_text[] = "1c 92 40 a5 eb 55 d3 8a f3 33 88 86 04 f6 b5 f0 47 39 17 c1 40 2b 80 09 9d ca 5c bc 20 70 75 c0";
    const char nonce_text[] = "00 00 00 00 00 00 00 00 00 00 00 02";
    const char plain_text[] = "'Twas brillig, and the slithy toves.Did gyre and gimble in the wabe:.All mimsy were the borogoves,.And the mome raths outgrabe.";
    size_t counter_int = 42;

    // const char key_text[] = "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 11 12 13 14 15 16 17 18 19 1a 1b 1c 1d 1e 1f";
    // const char nonce_text[] = "00 00 00 00 00 00 00 4a 00 00 00 00";
    // const char plain_text[] = "Ladies and Gentlemen of the class of '99: If I could offer you only one tip for the future, sunscreen would be it.";
    // size_t counter_int = 1;

    size_t text_size = strlen(plain_text);
    uint8_t text_8[text_size];
    serializeString(plain_text, text_8, text_size);

    // for(int i=0; i<text_size; i++){
    //     printf("%02x ", text_8[i]);
    // }


    uint32_t key[8];
    uint32_t nonce[3];
    uint8_textToUint32(nonce_text, nonce, 3);
    uint8_textToUint32(key_text, key, 8);

    state_matrix[12] = (uint32_t)counter_int;

    uint32_t text[text_size/4 + 1];
    convertToUint32(text_8, text_size, text);

    for(int i=0; i<8; i++){
        state_matrix[i+4] = key[i];
    }
    for(int i=0; i<3; i++){
        state_matrix[i+13] = nonce[i];
    }


    uint32_t output_32[4][SIZE], output_32_hw[4][SIZE];
    uint8_t output_8[text_size], output_8_hw[text_size];

    // chacha20(state_matrix, text, output_32);

    // for(int i=0; i<text_size/4 + 1; i++){
    //     printf("%08x ", output_32[i]);
    // }
    // printf("\n");

    uint32_t text_2d[4][SIZE];
    for(int i=0; i<4; i++){
        for(int j=0; j<SIZE; j++){
            text_2d[i][j] = text[i*SIZE + j];
        }
    }

    // for(int i = 0; i<(text_size/4 +1)/16; i++){
    //     for(int j = 0; j<SIZE; j++){
    //         printf("%08x ", text_2d[i][j]);
    //     }
    //     printf("\n");
    // }


    for (int i = 0; i < (text_size/4 + 1)/16; i++) {
        chacha20(state_matrix, text_2d[i], output_32[i]);
        state_matrix[12] += 1;
    }

    for (int i = 0; i < (text_size/4 +1)/16; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%08x ", output_32[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<4; i++){
        for(int j=0; j<SIZE; j++){
            for(int k=0; k<4; k++){
                output_8[i * SIZE * 4 + j * 4 + k] = (output_32[i][j] >> (24 - k * 8)) & 0xFF;
            }
        }
    }
    for(int i=0; i<text_size; i++){
        printf("%02x ", output_8[i]);
    }

    printf("\n");

    return 0;
}
