#include <ins_sort.h>

void insertion_sort(ELEMENT input[SIZE], ELEMENT output[SIZE]){
    ELEMENT temp;
    for(int i=0; i<SIZE; i++){
        output[i] = input[i];
    }

    for(int i=0; i<SIZE; i++){
        temp = output[i];
        for(int j=i-1; j>=0; j--){
            if (temp < output[j]){
                output[j+1] = output[j];
                output[j] = temp;
            }
        }
    }
}

int main(){
    ELEMENT input[SIZE], output[SIZE], output_hw[SIZE];

    // Initialize input
    input = {5, 3, 6, 1, 2, 4, 7, 9, 8, 10, 12, 11};

    // Software insertion sort
    insertion_sort(input, output);

    hls::stream<AXIS> input_stream, result_stream;
    AXIS temp;

    // Initialize input stream
    for(int i=0; i<SIZE; i++){
        temp.data = input[i];
        temp.last = 0;
        if (i==SIZE-1){
            temp.last = 1;
        }
        input_stream.write(temp);
    }

    // Hardware insertion sort
    insertion_sort_hw(input_stream, result_stream);

    // Read output stream
    for(int i=0; i<SIZE; i++){
        temp = result_stream.read();
        output_hw[i] = temp.data;
    }

    // Check results
    for(int i=0; i<SIZE; i++){
        if (output[i] != output_hw[i]){
            printf("Test failed\n");
            return 1;
        }
    }

    printf("Test passed\n");
    return 0;
}