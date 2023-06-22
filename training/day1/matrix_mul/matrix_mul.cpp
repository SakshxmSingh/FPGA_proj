#include <matrix.h>

void matrix_mul_hw(hls::stream<AXIS> &input_stream,hls::stream<AXIS> &input_stream){
    AXIS temp;
    ELEMENT mat1[row1][col1], mat2[row2][col2], result_hw[row1][col2];
    #pragma HLS ARRAY_PARTITION variable=mat1 complete dim=1
    #pragma HLS ARRAY_PARTITION variable=mat2 complete dim=2

    // Initialize matrices
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            #pragma HLS PIPELINE
            temp = input_stream.read();
            mat1[i][j] = temp.data;
        }
    }

    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            #pragma HLS PIPELINE
            temp = input_stream.read();
            mat2[i][j] = temp.data;
        }
    }

    // Hardware matrix multiplication
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            #pragma HLS PIPELINE
            ELEMENT sum = 0;
            for(int k=0; k<col1; k++){
                sum += mat1[i][k] * mat2[k][j];
            }
            result_hw[i][j] = sum;
        }
    }

    // Write result to output stream
    for(int i=0; i<row1; i++){
        for(intj=0; j<col2; j++){
            #pragma HLS PIPELINE
            temp.data = result_hw[i][j];
            temp.last = 0;
            if (i==row1-1 && j==col2-1){
                temp.last = 1;
            }
            result_stream.write(temp);
        }
    }

    return;

}