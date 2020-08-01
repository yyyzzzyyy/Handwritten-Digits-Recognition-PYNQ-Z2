#include <hls_stream.h>    //stream的C仿真
#include <ap_axi_sdata.h>  //AXI流数据类型定义

#define bitwidth 32
#define InpWidth 8      //流水深度为8
#define quant_scale 128 // 2^(wordwidth-1)

#define INF 999999

#ifndef AXI_VAL_DEF
typedef ap_int<bitwidth> AXI_VAL;
struct AXI_DMA_IO{
	ap_int<bitwidth> data;
	bool last;
};                         // width = 40bit
#define AXI_VAL_DEF
#endif


#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) > (y)) ? (y) : (x))
