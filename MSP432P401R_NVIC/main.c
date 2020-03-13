/**
 * main.c
 */

#include "SCB.h"
#include "NVIC.h"

#define PERIPH_BASE                              ((uint32_t)0x40000000)          /*!< Peripherals start address */
#define WDT_A_BASE                            (PERIPH_BASE +0x00004800)          /*!< Base address of module WDT_A registers */

typedef struct {
       uint16_t RESERVED0[6];
  volatile uint16_t CTL;                                                             /*!< Watchdog Timer Control Register */
} WDT_A_Type;

#define WDT_A                            ((WDT_A_Type *) WDT_A_BASE)

void main(void)
{
    volatile int number1=0;
    volatile int number2=1;
    float fnumber1=0.1;
    float fnumber2=2.0;
    //SCB__vReqSysReset();
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);


    NVIC__enSetEnableIRQ(NVIC_enSTIR_WDT_A,NVIC_enPRI2);
    NVIC__enTriggerIRQ(NVIC_enSTIR_WDT_A);

    __asm(" cpsie i");
    while(1)
    {

    }
}
