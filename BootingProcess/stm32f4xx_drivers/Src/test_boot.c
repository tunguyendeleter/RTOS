/****************************************************************/
/**
 *  file        test_boot.c
 *  containts   Run application code
 */
/****************************************************************/

/****************************************************************/
/*  Includes section                                            */
/****************************************************************/
#include "stm32f411xx.h"
#include "TuNN41_OsKernel.h"
#include "systick.h"

/****************************************************************/
/*  Define section                                              */
/****************************************************************/
#define BASEADDR_APP_BOOTLOADER 0x08000000
#define BASEADDR_APP_PROGRAM1 0x08005000
#define BASEADDR_APP_PROGRAM2 0x0800A000
#define BASEADDR_APP_PROGRAM3 0x0800F000


/****************************************************************/
/*  Global variable                                             */
/****************************************************************/
/**
* @brief    Define global variable
*/
Os_Semaphore semaphore;

/****************************************************************/
/*  Internal function                                           */
/****************************************************************/


/****************************************************************/
/*  MAIN FUNCTION	                                            */
/****************************************************************/
int main(void)
{
	/*peripheral clock configuration*/

	/*GPIO initialization*/

	/*UASRT2 initialization*/

#if(DYNAMIC_ALLOCATION == STD_OFF)
	/* Static allocation */
	Os_KernelInit(10);
	Os_KernelStackInit(NUMBER_THREAD(3));
	Os_KernelAddThread(
			NUMBER_THREAD(3),
			GET_PROCESS_ADDRESS(BASEADDR_APP_PROGRAM1),
			GET_PROCESS_ADDRESS(BASEADDR_APP_PROGRAM2),
			GET_PROCESS_ADDRESS(BASEADDR_APP_PROGRAM3));
#if(HARDWARE_PERIODIC_THREAD_SUPPORT == STD_ON)
	Os_PeriodicTaskHardwareInit(1000, 5);
#elif(HARDWARE_PERIODIC_THREAD_SUPPORT == STD_ON)
	Os_KernelAddPeriodicTask(NUMBER_PERIODIC_THREAD(2), ThreadTask4, 1000,ThreadTask5, 2000);
#endif
	Os_KernelLaunch();
#else
	/* Dynamic allocation */
	Os_KernelInit(10);
	Os_KernelStackInit(ThreadTask, 100);
	Os_KernelStackInit(ThreadTask2, 100);
	Os_KernelStackInit(ThreadTask3, 100);
#if(HARDWARE_PERIODIC_THREAD_SUPPORT == STD_ON)
	Os_PeriodicTaskHardwareInit(1000, 5);
#elif(HARDWARE_PERIODIC_THREAD_SUPPORT == STD_ON)
	Os_KernelAddPeriodicTask(NUMBER_PERIODIC_THREAD(2), BlinkLed, 1000, ThreadTask4, 2000);
#endif
	Os_KernelLaunch();
#endif

    while (1)
    {
    }
	return 0;
}



/****************************************************************/
/*  Exception handlers                                          */
/****************************************************************/

#if(HARDWARE_PERIODIC_THREAD_SUPPORT == STD_ON)
void TIM2_IRQHandler(){
	TIM2->SR = 0;
	Os_CallbackPeriodicTask();
}
#endif
