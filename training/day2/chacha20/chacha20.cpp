#include <chacha20.h>
#include <stdint.h>
#include <string.h>

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


void chacha20_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream){
    #pragma HLS INTERFACE axis port=input_stream
    #pragma HLS INTERFACE axis port=result_stream
    #pragma HLS INTERFACE ap_ctrl_none port=return

    uint32_t state_matrix[SIZE], output_32[4][SIZE], text[SIZE*4];
    #pragma HLS ARRAY_PARTITION variable=input complete dim=1
    #pragma HLS ARRAY_PARTITION variable=text complete dim=1

    // Read input stream
    for(int i=0; i<SIZE; i++){
        text[i] = input_stream.read().data;
    }
    for(int i=0; i<SIZE; i++){
        state_matrix[i] = input_stream.read().data;
    }

    uint32_t text_2d[4][SIZE];
    for(int i=0; i<4; i++){
    #pragma HLS PIPELINE
        for(int j=0; j<SIZE; j++){
            text_2d[i][j] = text[i*SIZE + j];
        }
    }

    for (int i = 0; i < 4; i++) {
        chacha20(state_matrix, text_2d[i], output_32[i]);
        state_matrix[12] += 1;
    }

    for(int i=0; i<4; i++){
    #pragma HLS PIPELINE
        for(int j=0; j<SIZE; j++){
            axis temp;
            temp.data = output_32[i][j];
            temp.last = 0;
            if (i==3 && j==SIZE-1){
                temp.last = 1;
            }
            result_stream.write(temp);
        }
    }

}
