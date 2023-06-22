#include <ins_sort.h>

void insertion_sort_hw(hls::stream<AXIS> &input_stream, hls::stream<AXIS> &result_stream){
    #pragma HLS INTERFACE axis port=input_stream
    #pragma HLS INTERFACE axis port=result_stream
    #pragma HLS INTERFACE ap_ctrl_none port=return

    ELEMENT temp;
    AXIS temp_axis;

    ELEMENT input[SIZE], output[SIZE];
    #pragma HLS ARRAY_PARTITION variable=input complete dim=1

    // Read input stream
    for(int i=0; i<SIZE; i++){
        temp_axis = input_stream.read();
        input[i] = temp_axis.data;
    }

    // Insertion sort
    for(int i=0; i<SIZE; i++){
        output[i] = input[i];
    }

    for(int i=0; i<SIZE; i++){
        temp = output[i];
        for(int j=i-1; j>=0; j--){
            #pragma HLS PIPELINE
            if (temp < output[j]){
                output[j+1] = output[j];
                output[j] = temp;
            }
        }
    }

    // Write output stream
    for(int i=0; i<SIZE; i++){
        temp_axis.data = output[i];
        temp_axis.last = 0;
        if (i==SIZE-1){
            temp_axis.last = 1;
        }
        result_stream.write(temp_axis);
    }
}