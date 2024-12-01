#ifndef INC_TIM_H_
#define INC_TIM_H_

/******************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "stm32f411xx.h"

/******************************************************************************
 *  USER CONFIGURATION MACROS
 *****************************************************************************/


/******************************************************************************
 *  DEFINES & MACROS
 *****************************************************************************/
#define TIM_CR1_CEN_SHIFT               (0U)                                         
#define TIM_CR1_CEN_MASK                (0x1UL << TIM_CR1_CEN_SHIFT)                  /*!< 0x00000001 */
#define TIM_CR1_CEN                     TIM_CR1_CEN_MASK                           /*!<Counter enable        */
#define TIM_CR1_UDIS_SHIFT              (1U)                                         
#define TIM_CR1_UDIS_MASK               (0x1UL << TIM_CR1_UDIS_SHIFT)                 /*!< 0x00000002 */
#define TIM_CR1_UDIS                    TIM_CR1_UDIS_MASK                          /*!<Update disable        */
#define TIM_CR1_URS_SHIFT               (2U)                                         
#define TIM_CR1_URS_MASK                (0x1UL << TIM_CR1_URS_SHIFT)                  /*!< 0x00000004 */
#define TIM_CR1_URS                     TIM_CR1_URS_MASK                           /*!<Update request source */
#define TIM_CR1_OPM_SHIFT               (3U)                                         
#define TIM_CR1_OPM_MASK                (0x1UL << TIM_CR1_OPM_SHIFT)                  /*!< 0x00000008 */
#define TIM_CR1_OPM                     TIM_CR1_OPM_MASK                           /*!<One pulse mode        */
#define TIM_CR1_DIR_SHIFT               (4U)                                         
#define TIM_CR1_DIR_MASK                (0x1UL << TIM_CR1_DIR_SHIFT)                  /*!< 0x00000010 */
#define TIM_CR1_DIR                     TIM_CR1_DIR_MASK                           /*!<Direction             */

#define TIM_CR1_CMS_SHIFT               (5U)                                         
#define TIM_CR1_CMS_MASK                (0x3UL << TIM_CR1_CMS_SHIFT)                  /*!< 0x00000060 */
#define TIM_CR1_CMS                     TIM_CR1_CMS_MASK                           /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0                   (0x1UL << TIM_CR1_CMS_SHIFT)                   /*!< 0x0020 */
#define TIM_CR1_CMS_1                   (0x2UL << TIM_CR1_CMS_SHIFT)                   /*!< 0x0040 */

#define TIM_CR1_ARPE_SHIFT              (7U)                                         
#define TIM_CR1_ARPE_MASK               (0x1UL << TIM_CR1_ARPE_SHIFT)                 /*!< 0x00000080 */
#define TIM_CR1_ARPE                    TIM_CR1_ARPE_MASK                          /*!<Auto-reload preload enable     */

#define TIM_CR1_CKD_SHIFT               (8U)                                         
#define TIM_CR1_CKD_MASK                (0x3UL << TIM_CR1_CKD_SHIFT)                  /*!< 0x00000300 */
#define TIM_CR1_CKD                     TIM_CR1_CKD_MASK                           /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0                   (0x1UL << TIM_CR1_CKD_SHIFT)                   /*!< 0x0100 */
#define TIM_CR1_CKD_1                   (0x2UL << TIM_CR1_CKD_SHIFT)                   /*!< 0x0200 */

#define TIM_SR_UIF_Pos                  (0U)                                         
#define TIM_SR_UIF_Msk                  (0x1UL << TIM_SR_UIF_Pos)                     /*!< 0x00000001 */
#define TIM_SR_UIF                      TIM_SR_UIF_Msk                               /*!<Update interrupt Flag              */
#define TIM_SR_CC1IF_Pos                (1U)                                         
#define TIM_SR_CC1IF_Msk                (0x1UL << TIM_SR_CC1IF_Pos)                   /*!< 0x00000002 */
#define TIM_SR_CC1IF                    TIM_SR_CC1IF_Msk                             /*!<Capture/Compare 1 interrupt Flag   */
#define TIM_SR_CC2IF_Pos                (2U)                                         
#define TIM_SR_CC2IF_Msk                (0x1UL << TIM_SR_CC2IF_Pos)                   /*!< 0x00000004 */
#define TIM_SR_CC2IF                    TIM_SR_CC2IF_Msk                             /*!<Capture/Compare 2 interrupt Flag   */
#define TIM_SR_CC3IF_Pos                (3U)                                         
#define TIM_SR_CC3IF_Msk                (0x1UL << TIM_SR_CC3IF_Pos)                   /*!< 0x00000008 */
#define TIM_SR_CC3IF                    TIM_SR_CC3IF_Msk                             /*!<Capture/Compare 3 interrupt Flag   */
#define TIM_SR_CC4IF_Pos                (4U)                                         
#define TIM_SR_CC4IF_Msk                (0x1UL << TIM_SR_CC4IF_Pos)                   /*!< 0x00000010 */
#define TIM_SR_CC4IF                    TIM_SR_CC4IF_Msk                             /*!<Capture/Compare 4 interrupt Flag   */
#define TIM_SR_COMIF_Pos                (5U)                                         
#define TIM_SR_COMIF_Msk                (0x1UL << TIM_SR_COMIF_Pos)                   /*!< 0x00000020 */
#define TIM_SR_COMIF                    TIM_SR_COMIF_Msk                             /*!<COM interrupt Flag                 */
#define TIM_SR_TIF_Pos                  (6U)                                         
#define TIM_SR_TIF_Msk                  (0x1UL << TIM_SR_TIF_Pos)                     /*!< 0x00000040 */
#define TIM_SR_TIF                      TIM_SR_TIF_Msk                               /*!<Trigger interrupt Flag             */
#define TIM_SR_BIF_Pos                  (7U)                                         
#define TIM_SR_BIF_Msk                  (0x1UL << TIM_SR_BIF_Pos)                     /*!< 0x00000080 */
#define TIM_SR_BIF                      TIM_SR_BIF_Msk                               /*!<Break interrupt Flag               */
#define TIM_SR_CC1OF_Pos                (9U)                                         
#define TIM_SR_CC1OF_Msk                (0x1UL << TIM_SR_CC1OF_Pos)                   /*!< 0x00000200 */
#define TIM_SR_CC1OF                    TIM_SR_CC1OF_Msk                             /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF_Pos                (10U)                                        
#define TIM_SR_CC2OF_Msk                (0x1UL << TIM_SR_CC2OF_Pos)                   /*!< 0x00000400 */
#define TIM_SR_CC2OF                    TIM_SR_CC2OF_Msk                             /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF_Pos                (11U)                                        
#define TIM_SR_CC3OF_Msk                (0x1UL << TIM_SR_CC3OF_Pos)                   /*!< 0x00000800 */
#define TIM_SR_CC3OF                    TIM_SR_CC3OF_Msk                             /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF_Pos                (12U)                                        
#define TIM_SR_CC4OF_Msk                (0x1UL << TIM_SR_CC4OF_Pos)                   /*!< 0x00001000 */
#define TIM_SR_CC4OF                    TIM_SR_CC4OF_Msk                             /*!<Capture/Compare 4 Overcapture Flag */

/******************************************************************************
 *  TYPEDEFS
 *****************************************************************************/


/******************************************************************************
 *  GLOBAL FUNCTION
 *****************************************************************************/
extern void TIM_PeriClockControl(TIM_Type *pTIMx, uint8 EnorDis);
extern void TIM_Init(TIM_Type *pTIMx, uint32 Prescale);
extern void TIM_DelayUs(TIM_Type *pTIMx, uint32_t us);
extern void TIM_DelayMs(TIM_Type *pTIMx, uint32_t ms);

#endif /* INC_TIM_H_ */
