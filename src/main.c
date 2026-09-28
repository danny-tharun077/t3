#include "sdk_project_config.h"
#include <stdio.h>
int main(void)
{
	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
	static char txBuff[64];
	LPUART_DRV_Init(INST_LPUART_1, &lpUartState0, &lpuart_0_InitConfig0);
	int len=(int)sprintf(txBuff,"Hello World !!\r\n");
	while(1){
	LPUART_DRV_SendData(INST_LPUART_1,(const uint8_t*)txBuff,(uint32_t)len);}
}
