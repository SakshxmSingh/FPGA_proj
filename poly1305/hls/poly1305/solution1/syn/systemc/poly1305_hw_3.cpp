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
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_V_data_dout\" :  \"" << input_stream_V_data_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_V_data_empty_n\" :  \"" << input_stream_V_data_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_stream_V_data_read\" :  \"" << input_stream_V_data_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_V_last_V_dout\" :  \"" << input_stream_V_last_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_stream_V_last_V_empty_n\" :  \"" << input_stream_V_last_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_stream_V_last_V_read\" :  \"" << input_stream_V_last_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_V_data_din\" :  \"" << result_stream_V_data_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"result_stream_V_data_full_n\" :  \"" << result_stream_V_data_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_V_data_write\" :  \"" << result_stream_V_data_write.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_V_last_V_din\" :  \"" << result_stream_V_last_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"result_stream_V_last_V_full_n\" :  \"" << result_stream_V_last_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_stream_V_last_V_write\" :  \"" << result_stream_V_last_V_write.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

