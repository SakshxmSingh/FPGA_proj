#include <chacha_head.h>
#include <stdint.h>

void chacha20(uint32_t input_key[SIZE], uint32_t text[SIZE], uint32_t output[SIZE]){

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
            temp_after_round[j] += temp_after_round[j+4];
            temp_after_round[j+12] ^= temp_after_round[j];
            uint32_t temp = temp_after_round[j+12];
            temp_after_round[j+12] = (temp << 16) | (temp >> 16);

            temp_after_round[j+8] += temp_after_round[j+12];
            temp_after_round[j+4] ^= temp_after_round[j+8];
            temp = temp_after_round[j+4];
            temp_after_round[j+4] = (temp << 12) | (temp >> 20);

            temp_after_round[j] += temp_after_round[j+4];
            temp_after_round[j+12] ^= temp_after_round[j];
            temp = temp_after_round[j+12];
            temp_after_round[j+12] = (temp << 8) | (temp >> 24);

            temp_after_round[j+8] += temp_after_round[j+12];
            temp_after_round[j+4] ^= temp_after_round[j+8];
            temp = temp_after_round[j+4];
            temp_after_round[j+4] = (temp << 7) | (temp >> 25);
        }

        //-----------------------diagonal quarter round----------------------------
        // a = input_key[(j+0)%4]
        // b = input_key[(j+5)%4 + 4]
        // c = input_key[(j+10)%4 + 8]
        // d = input_key[(j+15)%4 + 12]

        for(int j=0; j<4; j++){
            temp_after_round[j] += temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+15)%4 + 12] ^= temp_after_round[j];
            uint32_t temp = temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+15)%4 + 12] = (temp << 16) | (temp >> 16);

            temp_after_round[(j+10)%4 + 8] += temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+5)%4 + 4] ^= temp_after_round[(j+10)%4 + 8];
            temp = temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+5)%4 + 4] = (temp << 12) | (temp >> 20);

            temp_after_round[j] += temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+15)%4 + 12] ^= temp_after_round[j];
            temp = temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+15)%4 + 12] = (temp << 8) | (temp >> 24);

            temp_after_round[(j+10)%4 + 8] += temp_after_round[(j+15)%4 + 12];
            temp_after_round[(j+5)%4 + 4] ^= temp_after_round[(j+10)%4 + 8];
            temp = temp_after_round[(j+5)%4 + 4];
            temp_after_round[(j+5)%4 + 4] = (temp << 7) | (temp >> 25);
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

}

int main(){
    uint32_t input_key[SIZE] = {0x61707865, 0x3320646e, 0x79622d32, 0x6b206574,
                                0x03020100, 0x07060504, 0x0b0a0908, 0x0f0e0d0c,
                                0x13121110, 0x17161514, 0x1b1a1918, 0x1f1e1d1c,
                                0x00000001, 0x09000000, 0x4a000000, 0x00000000};

    uint32_t text[SIZE] = {0x6c617669, 0x75716520, 0x74692065, 0x6e64202e,
                           0x6d726f66, 0x6b656420, 0x65727261, 0x6e646f6d,
                           0x00000000, 0x00000000, 0x00000000, 0x00000000,
                           0x6c617669, 0x75716520, 0x74692065, 0x6e64202e};

    uint32_t output[SIZE], output_hw[SIZE];

    chacha20(input_key, text, output);

    //populating the stream
    hls::stream<axis> input_stream, result_stream;

    for(int i=0; i<SIZE; i++){
        axis temp;
        temp.data = text[i];
        if(i==SIZE-1){
            temp.last = 1;
        }
        else{
            temp.last = 0;
        }
        input_stream.write(temp);
    }

    for(int i=0; i<SIZE; i++){
        axis temp;
        temp.data = input_key[i];
        if(i==SIZE-1){
            temp.last = 1;
        }
        else{
            temp.last = 0;
        }
        input_stream.write(temp);
    }

    //calling the top function
    chacha20_hw(input_stream, result_stream);


    //reading hw output
    for(int i=0; i<SIZE; i++){
        axis temp = result_stream.read();
        output_hw[i] = temp.data;
    }

    //comparing the results
    for(int i=0; i<SIZE; i++){
        if(output[i] != output_hw[i]){
            printf("Error at index %d\n", i);
            printf("Expected: %x\n", output[i]);
            printf("Got: %x\n", output_hw[i]);
            return 1;
        }
    }
    printf("Success\n");
    return 0;                         
}