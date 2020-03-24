/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"
#include "MPU.h"
#include "SysTick.h"

#define PERIPH_BASE                              ((uint32_t)0x40000000)          /*!< Peripherals start address */
#define WDT_A_BASE                            (PERIPH_BASE +0x00004800)          /*!< Base address of module WDT_A registers */

typedef struct {
       uint16_t RESERVED0[6];
  volatile uint16_t CTL;                                                             /*!< Watchdog Timer Control Register */
} WDT_A_Type;

#define WDT_A                            ((WDT_A_Type *) WDT_A_BASE)
volatile uint32_t Variable1 = 100;
volatile const uint32_t Variable2 = 100;
void main(void)
{
    WDT_A->CTL = 0x5A00 | 0x0080;     // stop watchdog timer
    FPU__vInit();
    SCB__vInit();
    MPU__vInit();
    SysTick__enInitUs(10,SCB_enSHPR0);
    uint32_t memory=0;
    volatile uint32_t* memalloc;

    memalloc =memalign(0,1000);
    __asm(" cpsie i");
    for(memory=0; memory<(1000>>2); memory++)
    {
       *(memalloc+memory)=memory;
    }
    while(1)
    {
        SysTick__vDelayUs(6250);
    }
}
