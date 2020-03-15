/**
 * main.c
 */

#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"

#define PERIPH_BASE                              ((uint32_t)0x40000000)          /*!< Peripherals start address */
#define WDT_A_BASE                            (PERIPH_BASE +0x00004800)          /*!< Base address of module WDT_A registers */

typedef struct {
       uint16_t RESERVED0[6];
  volatile uint16_t CTL;                                                             /*!< Watchdog Timer Control Register */
} WDT_A_Type;

#define WDT_A                            ((WDT_A_Type *) WDT_A_BASE)

void main(void)
{
    WDT_A->CTL = 0x5A00 | 0x0080;     // stop watchdog timer
    FPU__vInit();
    SCB__vInit();

    __asm(" cpsie i");
    while(1)
    {

    }
}
