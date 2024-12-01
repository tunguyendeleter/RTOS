#ifndef INC_FLASH_H_
#define INC_FLASH_H_


/******************************************************************************/
/*                                                                            */
/*                                    FLASH                                   */
/*                                                                            */
/******************************************************************************/
/*******************  Bits definition for FLASH_ACR register  *****************/
#define FLASH_ACR_LATENCY_SHIFT          (0U)
#define FLASH_ACR_LATENCY_MASK          (0x7UL << FLASH_ACR_LATENCY_SHIFT)         /*!< 0x00000007 */
#define FLASH_ACR_LATENCY              FLASH_ACR_LATENCY_MASK
#define FLASH_ACR_LATENCY_0WS          0x00000000U
#define FLASH_ACR_LATENCY_1WS          0x00000001U
#define FLASH_ACR_LATENCY_2WS          0x00000002U
#define FLASH_ACR_LATENCY_3WS          0x00000003U
#define FLASH_ACR_LATENCY_4WS          0x00000004U
#define FLASH_ACR_LATENCY_5WS          0x00000005U
#define FLASH_ACR_LATENCY_6WS          0x00000006U
#define FLASH_ACR_LATENCY_7WS          0x00000007U


#define FLASH_ACR_PRFTEN_SHIFT           (8U)
#define FLASH_ACR_PRFTEN_MASK           (0x1UL << FLASH_ACR_PRFTEN_SHIFT)          /*!< 0x00000100 */
#define FLASH_ACR_PRFTEN               FLASH_ACR_PRFTEN_MASK
#define FLASH_ACR_ICEN_SHIFT             (9U)
#define FLASH_ACR_ICEN_MASK             (0x1UL << FLASH_ACR_ICEN_SHIFT)            /*!< 0x00000200 */
#define FLASH_ACR_ICEN                 FLASH_ACR_ICEN_MASK
#define FLASH_ACR_DCEN_SHIFT             (10U)
#define FLASH_ACR_DCEN_MASK             (0x1UL << FLASH_ACR_DCEN_SHIFT)            /*!< 0x00000400 */
#define FLASH_ACR_DCEN                 FLASH_ACR_DCEN_MASK
#define FLASH_ACR_ICRST_SHIFT            (11U)
#define FLASH_ACR_ICRST_MASK            (0x1UL << FLASH_ACR_ICRST_SHIFT)           /*!< 0x00000800 */
#define FLASH_ACR_ICRST                FLASH_ACR_ICRST_MASK
#define FLASH_ACR_DCRST_SHIFT            (12U)
#define FLASH_ACR_DCRST_MASK            (0x1UL << FLASH_ACR_DCRST_SHIFT)           /*!< 0x00001000 */
#define FLASH_ACR_DCRST                FLASH_ACR_DCRST_MASK
#define FLASH_ACR_BYTE0_ADDRESS_SHIFT    (10U)
#define FLASH_ACR_BYTE0_ADDRESS_MASK    (0x10008FUL << FLASH_ACR_BYTE0_ADDRESS_SHIFT) /*!< 0x40023C00 */
#define FLASH_ACR_BYTE0_ADDRESS        FLASH_ACR_BYTE0_ADDRESS_MASK
#define FLASH_ACR_BYTE2_ADDRESS_SHIFT    (0U)
#define FLASH_ACR_BYTE2_ADDRESS_MASK    (0x40023C03UL << FLASH_ACR_BYTE2_ADDRESS_SHIFT) /*!< 0x40023C03 */
#define FLASH_ACR_BYTE2_ADDRESS        FLASH_ACR_BYTE2_ADDRESS_MASK

/*******************  Bits definition for FLASH_SR register  ******************/
#define FLASH_SR_EOP_SHIFT               (0U)
#define FLASH_SR_EOP_MASK               (0x1UL << FLASH_SR_EOP_SHIFT)              /*!< 0x00000001 */
#define FLASH_SR_EOP                   FLASH_SR_EOP_MASK
#define FLASH_SR_SOP_SHIFT               (1U)
#define FLASH_SR_SOP_MASK               (0x1UL << FLASH_SR_SOP_SHIFT)              /*!< 0x00000002 */
#define FLASH_SR_SOP                   FLASH_SR_SOP_MASK
#define FLASH_SR_WRPERR_SHIFT            (4U)
#define FLASH_SR_WRPERR_MASK            (0x1UL << FLASH_SR_WRPERR_SHIFT)           /*!< 0x00000010 */
#define FLASH_SR_WRPERR                FLASH_SR_WRPERR_MASK
#define FLASH_SR_PGAERR_SHIFT            (5U)
#define FLASH_SR_PGAERR_MASK            (0x1UL << FLASH_SR_PGAERR_SHIFT)           /*!< 0x00000020 */
#define FLASH_SR_PGAERR                FLASH_SR_PGAERR_MASK
#define FLASH_SR_PGPERR_SHIFT            (6U)
#define FLASH_SR_PGPERR_MASK            (0x1UL << FLASH_SR_PGPERR_SHIFT)           /*!< 0x00000040 */
#define FLASH_SR_PGPERR                FLASH_SR_PGPERR_MASK
#define FLASH_SR_PGSERR_SHIFT            (7U)
#define FLASH_SR_PGSERR_MASK            (0x1UL << FLASH_SR_PGSERR_SHIFT)           /*!< 0x00000080 */
#define FLASH_SR_PGSERR                FLASH_SR_PGSERR_MASK
#define FLASH_SR_RDERR_SHIFT            (8U)
#define FLASH_SR_RDERR_MASK            (0x1UL << FLASH_SR_RDERR_SHIFT)             /*!< 0x00000100 */
#define FLASH_SR_RDERR                FLASH_SR_RDERR_MASK
#define FLASH_SR_BSY_SHIFT               (16U)
#define FLASH_SR_BSY_MASK               (0x1UL << FLASH_SR_BSY_SHIFT)              /*!< 0x00010000 */
#define FLASH_SR_BSY                   FLASH_SR_BSY_MASK

/*******************  Bits definition for FLASH_CR register  ******************/
#define FLASH_CR_PG_SHIFT                (0U)
#define FLASH_CR_PG_MASK                (0x1UL << FLASH_CR_PG_SHIFT)               /*!< 0x00000001 */
#define FLASH_CR_PG                    FLASH_CR_PG_MASK
#define FLASH_CR_SER_SHIFT               (1U)
#define FLASH_CR_SER_MASK               (0x1UL << FLASH_CR_SER_SHIFT)              /*!< 0x00000002 */
#define FLASH_CR_SER                   FLASH_CR_SER_MASK
#define FLASH_CR_MER_SHIFT               (2U)
#define FLASH_CR_MER_MASK               (0x1UL << FLASH_CR_MER_SHIFT)              /*!< 0x00000004 */
#define FLASH_CR_MER                   FLASH_CR_MER_MASK
#define FLASH_CR_SNB_SHIFT               (3U)
#define FLASH_CR_SNB_MASK               (0x1FUL << FLASH_CR_SNB_SHIFT)             /*!< 0x000000F8 */
#define FLASH_CR_SNB                   FLASH_CR_SNB_MASK
#define FLASH_CR_SNB_0                 (0x01UL << FLASH_CR_SNB_SHIFT)             /*!< 0x00000008 */
#define FLASH_CR_SNB_1                 (0x02UL << FLASH_CR_SNB_SHIFT)             /*!< 0x00000010 */
#define FLASH_CR_SNB_2                 (0x04UL << FLASH_CR_SNB_SHIFT)             /*!< 0x00000020 */
#define FLASH_CR_SNB_3                 (0x08UL << FLASH_CR_SNB_SHIFT)             /*!< 0x00000040 */
#define FLASH_CR_SNB_4                 (0x10UL << FLASH_CR_SNB_SHIFT)             /*!< 0x00000080 */
#define FLASH_CR_PSIZE_SHIFT             (8U)
#define FLASH_CR_PSIZE_MASK             (0x3UL << FLASH_CR_PSIZE_SHIFT)            /*!< 0x00000300 */
#define FLASH_CR_PSIZE                 FLASH_CR_PSIZE_MASK
#define FLASH_CR_PSIZE_0               (0x1UL << FLASH_CR_PSIZE_SHIFT)            /*!< 0x00000100 */
#define FLASH_CR_PSIZE_1               (0x2UL << FLASH_CR_PSIZE_SHIFT)            /*!< 0x00000200 */
#define FLASH_CR_STRT_SHIFT              (16U)
#define FLASH_CR_STRT_MASK              (0x1UL << FLASH_CR_STRT_SHIFT)             /*!< 0x00010000 */
#define FLASH_CR_STRT                  FLASH_CR_STRT_MASK
#define FLASH_CR_EOPIE_SHIFT             (24U)
#define FLASH_CR_EOPIE_MASK             (0x1UL << FLASH_CR_EOPIE_SHIFT)            /*!< 0x01000000 */
#define FLASH_CR_EOPIE                 FLASH_CR_EOPIE_MASK
#define FLASH_CR_ERRIE_SHIFT             (25U)
#define FLASH_CR_ERRIE_MASK             (0x1UL << FLASH_CR_ERRIE_SHIFT)
#define FLASH_CR_ERRIE                 FLASH_CR_ERRIE_MASK
#define FLASH_CR_LOCK_SHIFT              (31U)
#define FLASH_CR_LOCK_MASK              (0x1UL << FLASH_CR_LOCK_SHIFT)             /*!< 0x80000000 */
#define FLASH_CR_LOCK                  FLASH_CR_LOCK_MASK

/*******************  Bits definition for FLASH_OPTCR register  ***************/
#define FLASH_OPTCR_OPTLOCK_SHIFT        (0U)
#define FLASH_OPTCR_OPTLOCK_MASK        (0x1UL << FLASH_OPTCR_OPTLOCK_SHIFT)       /*!< 0x00000001 */
#define FLASH_OPTCR_OPTLOCK            FLASH_OPTCR_OPTLOCK_MASK
#define FLASH_OPTCR_OPTSTRT_SHIFT        (1U)
#define FLASH_OPTCR_OPTSTRT_MASK        (0x1UL << FLASH_OPTCR_OPTSTRT_SHIFT)       /*!< 0x00000002 */
#define FLASH_OPTCR_OPTSTRT            FLASH_OPTCR_OPTSTRT_MASK

#define FLASH_OPTCR_BOR_LEV_0          0x00000004U
#define FLASH_OPTCR_BOR_LEV_1          0x00000008U
#define FLASH_OPTCR_BOR_LEV_SHIFT        (2U)
#define FLASH_OPTCR_BOR_LEV_MASK        (0x3UL << FLASH_OPTCR_BOR_LEV_SHIFT)       /*!< 0x0000000C */
#define FLASH_OPTCR_BOR_LEV            FLASH_OPTCR_BOR_LEV_MASK
#define FLASH_OPTCR_WDG_SW_SHIFT         (5U)
#define FLASH_OPTCR_WDG_SW_MASK         (0x1UL << FLASH_OPTCR_WDG_SW_SHIFT)        /*!< 0x00000020 */
#define FLASH_OPTCR_WDG_SW             FLASH_OPTCR_WDG_SW_MASK
#define FLASH_OPTCR_nRST_STOP_SHIFT      (6U)
#define FLASH_OPTCR_nRST_STOP_MASK      (0x1UL << FLASH_OPTCR_nRST_STOP_SHIFT)     /*!< 0x00000040 */
#define FLASH_OPTCR_nRST_STOP          FLASH_OPTCR_nRST_STOP_MASK
#define FLASH_OPTCR_nRST_STDBY_SHIFT     (7U)
#define FLASH_OPTCR_nRST_STDBY_MASK     (0x1UL << FLASH_OPTCR_nRST_STDBY_SHIFT)    /*!< 0x00000080 */
#define FLASH_OPTCR_nRST_STDBY         FLASH_OPTCR_nRST_STDBY_MASK
#define FLASH_OPTCR_RDP_SHIFT            (8U)
#define FLASH_OPTCR_RDP_MASK            (0xFFUL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x0000FF00 */
#define FLASH_OPTCR_RDP                FLASH_OPTCR_RDP_MASK
#define FLASH_OPTCR_RDP_0              (0x01UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00000100 */
#define FLASH_OPTCR_RDP_1              (0x02UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00000200 */
#define FLASH_OPTCR_RDP_2              (0x04UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00000400 */
#define FLASH_OPTCR_RDP_3              (0x08UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00000800 */
#define FLASH_OPTCR_RDP_4              (0x10UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00001000 */
#define FLASH_OPTCR_RDP_5              (0x20UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00002000 */
#define FLASH_OPTCR_RDP_6              (0x40UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00004000 */
#define FLASH_OPTCR_RDP_7              (0x80UL << FLASH_OPTCR_RDP_SHIFT)          /*!< 0x00008000 */
#define FLASH_OPTCR_nWRP_SHIFT           (16U)
#define FLASH_OPTCR_nWRP_MASK           (0xFFFUL << FLASH_OPTCR_nWRP_SHIFT)        /*!< 0x0FFF0000 */
#define FLASH_OPTCR_nWRP               FLASH_OPTCR_nWRP_MASK
#define FLASH_OPTCR_nWRP_0             0x00010000U
#define FLASH_OPTCR_nWRP_1             0x00020000U
#define FLASH_OPTCR_nWRP_2             0x00040000U
#define FLASH_OPTCR_nWRP_3             0x00080000U
#define FLASH_OPTCR_nWRP_4             0x00100000U
#define FLASH_OPTCR_nWRP_5             0x00200000U
#define FLASH_OPTCR_nWRP_6             0x00400000U
#define FLASH_OPTCR_nWRP_7             0x00800000U
#define FLASH_OPTCR_nWRP_8             0x01000000U
#define FLASH_OPTCR_nWRP_9             0x02000000U
#define FLASH_OPTCR_nWRP_10            0x04000000U
#define FLASH_OPTCR_nWRP_11            0x08000000U

/******************  Bits definition for FLASH_OPTCR1 register  ***************/
#define FLASH_OPTCR1_nWRP_SHIFT          (16U)
#define FLASH_OPTCR1_nWRP_MASK          (0xFFFUL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x0FFF0000 */
#define FLASH_OPTCR1_nWRP              FLASH_OPTCR1_nWRP_MASK
#define FLASH_OPTCR1_nWRP_0            (0x001UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00010000 */
#define FLASH_OPTCR1_nWRP_1            (0x002UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00020000 */
#define FLASH_OPTCR1_nWRP_2            (0x004UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00040000 */
#define FLASH_OPTCR1_nWRP_3            (0x008UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00080000 */
#define FLASH_OPTCR1_nWRP_4            (0x010UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00100000 */
#define FLASH_OPTCR1_nWRP_5            (0x020UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00200000 */
#define FLASH_OPTCR1_nWRP_6            (0x040UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00400000 */
#define FLASH_OPTCR1_nWRP_7            (0x080UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x00800000 */
#define FLASH_OPTCR1_nWRP_8            (0x100UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x01000000 */
#define FLASH_OPTCR1_nWRP_9            (0x200UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x02000000 */
#define FLASH_OPTCR1_nWRP_10           (0x400UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x04000000 */
#define FLASH_OPTCR1_nWRP_11           (0x800UL << FLASH_OPTCR1_nWRP_SHIFT)       /*!< 0x08000000 */

#endif /* INC_FLASH_H_ */
