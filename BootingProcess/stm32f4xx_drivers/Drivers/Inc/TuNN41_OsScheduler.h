#ifndef INC_TUNN41_OSSCHEDULER_H_
#define INC_TUNN41_OSSCHEDULER_H_

/******************************************************************************
 *  INCLUDES
 *****************************************************************************/

/******************************************************************************
 *  DEFINES & MACROS
 *****************************************************************************/

/******************************************************************************
 *  GLOBAL FUNCTION
 *****************************************************************************/
/**
 * @brief  This function manually restore all general registers from stack and jump to the first thread
 */
extern void Os_SchedulerLaunch(void);

#endif /* INC_TUNN41_OSSCHEDULER_H_ */
