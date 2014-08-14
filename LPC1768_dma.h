#ifdef TARGET_LPC1768
/** 
  * @brief  DMA Init structure definition
  */
/*DMA channel control register*/
#define DMA_CCxControl_TransferSize_Pos 0
#define DMA_CCxControl_SBSize_Pos 12
#define DMA_CCxControl_DBSize_Pos 15
#define DMA_CCxControl_SWidth_Pos 18
#define DMA_CCxControl_DWidth_Pos 21
#define DMA_CCxControl_SI_Pos 26
#define DMA_CCxControl_DI_Pos 27
#define DMA_CCxControl_I_Pos 31

/*DMA Channel config register*/
#define DMA_CCxConfig_E_Pos 0
#define DMA_CCxConfig_SrcPeripheral_Pos 1
#define DMA_CCxConfig_DestPeripheral_Pos 6
#define DMA_CCxConfig_TransferType_Pos 11
#define DMA_CCxConfig_IE_Pos 14
#define DMA_CCxConfig_ITC_Pos 15
#define DMA_CCxConfig_L_Pos 16
#define DMA_CCxConfig_A_Pos 17
#define DMA_CCxConfig_H_Pos 18




typedef struct
{
    uint32_t DMA_DestAddr; /*!< Specifies the destination base address for DMAy Channelx. */
    uint32_t DMA_SrcAddr;     /*!< Specifies the source base address for DMAy Channelx. */
    DMA_LLI LLI; /*!< Specifies the next linked item   */
    uint32_t DMA_TransSize;/*!< Specifies the source  transfer size    */
    uint32_t DMA_SrcBurst; /*!< Specifies the source  burst size    */
    uint32_t DMA_DestBurst; /*!< Specifies the destination burst size   */
    uint32_t DMA_SrcWidth; /*!< Specifies the source transfer width   */
    uint32_t DMA_DestWidth; /*!< Specifies the destination transfer width   */
    uint32_t DMA_SrcInc;  /*!< Specifies whether the source is incremented or not */
    uint32_t DMA_DestInc; /*!< Specifies whether the destination is incremented or not */
    uint32_t DMA_TermInt; /*!< Specifies whether the terminal count interrupt enabled or not */
    
    /*!< Specifies the features set by channel config register */
    uint32_t  DMA_SrcPeripheral;
    uint32_t  DMA_DestPeripheral;
    uint32_t  DMA_TransferType;       

}DMA_InitTypeDef;

typedef struct
{
    uint32_t DestAddr;
    uint32_t SrcAddr;
    uint32_t next;
    uint32_t control;
    
}DMA_LLI;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#endif