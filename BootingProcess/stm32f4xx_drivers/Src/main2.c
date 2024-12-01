/****************************************************************/
/**
 *  file        main2.c
 *  containts   Run application code
 */
/****************************************************************/

/****************************************************************/
/*  Includes section                                            */
/****************************************************************/
#include "stm32f411xx.h"
#include "gpio2.h"
#include "tim.h"
#include "usart.h"

/****************************************************************/
/*  Define section                                              */
/****************************************************************/

/****************************************************************/
/*  Global variable                                             */
/****************************************************************/
/**
* @brief    Define global variable 
*/
GPIO_Handle_Type TX_Pin, RX_Pin;
USART_Handle_Type Usart2;

/****************************************************************/
/*  Internal function                                           */
/****************************************************************/


/****************************************************************/
/*  MAIN FUNCTION	                                            */
/****************************************************************/
int main(void)
{
	
	Usart2.pUSARTx = USART2;
	Usart2.USART_Config.USART_Baud = USART_STD_BAUD_9600;
	Usart2.USART_Config.USART_HWFlowControl = USART_HW_FLOW_CTRL_NONE;
	Usart2.USART_Config.USART_Mode = USART_MODE_TXRX;
	Usart2.USART_Config.USART_NoOfStopBits = USART_STOPBITS_1;
	Usart2.USART_Config.USART_WordLength = USART_WORDLEN_8BITS;
	Usart2.USART_Config.USART_ParityControl = USART_PARITY_DISABLE;
	
	TX_Pin.pGPIOx = GPIOA;
	TX_Pin.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_ALT;
	TX_Pin.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	TX_Pin.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(2);
	TX_Pin.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_PU;
	TX_Pin.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_ALT_NUM(7);

	RX_Pin.pGPIOx = GPIOA;
	RX_Pin.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_ALT;
	RX_Pin.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	RX_Pin.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	RX_Pin.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(3);
	RX_Pin.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_PU;
	RX_Pin.GPIO_PinConfig.GPIO_PinAltFunMode = GPIO_ALT_NUM(7);

	/*peripheral clock configuration*/
	GPIO_PeriClockControl(GPIOA, ENABLE);
	USART_PeriClockControl(USART2, ENABLE);
	TIM_PeriClockControl(TIM3, ENABLE);

	/*GPIO initialization*/
	GPIO_Init(&TX_Pin);
	GPIO_Init(&RX_Pin);
	TIM_Init(TIM3, 16U);
	
	/*UASRT2 initialization*/
	USART_Init(&Usart2);
	USART_SetBaudRate(&Usart2);

    /* Loop forever */
	while(1)
	{
		TIM_DelayMs(TIM3, 300);
		USART_Write(&Usart2, (uint8*)"Hello_world1_!!!\n\r", 18);
		TIM_DelayMs(TIM3, 300);
		USART_Write(&Usart2, (uint8*)"Hello_world2_!!!\n\r", 18);
		TIM_DelayMs(TIM3, 300);
		USART_Write(&Usart2, (uint8*)"Hello_world3_!!!\n\r", 18);
	}
	return 0;
}
