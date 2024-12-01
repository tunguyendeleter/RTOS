/****************************************************************/
/**
 *  file        main.c
 *  containts   Run application code
 */
/****************************************************************/

/****************************************************************/
/*  Includes section                                            */
/****************************************************************/
#include "stm32f411xx.h"
#include "gpio2.h"
#include "tim.h"

/****************************************************************/
/*  Define section                                              */
/****************************************************************/
/**
* @brief    Define LED order of Led1 -> Led2 -> Led3 -> Led4
*/
#define SWITCH_LED(X) ((X == 0) ? (12) : ((X == 1) ? (13) : ((X == 2) ? (14) : (15))))

/****************************************************************/
/*  Global variable                                             */
/****************************************************************/
/**
* @brief    Define global variable to store led state, order state, systick value
*/
uint8 gucLedState;
GPIO_Handle_Type Led, Led2, Led3, Led4;

/****************************************************************/
/*  Internal function                                           */
/****************************************************************/


/****************************************************************/
/*  MAIN FUNCTION	                                            */
/****************************************************************/
int main(void)
{
	Led.pGPIOx = GPIOD;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(12);
	Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	Led.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	Led2.pGPIOx = GPIOD;
	Led2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(13);
	Led2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	Led2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	Led2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	Led3.pGPIOx = GPIOD;
	Led3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(15);
	Led3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	Led3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	Led3.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	Led4.pGPIOx = GPIOD;
	Led4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NUM(14);
	Led4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	Led4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	Led4.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	/*peripheral clock configuration*/
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_PeriClockControl(GPIOB, ENABLE);
	GPIO_PeriClockControl(GPIOD, ENABLE);
	TIM_PeriClockControl(TIM2, ENABLE);

	/*GPIO initialization*/
	GPIO_Init(&Led);
	GPIO_Init(&Led2);
	GPIO_Init(&Led3);
	GPIO_Init(&Led4);
	TIM_Init(TIM2, 16U);

    /* Loop forever */
	while(1)
	{
		TIM_DelayMs(TIM2, 500);
		GPIO_WriteToOutputPort(GPIOD, 0);
		GPIO_WriteToOutputPin(GPIOD, SWITCH_LED(gucLedState), SET);
		gucLedState++;
		gucLedState %= 4;
	}
	return 0;
}
