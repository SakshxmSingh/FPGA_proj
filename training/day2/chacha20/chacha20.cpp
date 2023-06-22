#include <chacha20.h>
#include <stdint.h>

void chacha20_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream){
    #pragma HLS INTERFACE axis port=input_stream
    #pragma HLS INTERFACE axis port=result_stream
    #pragma HLS INTERFACE ap_ctrl_none port=return

    uint32_t input_key[SIZE], output[SIZE], text[SIZE];
    #pragma HLS ARRAY_PARTITION variable=input complete dim=1
    #pragma HLS ARRAY_PARTITION variable=text complete dim=1

    // Read input stream
    for(int i=0; i<SIZE; i++){
        text[i] = input_stream.read().data;
    }
    for(int i=0; i<SIZE; i++){
        input_key[i] = input_stream.read().data;
    }

    uint32_t temp_after_round[SIZE];

    for(int i=0; i<SIZE; i++){
        temp_after_round[i] = input_key[i];
    }

    for(int i=0; i<10; i++){

        //-----------------------column quarter round----------------------------
        // a = input_key[0]
        // b = input_key[4]
        // c = input_key[8]
        // d = input_key[12]

        for(int j=0; j<4; j++){
            #pragma HLS PIPELINE
            temp_after_round[j] += temp_after_round[j+4];
            temp_after_round[j+12] ^= temp_after_round[j];
            temp_after_round[j+12] <<<= 16;

            temp_after_round[j+8] += temp_after_round[j+12];
            temp_after_round[j+4] ^= temp_after_round[j+8];
            temp_after_round[j+4] <<<= 12;

            temp_after_round[j] += temp_after_round[j+4];
            temp_after_round[j+12] ^= temp_after_round[j];
            temp_after_round[j+12] <<<= 8;

            temp_after_round[j+8] += temp_after_round[j+12];
            temp_after_round[j+4] ^= temp_after_round[j+8];
            temp_after_round[j+4] <<<= 7;
        }

        //-----------------------diagonal quarter round----------------------------
        // a = input_key[(j+0)%4]
        // b = input_key[(j+5)%4 + 4]
        // c = input_key[(j+10)%4 + 8]
        // d = input_key[(j+15)%4 + 12]

        for(int j=0; j<4; j++){
            #pragma HLS PIPELINE
            temp_after_round[j] += temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+15)%4 + 12] ^= temp_after_round[j];
            temp_after_round[(j+15)%4 + 12] <<<= 16;

            temp_after_round[(j+10)%4 + 8] += temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+5)%4 + 4] ^= temp_after_round[(j+10)%4 + 8];
            temp_after_round[(j+5)%4 + 4] <<<= 12;

            temp_after_round[j] += temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+15)%4 + 12] ^= temp_after_round[j];
            temp_after_round[(j+15)%4 + 12] <<<= 8;

            temp_after_round[(j+10)%4 + 8] += temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+5)%4 + 4] ^= temp_after_round[(j+10)%4 + 8];
            temp_after_round[(j+5)%4 + 4] <<<= 7;
        }

    }


    //modulo addition
    uint32_t temp_after_add[SIZE];

    uint32_t carry = 0;
    for(int j=0; j<SIZE; j++){
        uint64_t sum = (uint64_t)temp_after_round[j] + input_key[j] + carry;
        temp_after_add[j] = (uint32_t)sum;
        carry = (uint32_t)(sum >> 32);
    }

    //output
    for(int j=0; j<SIZE; j++){
        output[j] = temp_after_add[j] ^ text[j];
    }


    // Write output stream
    for(int i=0; i<SIZE; i++){
        axis temp;
        temp.data = output[i];
        temp.last = 0;
        if (i==SIZE-1){
            temp.last = 1;
        }
        result_stream.write(temp);
    }
}
