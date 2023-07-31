#include <stdio.h>
#include <stdint.h>
#include <hls_stream.h>
#include <ap_int.h>

struct axis{
    uint8_t data;
    ap_uint<1> last;
};

void poly1305_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream);

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


