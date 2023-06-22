#include <stdio.h>
#include <stdint.h>
#include <hls_stream.h>
#include <ap_int.h>

#define SIZE 16

struct axis{
    uint32_t data;
    ap_uint<1> last;
}

void chacha20_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream);