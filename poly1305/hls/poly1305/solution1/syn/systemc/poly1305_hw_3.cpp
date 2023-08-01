#include "poly1305_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void poly1305_hw::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_TDATA\" :  \"" << input_stream_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_TVALID\" :  \"" << input_stream_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_stream_TREADY\" :  \"" << input_stream_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_TLAST\" :  \"" << input_stream_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_TDATA\" :  \"" << result_stream_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_TVALID\" :  \"" << result_stream_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"result_stream_TREADY\" :  \"" << result_stream_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_TLAST\" :  \"" << result_stream_TLAST.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

