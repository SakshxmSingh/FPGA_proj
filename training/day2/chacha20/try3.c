
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 16


void serialize(uint32_t input[], uint8_t output[], size_t outputSize){
    size_t byteIndex = 0;

    for (size_t i = 0; i < 16; ++i) {
        uint32_t value = input[i];
    #pragma HLS PIPELINE
        for (size_t j = 0; j < sizeof(uint32_t); ++j) {
            uint8_t byte = (value >> (j * 8)) & 0xFF;
            output[byteIndex++] = byte;
        }
    }

}

void serializeString(const char input[], uint8_t outputArray[], size_t outputSize) {
    int inputLen = outputSize;

    // Ensure outputSize is sufficient to hold the serialized elements
    if (outputSize < inputLen) {
        printf("Output array size is insufficient.\n");
        return;
    }

    for(int i = 0; i < inputLen; i++){
        printf("%c", input[i]);
    }
    printf("\n");

    // Serialize the string into uint8_t elements in hexadecimal
    for (int i = 0; i < inputLen; i++) {
        outputArray[i] = input[i];
    }
}

void convertToHexArray(const char* text, uint8_t hexArray[], int length) {
    int i = 0;
    int j = 0;

    while (text[i] != '\0' && j < length) {
        // Convert two characters to a hex value
        uint8_t value = 0;
        int k;
    #pragma HLS PIPELINE
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

void convertToUint32_endianDiff(const uint8_t input[], size_t inputSize, uint32_t output[]) {
    size_t numUint32 = inputSize / 4;
    size_t remainder = inputSize % 4;

    size_t i;
    for (i = 0; i < numUint32; i++) {
        output[i] = (input[i * 4 + 3] << 24) |
                    (input[i * 4 + 2] << 16) |
                    (input[i * 4 + 1] << 8) |
                    input[i * 4];
    }

    if (remainder > 0) {
        uint32_t value = 0;
        size_t j;
        for (j = 0; j < remainder; j++) {
            value |= input[numUint32 * 4 + (remainder - 1) - j] << (j * 8);
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
    #pragma HLS PIPELINE
            

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

int main(){
    // uint8_t text_8[][SIZE*4] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    

    uint32_t state_matrix[SIZE] = { 0x61707865, 0x3320646e, 0x79622d32, 0x6b206574};

    // const char key_text[] = "1c 92 40 a5 eb 55 d3 8a f3 33 88 86 04 f6 b5 f0 47 39 17 c1 40 2b 80 09 9d ca 5c bc 20 70 75 c0";
    // const char nonce_text[] = "00 00 00 00 00 00 00 00 00 00 00 02";
    // const char plain_text[] = "'Twas brillig, and the slithy toves.Did gyre and gimble in the wabe:.All mimsy were the borogoves,.And the mome raths outgrabe.";
    // size_t counter_int = 42;

    const char key_text[] = "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 11 12 13 14 15 16 17 18 19 1a 1b 1c 1d 1e 1f";
    const char nonce_text[] = "00 00 00 00 00 00 00 4a 00 00 00 00";
    const char plain_text[] = "Ladies and Gentlemen of the class of '99: If I could offer you only one tip for the future, sunscreen would be it.";
    size_t counter_int = 1;

    size_t text_size = sizeof(plain_text)/sizeof(plain_text[0]) - 1;
    uint8_t text_8[text_size];
    serializeString(plain_text, text_8, text_size);

    for(int i=0; i<text_size; i++){
        printf("%02x ", text_8[i]);
    }
    printf("\n");


    uint32_t key[8];
    uint32_t nonce[3];
    uint8_t nonce_8[12];
    uint8_t key_8[32];
    // uint8_textToUint32(nonce_text, nonce, 3);
    convertToHexArray(nonce_text, nonce_8, 12);
    convertToHexArray(key_text, key_8, 32);

    // for(int i=0; i<32; i++){
    //     printf("%02x ", key_8[i]);
    // }
    // printf("\n");

    // for(int i=0; i<12; i++){
    //     printf("%02x ", nonce_8[i]);
    // }
    // printf("\n");

    convertToUint32_endianDiff(nonce_8, 12, nonce);
    convertToUint32_endianDiff(key_8, 32, key);

    // for(int i=0; i<8; i++){
    //     printf("%08x ", key[i]);
    // }
    // printf("\n");

    // for(int i=0; i<3; i++){
    //     printf("%08x ", nonce[i]);
    // }
    // printf("\n");

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


    for (int i = 0; i < (text_size/4 + 1)/16; i++) {
        chacha20(state_matrix, text_2d[i], output_32[i]);
        state_matrix[12] += 1;
    }


    for(int i=0; i<4; i++){
        for(int j=0; j<SIZE; j++){
            for(int k=0; k<4; k++){
                output_8[i * SIZE * 4 + j * 4 + k] = (output_32[i][j] >> (24 - k * 8)) & 0xFF;
            }
        }
    }

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<SIZE; j++){
    //         printf("%08x ", output_32[i][j]);
    //     }
    // }
    // printf("\n");

    for(int i=0; i<text_size; i++){
        printf("%02x ", output_8[i]);
    }




    // //comparing the results
    // for(int i=0; i<text_size; i++){
    //     if(output_8[i] != output_8_hw[i]){
    //         printf("Error at index %d\n", i);
    //         printf("Expected: %x\n", output_8[i]);
    //         printf("Got: %x\n", output_8_hw[i]);
    //         return 1;
    //     }
    // }
    // printf("Success\n");
    // return 0;                         
}
