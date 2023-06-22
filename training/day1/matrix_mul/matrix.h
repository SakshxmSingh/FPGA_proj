#include <stdio.h>
#include <hls_stream.h>
#include <ap_int.h>

typedef float ELEMENT;
#define row1 4
#define col1 4
#define row2 4
#define col2 4

struct AXIS{
    ELEMENT data;
    ap_uint<1> last;
};


void matrix_mul_hw(hls::stream<AXIS> &input_stream, hls::stream<AXIS> &result_stream);