#include <matrix.h>

void matrix_mul(ELEMENT mat1[row1][col1], ELEMENT mat2[row2][col2], ELEMENT result[row1][col2]){
    ELEMENT sum;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            sum = 0;
            for(int k=0; k<col1; k++){
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

int main(){
    ELEMENT mat1[row1][col1], mat2[row2][col2], result[row1][col2], result_hw[row1][col2];

    // Initialize matrices
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            mat1[i][j] = i*col1+j;
        }
    }

    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            mat2[i][j] = i*col2+j;
        }
    }


    // Software matrix multiplication
    matrix_mul(mat1, mat2, result);

    hls::stream<AXIS> input_stream, result_stream;
    AXIS temp;

    // Initialize input stream
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            temp.data = mat1[i][j];
            temp.last = 0;
            if (i==row1-1 && j==col1-1){
                temp.last = 1;
            }
            input_stream.write(temp);
        }
    }

    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            temp.data = mat2[i][j];
            temp.last = 0;
            if (i==row2-1 && j==col2-1){
                temp.last = 1;
            }
            input_stream.write(temp);
        }
    }

    // Hardware matrix multiplication
    matrix_mul_hw(input_stream, result_stream);

    // Read result from output stream
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            temp = result_stream.read();
            result_hw[i][j] = temp.data;
        }
    }

    // Compare results
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            if (result[i][j] != result_hw[i][j]){
                printf("Mismatch: result[%d][%d] = %f, result_hw[%d][%d] = %f\n", i, j, result[i][j], i, j, result_hw[i][j]);
                return 1;
            }
        }
    }
    return 0;
}