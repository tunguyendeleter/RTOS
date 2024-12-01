/******************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "tim.h"
#include "stm32f411xx.h"


/******************************************************************************
 *  GLOBAL FUNCTION
 *****************************************************************************/
void TIM_PeriClockControl(TIM_Type *pTIMx, uint8 EnorDis)
{
    /* Enable the TIM clock */
    if (pTIMx == TIM2)
    {
        TIM2_CLK_EN();
    }else if (pTIMx == TIM3)
    {
        TIM3_CLK_EN();
    }
    
}

void TIM_Init(TIM_Type *pTIMx, uint32 Prescale) {
    /* Set the prescaler to make the timer tick every 1 µs (assuming 16 MHz clock) */
    pTIMx->PSC = Prescale - 1;
}

/* Delay in microseconds */
void TIM_DelayUs(TIM_Type *pTIMx, uint32_t us) {
    /* Disable the timer */
    pTIMx->CR1 &= ~TIM_CR1_CEN;

    /* Set the auto-reload value for the desired delay */
    pTIMx->ARR = us - 1;

    /* Clear the update flag */
    pTIMx->SR &= ~TIM_SR_UIF;

    /* Enable the counter */
    pTIMx->CR1 |= TIM_CR1_CEN;

    /* Wait until the update flag is set */
    while (!(pTIMx->SR & TIM_SR_UIF));

    /* Disable the timer again */
    pTIMx->CR1 &= ~TIM_CR1_CEN;
}

void TIM_DelayMs(TIM_Type *pTIMx, uint32_t ms) {
    /* Delay in milliseconds */
    while (ms--) {
    	TIM_DelayUs(pTIMx, 1000);
    }
}
