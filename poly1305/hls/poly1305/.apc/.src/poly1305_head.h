#include <stdio.h>
#include <stdint.h>
#include <hls_stream.h>
#include <ap_int.h>

struct axis{
    uint8_t data;
    ap_uint<1> last;
};

void poly1305_hw(hls::stream<axis> &input_stream, hls::stream<axis> &result_stream);



