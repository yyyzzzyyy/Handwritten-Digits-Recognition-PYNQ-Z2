#include <hls_stream.h>    //stream��C����
#include <ap_axi_sdata.h>  //AXI���������Ͷ���

#define bitwidth 32
#define InpWidth 8      //��ˮ���Ϊ8
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
