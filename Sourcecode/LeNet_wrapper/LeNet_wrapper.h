#include <assert.h>        //重新宏定义
#include <hls_stream.h>    //stream的C仿真
#include <ap_axi_sdata.h>  //AXI流数据类型定义

#include "config.h"

#include "../hw_library/axi_dma_slave.h"
#include "../hw_library/axi_dma_master.h"
#include "../hw_library/stream_convolution_slideWindow.h"
#include "../hw_library/fixed_point_stream_convolution.h"
#include "../hw_library/pool.h"
#include "../hw_library/fully_connected.h"
