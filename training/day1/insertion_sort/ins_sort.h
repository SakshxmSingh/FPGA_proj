#include <stdio.h>
#include <hls_stream.h>
#include <ap_int.h>

typedef float ELEMENT;
#define SIZE 12

struct AXIS{
    ELEMENT data;
    ap_uint<1> last;
};

void insertion_sort_hw(hls::stream<AXIS> &input_stream, hls::stream<AXIS> &result_stream);