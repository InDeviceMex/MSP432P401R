/**
 * main.c
 */

#include "SCB.h"

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
    WDT_A->CTL = 0x5A00 | 0x0080;     // stop watchdog timer
    //SCB__vReqSysReset();
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);

    /* Exceptions example*/

    //example 1 NMI
    //SCB_NMI__vSetPending();

    //example 2 PendSV
    //SCB_PENDSV__vSetPending();

    //example 3 UsageFault SetPending
    //SCB_UsageFault__vSetPending();


    //example 4 UsageFault DIV0
    //number2/=number1;

    //example 5 UsageFault UNALIGMENT SCB
    //(*((volatile uint32_t *)(SCB_BASE+SCB_FAULTSTAT_OFFSET+1)))=number2;

    //example 6 UsageFault NOCP
    (*((volatile uint32_t*)((0xE000E000)+(0x0D88))))=0; //FPU Coprocessor disable
    fnumber1*=fnumber2;

    //example 7 UsageFault INVPC

    //example 8 UsageFault INVSTATE

    //example 9 UsageFault UNDEF
    while(1)
    {

    }
}
