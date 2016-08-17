#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STDOUT_BASEADDRESS /* Andrew Powell - Needed by xil_printf */

/******************************************************************/

/* Definitions for driver AXI_DISPCTRL */
#define XPAR_AXI_DISPCTRL_NUM_INSTANCES 1

/* Definitions for peripheral AXI_DISPCTRL_0 */
#define XPAR_AXI_DISPCTRL_0_DEVICE_ID 0
#define XPAR_AXI_DISPCTRL_0_S_AXI_PBASEADDR 0x43C00000	/* Physical Address. */
#define XPAR_AXI_DISPCTRL_0_S_AXI_PHIGHADDR 0x43C0FFFF	/* Physical Address. */
#define XPAR_AXI_DISPCTRL_0_S_AXI_LEN ( XPAR_AXI_DISPCTRL_0_S_AXI_PHIGHADDR-XPAR_AXI_DISPCTRL_0_S_AXI_PBASEADDR+1 )
extern uint32_t XPAR_AXI_DISPCTRL_0_S_AXI_BASEADDR;		/* Virtual Address. */
extern uint32_t XPAR_AXI_DISPCTRL_0_S_AXI_HIGHADDR;		/* Virtual Address. */


/******************************************************************/

/* Definitions for driver AXIVDMA */
#define XPAR_XAXIVDMA_NUM_INSTANCES 1

/* Definitions for peripheral AXI_VDMA_0 */
#define XPAR_AXI_VDMA_0_DEVICE_ID 0
#define XPAR_AXI_VDMA_0_PBASEADDR 0x43000000	/* Physical Address. */
#define XPAR_AXI_VDMA_0_PHIGHADDR 0x4300FFFF	/* Physical Address. */
#define XPAR_AXI_VDMA_0_LEN ( XPAR_AXI_VDMA_0_PHIGHADDR-XPAR_AXI_VDMA_0_PBASEADDR+1 )
extern uint32_t XPAR_AXI_VDMA_0_BASEADDR;		/* Virtual Address. */
extern uint32_t XPAR_AXI_VDMA_0_HIGHADDR;		/* Virtual Address. */
#define XPAR_AXI_VDMA_0_NUM_FSTORES 3
#define XPAR_AXI_VDMA_0_INCLUDE_MM2S 1
#define XPAR_AXI_VDMA_0_INCLUDE_MM2S_DRE 0
#define XPAR_AXI_VDMA_0_M_AXI_MM2S_DATA_WIDTH 64
#define XPAR_AXI_VDMA_0_INCLUDE_S2MM 0
#define XPAR_AXI_VDMA_0_INCLUDE_S2MM_DRE 0
#define XPAR_AXI_VDMA_0_M_AXI_S2MM_DATA_WIDTH 64
#define XPAR_AXI_VDMA_0_AXI_MM2S_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_0_AXI_S2MM_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_0_MM2S_GENLOCK_MODE 1
#define XPAR_AXI_VDMA_0_MM2S_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_0_S2MM_GENLOCK_MODE 0
#define XPAR_AXI_VDMA_0_S2MM_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_0_INCLUDE_SG 0
#define XPAR_AXI_VDMA_0_ENABLE_VIDPRMTR_READS 1
#define XPAR_AXI_VDMA_0_USE_FSYNC 1
#define XPAR_AXI_VDMA_0_FLUSH_ON_FSYNC 1
#define XPAR_AXI_VDMA_0_MM2S_LINEBUFFER_DEPTH 2048
#define XPAR_AXI_VDMA_0_S2MM_LINEBUFFER_DEPTH 512
#define XPAR_AXI_VDMA_0_INCLUDE_INTERNAL_GENLOCK 1
#define XPAR_AXI_VDMA_0_S2MM_SOF_ENABLE 1
#define XPAR_AXI_VDMA_0_M_AXIS_MM2S_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_0_S_AXIS_S2MM_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_1 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_5 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_6 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_7 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_9 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_13 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_14 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_15 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_ALL 0
#define XPAR_AXI_VDMA_0_ADDR_WIDTH 32

#ifdef __cplusplus
}
#endif