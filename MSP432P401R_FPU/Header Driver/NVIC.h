/*
 * NVIC.h
 *
 *  Created on: 19 jul. 2018
 *      Author: InDev
 */

#ifndef NVIC_H_
#define NVIC_H_

#include <stdint.h>                      		/* standard types definitions                      */


#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX		(63)
#define NVIC_MAX			(3)
#define NVIC_PRI_MAX        (7)
#define NVIC_PRI_MASK       (7)
#define NVIC_IPR_MAX		(15)

enum
{
    NVIC_PRIORITY_RES64      =7,
    NVIC_PRIORITY_RES72         =6,

    NVIC_PRIORITY_DMA_INT1         =5,
    NVIC_PRIORITY_DMA_INT0          =5,
    NVIC_PRIORITY_Timer_A3_CC0      =4,


    NVIC_PRIORITY_GPIOQ4        =3,
    NVIC_PRIORITY_GPIOQ5        =2,
    NVIC_PRIORITY_GPIOQ6        =1,

    NVIC_PRIORITY_GPIOP2         =2,
    NVIC_PRIORITY_RES73 =1,

      NVIC_PRIORITY_PSS       =7,
      NVIC_PRIORITY_CS       =7,
      NVIC_PRIORITY_PCM 		=7,
      NVIC_PRIORITY_WDT_A       =7,
      NVIC_PRIORITY_FPU_INT       =7,
      NVIC_PRIORITY_FLCTL       =7,
      NVIC_PRIORITY_COMP_E0       =7,
      NVIC_PRIORITY_COMP_E1        =7,
      NVIC_PRIORITY_Timer_A0_CC0        =7,
      NVIC_PRIORITY_Timer_A0    =7,
      NVIC_PRIORITY_Timer_A1_CC0     =7,
      NVIC_PRIORITY_Timer_A1  	=7,
      NVIC_PRIORITY_Timer_A2_CC0		=7,
      NVIC_PRIORITY_Timer_A2  	    =7,
      NVIC_PRIORITY_Timer_A3    =7,
      NVIC_PRIORITY_eUSCI_A0    =7,
      NVIC_PRIORITY_eUSCI_A1    =7,
      NVIC_PRIORITY_eUSCI_A2       =7,
      NVIC_PRIORITY_eUSCI_A3     =7,
      NVIC_PRIORITY_eUSCI_B0     =7,
      NVIC_PRIORITY_eUSCI_B1     =7,
      NVIC_PRIORITY_eUSCI_B2     =7,
      NVIC_PRIORITY_eUSCI_B3     =7,
      NVIC_PRIORITY_ADC 	=7,
      NVIC_PRIORITY_Timer32_INT1	    =7,
      NVIC_PRIORITY_Timer32_INT2      =7,
      NVIC_PRIORITY_Timer32_INTC       =7,
      NVIC_PRIORITY_AES256      =7,
      NVIC_PRIORITY_RTC_C       =7,
      NVIC_PRIORITY_DMA_ERR       =7,
      NVIC_PRIORITY_DMA_INT3       =7,
      NVIC_PRIORITY_DMA_INT2       =7,
      NVIC_PRIORITY_PORT1     =7,
      NVIC_PRIORITY_PORT2     =7,
      NVIC_PRIORITY_PORT3        =7,
      NVIC_PRIORITY_PORT4        =7,
      NVIC_PRIORITY_PORT5        =7,
      NVIC_PRIORITY_PORT6        =7,
      NVIC_PRIORITY_RES57       =7,
      NVIC_PRIORITY_RES58       =7,
      NVIC_PRIORITY_RES59         =7,
      NVIC_PRIORITY_RES60         =7,
      NVIC_PRIORITY_RES61    =7,
      NVIC_PRIORITY_RES62    =7,
      NVIC_PRIORITY_RES63    =7,
      NVIC_PRIORITY_RES66    =7,
      NVIC_PRIORITY_RES67    =7,
      NVIC_PRIORITY_RES68       =7,
      NVIC_PRIORITY_RES69       =7,
      NVIC_PRIORITY_RES70       =7,
      NVIC_PRIORITY_RES71       =7,
      NVIC_PRIORITY_RES74        =7,
      NVIC_PRIORITY_RES75       =7,
      NVIC_PRIORITY_RES76       =7,
      NVIC_PRIORITY_RES77       =7,
      NVIC_PRIORITY_RES78       =7,
      NVIC_PRIORITY_RES79       =7,
}NVIC_IPR_Priority;


typedef volatile struct
{
    volatile uint32_t NVIC_PSS    :1;
    volatile uint32_t NVIC_CS    :1;
    volatile uint32_t NVIC_PCM    :1;
    volatile uint32_t NVIC_WDT_A    :1;
    volatile uint32_t NVIC_FPU_INT    :1;
    volatile uint32_t NVIC_FLCTL    :1;
    volatile uint32_t NVIC_COMP_E0    :1;
    volatile uint32_t NVIC_COMP_E1     :1;
    volatile uint32_t NVIC_Timer_A0_CC0     :1;
    volatile uint32_t NVIC_Timer_A0 :1;
    volatile uint32_t NVIC_Timer_A1_CC0  :1;
    volatile uint32_t NVIC_Timer_A1  :1;
    volatile uint32_t NVIC_Timer_A2_CC0  :1;
    volatile uint32_t NVIC_Timer_A2  	:1;
    volatile uint32_t NVIC_Timer_A3_CC0 :1;
    volatile uint32_t NVIC_Timer_A3 :1;
    volatile uint32_t NVIC_eUSCI_A0 :1;
    volatile uint32_t NVIC_eUSCI_A1 :1;
    volatile uint32_t NVIC_eUSCI_A2    :1;
    volatile uint32_t NVIC_eUSCI_A3  :1;
    volatile uint32_t NVIC_eUSCI_B0  :1;
    volatile uint32_t NVIC_eUSCI_B1  :1;
    volatile uint32_t NVIC_eUSCI_B2  :1;
    volatile uint32_t NVIC_eUSCI_B3  :1;
    volatile uint32_t NVIC_ADC	:1;
    volatile uint32_t NVIC_Timer32_INT1	:1;
    volatile uint32_t NVIC_Timer32_INT2   :1;
    volatile uint32_t NVIC_Timer32_INTC    :1;
    volatile uint32_t NVIC_AES256   :1;
    volatile uint32_t NVIC_RTC_C    :1;
    volatile uint32_t NVIC_DMA_ERR    :1;
    volatile uint32_t NVIC_DMA_INT3    :1;
}NVIC0_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_DMA_INT2    :1;
    volatile uint32_t NVIC_DMA_INT1    :1;
    volatile uint32_t NVIC_DMA_INT0     :1;
    volatile uint32_t NVIC_PORT1  :1;
    volatile uint32_t NVIC_PORT2  :1;
    volatile uint32_t NVIC_PORT3     :1;
    volatile uint32_t NVIC_PORT4     :1;
    volatile uint32_t NVIC_PORT5     :1;
    volatile uint32_t NVIC_PORT6     :1;
    volatile uint32_t NVIC_RES57    :1;
    volatile uint32_t NVIC_RES58    :1;
    volatile uint32_t NVIC_RES59      :1;
    volatile uint32_t NVIC_RES60      :1;
    volatile uint32_t NVIC_RES61 :1;
    volatile uint32_t NVIC_RES62 :1;
    volatile uint32_t NVIC_RES63:1;
    volatile uint32_t NVIC_RES64 :1;
    volatile uint32_t NVIC_Timer_A3 :1;
    volatile uint32_t NVIC_RES66 :1;
    volatile uint32_t NVIC_RES67 :1;
    volatile uint32_t NVIC_RES68    :1;
    volatile uint32_t NVIC_RES69    :1;
    volatile uint32_t NVIC_RES70    :1;
    volatile uint32_t NVIC_RES71    :1;
    volatile uint32_t NVIC_RES72    :1;
    volatile uint32_t NVIC_RES73     :1;
    volatile uint32_t NVIC_RES74     :1;
    volatile uint32_t NVIC_RES75    :1;
    volatile uint32_t NVIC_RES76    :1;
    volatile uint32_t NVIC_RES77    :1;
    volatile uint32_t NVIC_RES78    :1;
    volatile uint32_t NVIC_RES79    :1;
}NVIC1_TypeDef;



typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_PSS    :3;//0
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_CS    :3;//1
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_PCM  	:3;//2
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_WDT_A 	:3;//3
}IPR0_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_FPU_INT    :3;//4
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_FLCTL    :3;//5
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_COMP_E0    :3;//6
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_COMP_E1	 	:3;//7
}IPR1_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_Timer_A0_CC0     :3;//8
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_Timer_A0 :3;//9
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_Timer_A1_CC0  :3;//10
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_Timer_A1	:3;//11
}IPR2_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_Timer_A2_CC0	:3;//12
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_Timer_A2     :3;//13
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_Timer_A3_CC0 :3;//14
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_Timer_A3 :3;//15
}IPR3_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_eUSCI_A0 :3;//16
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_eUSCI_A1 :3;//17
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_eUSCI_A2    :3;//18
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_eUSCI_A3  :3;//19
}IPR4_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_eUSCI_B0		:3;//20
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_eUSCI_B1		:3;//21
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_eUSCI_B2	  	:3;//22
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_eUSCI_B3	 	:3;//23
}IPR5_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ADC  :3;//24
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_Timer32_INT1   :3;//25
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_Timer32_INT2   :3;//26
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_Timer32_INTC    :3;//27
}IPR6_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_AES256   :3;//28
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_RTC_C    :3;//29
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_DMA_ERR    :3;//30
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_DMA_INT3    :3;//31
}IPR7_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_DMA_INT2		:3;//32
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_DMA_INT1		:3;//33
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_DMA_INT0	  	    :3;//34
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_PORT1	    :3;//35
}IPR8_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_PORT2  :3;//36
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_PORT3		:3;//37
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_PORT4	  	:3;//38
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_PORT5	 	:3;//39
}IPR9_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_PORT6	    :3;//40
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_RES57	:3;//41
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_RES58 	:3;//42
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES59      :3;//43
}IPR10_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_RES60      :3;//44
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_RES61 :3;//45
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_RES62 :3;//46
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES63:3;//47
}IPR11_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_RES64 :3;//48
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_RES65 :3;//49
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_RES66 :3;//50
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES67 :3;//51
}IPR12_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES68		:3;//52
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES69		:3;//53
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES70	 	:3;//54
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES71		:3;//55
}IPR13_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES72        :3;//56
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES73         :3;//57
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES74         :3;//58
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES75        :3;//59
}IPR14_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES76        :3;//60
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES77      	:3;//61
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES78 	    :3;//62
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES79  	    :3;//63
}IPR15_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t IP0  	:3;//0
    const uint32_t reserved1:5;
    volatile uint32_t IP1   :3;//1
    const uint32_t reserved2:5;
    volatile uint32_t IP2  	:3;//2
    const uint32_t reserved3:5;
    volatile uint32_t IP3   :3;//3
}IPRw_TypeDef;

typedef volatile struct
{
     const uint8_t reserved    :5;
     volatile uint8_t IP    	:3;//0
}IPRb_TypeDef;




typedef volatile struct
{
    IPRb_TypeDef IPR[240];
}IPRb__TypeDef;

typedef volatile struct
{
    IPRw_TypeDef IPR[60];
}IPRw__TypeDef;




typedef volatile struct
{
    volatile uint32_t INTID     :8;
    const uint32_t reserved     :24;
}STIR_TypeDef;




typedef volatile struct
{
    volatile uint32_t   ISER[2U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[30U];
    volatile uint32_t   ICER[2U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[30U];
    volatile uint32_t   ISPR[2U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[30U];
    volatile uint32_t   ICPR[2U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[30U];
    volatile uint32_t   IABR[2U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[62U];
    volatile uint8_t    IP[240U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_TypeDef;


typedef volatile struct
{
    volatile uint32_t   ISER[2U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[30U];
    volatile uint32_t   ICER[2U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[30U];
    volatile uint32_t   ISPR[2U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[30U];
    volatile uint32_t   ICPR[2U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[30U];
    volatile uint32_t   IABR[2U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[62U];
    volatile uint32_t   IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t  		ISER0;
        NVIC0_TypeDef           ISER0_Bit;
    };
    union
    {
        volatile uint32_t  		ISER1;
        NVIC1_TypeDef           ISER1_Bit;
    };

    uint32_t                    reserved[30U];

    union
    {
        volatile uint32_t  		ICER0;
        NVIC0_TypeDef           ICER0_Bit;
    };
    union
    {
        volatile uint32_t  		ICER1;
        NVIC1_TypeDef           ICER1_Bit;
    };

    uint32_t  				    reserved1[30U];

    union
    {
        volatile uint32_t  		ISPR0;
        NVIC0_TypeDef           ISPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR1;
        NVIC1_TypeDef           ISPR1_Bit;
    };

    uint32_t  				reserved2[30U];

    union
    {
        volatile uint32_t  		ICPR0;
        NVIC0_TypeDef           ICPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR1;
        NVIC1_TypeDef           ICPR1_Bit;
    };

    uint32_t  				reserved3[30U];

    union
    {
        volatile uint32_t  		IABR0;
        NVIC0_TypeDef           IABR0_Bit;
    };
    union
    {
        volatile uint32_t  		IABR1;
        NVIC1_TypeDef           IABR1_Bit;
    };

    uint32_t  				reserved4[62U];

    union
    {
        volatile uint8_t  		IPR0b[4];
        IPRb_TypeDef  		    IPR0b_Bit[4];
        volatile uint32_t  		IPR0w;
        IPRw_TypeDef  		    IPR0w_Bit;
        volatile uint32_t 		IPR0;
        IPR0_TypeDef            IPR0_Bit;
    };
    union
    {
        volatile uint8_t  		IPR1b[4];
        IPRb_TypeDef  		    IPR1b_Bit[4];
        volatile uint32_t  		IPR1w;
        IPRw_TypeDef  		    IPR1w_Bit;
        volatile uint32_t 		IPR1;
        IPR1_TypeDef            IPR1_Bit;
    };
    union
    {
        volatile uint8_t  		IPR2b[4];
        IPRb_TypeDef  		    IPR2b_Bit[4];
        volatile uint32_t  		IPR2w;
        IPRw_TypeDef  		    IPR2w_Bit;
        volatile uint32_t 		IPR2;
        IPR2_TypeDef            IPR2_Bit;
    };
    union
    {
        volatile uint8_t  		IPR3b[4];
        IPRb_TypeDef  		    IPR3b_Bit[4];
        volatile uint32_t  		IPR3w;
        IPRw_TypeDef  		    IPR3w_Bit;
        volatile uint32_t 		IPR3;
        IPR3_TypeDef            IPR3_Bit;
    };
    union
    {
        volatile uint8_t  		IPR4b[4];
        IPRb_TypeDef  		    IPR4b_Bit[4];
        volatile uint32_t  		IPR4w;
        IPRw_TypeDef  		    IPR4w_Bit;
        volatile uint32_t 		IPR4;
        IPR4_TypeDef            IPR4_Bit;
    };
    union
    {
        volatile uint8_t  		IPR5b[4];
        IPRb_TypeDef  		    IPR5b_Bit[4];
        volatile uint32_t  		IPR5w;
        IPRw_TypeDef  		    IPR5w_Bit;
        volatile uint32_t 		IPR5;
        IPR5_TypeDef            IPR5_Bit;
    };
    union
    {
        volatile uint8_t  		IPR6b[4];
        IPRb_TypeDef  		    IPR6b_Bit[4];
        volatile uint32_t  		IPR6w;
        IPRw_TypeDef  		    IPR6w_Bit;
        volatile uint32_t 		IPR6;
        IPR6_TypeDef            IPR6_Bit;
    };
    union
    {
        volatile uint8_t  		IPR7b[4];
        IPRb_TypeDef  		    IPR7b_Bit[4];
        volatile uint32_t  		IPR7w;
        IPRw_TypeDef  		    IPR7w_Bit;
        volatile uint32_t 		IPR7;
        IPR7_TypeDef            IPR7_Bit;
    };
    union
    {
        volatile uint8_t  		IPR8b[4];
        IPRb_TypeDef  		    IPR8b_Bit[4];
        volatile uint32_t  		IPR8w;
        IPRw_TypeDef  		    IPR8w_Bit;
        volatile uint32_t 		IPR8;
        IPR8_TypeDef            IPR8_Bit;
    };
    union
    {
        volatile uint8_t  		IPR9b[4];
        IPRb_TypeDef  		    IPR9b_Bit[4];
        volatile uint32_t  		IPR9w;
        IPRw_TypeDef  		    IPR9w_Bit;
        volatile uint32_t 		IPR9;
        IPR9_TypeDef            IPR9_Bit;
    };
    union
    {
        volatile uint8_t  		IPR10b[4];
        IPRb_TypeDef  		    IPR10b_Bit[4];
        volatile uint32_t  		IPR10w;
        IPRw_TypeDef  		    IPR10w_Bit;
        volatile uint32_t 		IPR10;
        IPR10_TypeDef           IPR10_Bit;
    };
    union
    {
        volatile uint8_t  		IPR11b[4];
        IPRb_TypeDef  		    IPR11b_Bit[4];
        volatile uint32_t  		IPR11w;
        IPRw_TypeDef  		    IPR11w_Bit;
        volatile uint32_t 		IPR11;
        IPR11_TypeDef           IPR11_Bit;
    };
    union
    {
        volatile uint8_t  		IPR12b[4];
        IPRb_TypeDef  		    IPR12b_Bit[4];
        volatile uint32_t  		IPR12w;
        IPRw_TypeDef  		    IPR12w_Bit;
        volatile uint32_t 		IPR12;
        IPR12_TypeDef           IPR12_Bit;
    };
    union
    {
        volatile uint8_t  		IPR13b[4];
        IPRb_TypeDef  		    IPR13b_Bit[4];
        volatile uint32_t  		IPR13w;
        IPRw_TypeDef  		    IPR13w_Bit;
        volatile uint32_t 		IPR13;
        IPR13_TypeDef           IPR13_Bit;
    };
    union
    {
        volatile uint8_t  		IPR14b[4];
        IPRb_TypeDef  		    IPR14b_Bit[4];
        volatile uint32_t  		IPR14w;
        IPRw_TypeDef  		    IPR14w_Bit;
        volatile uint32_t 		IPR14;
        IPR14_TypeDef           IPR14_Bit;
    };
    union
    {
        volatile uint8_t  		IPR15b[4];
        IPRb_TypeDef  		    IPR15b_Bit[4];
        volatile uint32_t  		IPR15w;
        IPRw_TypeDef  		    IPR15w_Bit;
        volatile uint32_t 		IPR15;
        IPR15_TypeDef           IPR15_Bit;
    };

    uint32_t  				reserved5[678U];

    union
    {
        volatile uint32_t  		STIR;
        STIR_TypeDef        STIR_Bit;
    };

}NVIC_TypeDef;

#define NVIC                ((NVIC_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICw               ((NVICw_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICb               ((NVICb_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */


#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040C)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041C)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042C)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043C)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISER0_OFFSET)))
#define NVIC_ISER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER0_OFFSET)))


//--------
#define NVIC_ISER0_R_NVIC_PSS_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_R_NVIC_PSS_BIT     (0)
#define NVIC_ISER0_R_NVIC_PSS_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PSS_EN      ((uint32_t)0x00000001)

#define NVIC_ISER0_NVIC_PSS_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PSS_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PSS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_CS_MASK    ((uint32_t)0x00000002)
#define NVIC_ISER0_R_NVIC_CS_BIT     (1)
#define NVIC_ISER0_R_NVIC_CS_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_CS_EN      ((uint32_t)0x00000002)

#define NVIC_ISER0_NVIC_CS_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_CS_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_CS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_PCM_MASK    ((uint32_t)0x00000004)
#define NVIC_ISER0_R_NVIC_PCM_BIT     (2)
#define NVIC_ISER0_R_NVIC_PCM_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_PCM_EN      ((uint32_t)0x00000004)

#define NVIC_ISER0_NVIC_PCM_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_PCM_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_PCM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER0_R_NVIC_WDT_A_MASK    ((uint32_t)0x00000008)
#define NVIC_ISER0_R_NVIC_WDT_A_BIT     (3)
#define NVIC_ISER0_R_NVIC_WDT_A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_WDT_A_EN      ((uint32_t)0x00000008)

#define NVIC_ISER0_NVIC_WDT_A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_WDT_A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_WDT_A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_FPU_INT_MASK    ((uint32_t)0x00000010)
#define NVIC_ISER0_R_NVIC_FPU_INT_BIT     (4)
#define NVIC_ISER0_R_NVIC_FPU_INT_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_FPU_INT_EN      ((uint32_t)0x00000010)

#define NVIC_ISER0_NVIC_FPU_INT_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_FPU_INT_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_FPU_INT_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_FLCTL_MASK    ((uint32_t)0x00000020)
#define NVIC_ISER0_R_NVIC_FLCTL_BIT     (5)
#define NVIC_ISER0_R_NVIC_FLCTL_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_FLCTL_EN      ((uint32_t)0x00000020)

#define NVIC_ISER0_NVIC_FLCTL_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_FLCTL_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_FLCTL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_COMP_E0_MASK    ((uint32_t)0x00000040)
#define NVIC_ISER0_R_NVIC_COMP_E0_BIT     (6)
#define NVIC_ISER0_R_NVIC_COMP_E0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_COMP_E0_EN      ((uint32_t)0x00000040)

#define NVIC_ISER0_NVIC_COMP_E0_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_COMP_E0_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_COMP_E0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_COMP_E1_MASK     ((uint32_t)0x00000080)
#define NVIC_ISER0_R_NVIC_COMP_E1_BIT      (7)
#define NVIC_ISER0_R_NVIC_COMP_E1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_COMP_E1_EN       ((uint32_t)0x00000080)

#define NVIC_ISER0_NVIC_COMP_E1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_COMP_E1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_COMP_E1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A0_CC0_MASK     ((uint32_t)0x00000100)
#define NVIC_ISER0_R_NVIC_Timer_A0_CC0_BIT      (8)
#define NVIC_ISER0_R_NVIC_Timer_A0_CC0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A0_CC0_EN       ((uint32_t)0x00000100)

#define NVIC_ISER0_NVIC_Timer_A0_CC0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A0_CC0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A0_CC0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A0_MASK ((uint32_t)0x00000200)
#define NVIC_ISER0_R_NVIC_Timer_A0_BIT  (9)
#define NVIC_ISER0_R_NVIC_Timer_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A0_EN   ((uint32_t)0x00000200)

#define NVIC_ISER0_NVIC_Timer_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A1_CC0_MASK  ((uint32_t)0x00000400)
#define NVIC_ISER0_R_NVIC_Timer_A1_CC0_BIT   (10)
#define NVIC_ISER0_R_NVIC_Timer_A1_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A1_CC0_EN    ((uint32_t)0x00000400)

#define NVIC_ISER0_NVIC_Timer_A1_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A1_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A1_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A1_MASK  ((uint32_t)0x00000800)
#define NVIC_ISER0_R_NVIC_Timer_A1_BIT   (11)
#define NVIC_ISER0_R_NVIC_Timer_A1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A1_EN    ((uint32_t)0x00000800)

#define NVIC_ISER0_NVIC_Timer_A1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A2_CC0_MASK  ((uint32_t)0x00001000)
#define NVIC_ISER0_R_NVIC_Timer_A2_CC0_BIT   (12)
#define NVIC_ISER0_R_NVIC_Timer_A2_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A2_CC0_EN    ((uint32_t)0x00001000)

#define NVIC_ISER0_NVIC_Timer_A2_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A2_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A2_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A2_MASK     ((uint32_t)0x00002000)
#define NVIC_ISER0_R_NVIC_Timer_A2_BIT      (13)
#define NVIC_ISER0_R_NVIC_Timer_A2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A2_EN       ((uint32_t)0x00002000)

#define NVIC_ISER0_NVIC_Timer_A2_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A2_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A2_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A3_CC0_MASK ((uint32_t)0x00004000)
#define NVIC_ISER0_R_NVIC_Timer_A3_CC0_BIT  (14)
#define NVIC_ISER0_R_NVIC_Timer_A3_CC0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A3_CC0_EN   ((uint32_t)0x00004000)

#define NVIC_ISER0_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A3_CC0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A3_CC0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer_A3_MASK ((uint32_t)0x00008000)
#define NVIC_ISER0_R_NVIC_Timer_A3_BIT  (15)
#define NVIC_ISER0_R_NVIC_Timer_A3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer_A3_EN   ((uint32_t)0x00008000)

#define NVIC_ISER0_NVIC_Timer_A3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer_A3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer_A3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_A0_MASK ((uint32_t)0x00010000)
#define NVIC_ISER0_R_NVIC_eUSCI_A0_BIT  (16)
#define NVIC_ISER0_R_NVIC_eUSCI_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_A0_EN   ((uint32_t)0x00010000)

#define NVIC_ISER0_NVIC_eUSCI_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_A0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_A1_MASK ((uint32_t)0x00020000)
#define NVIC_ISER0_R_NVIC_eUSCI_A1_BIT  (17)
#define NVIC_ISER0_R_NVIC_eUSCI_A1_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_A1_EN   ((uint32_t)0x00020000)

#define NVIC_ISER0_NVIC_eUSCI_A1_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_A1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_A1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_A2_MASK    ((uint32_t)0x00040000)
#define NVIC_ISER0_R_NVIC_eUSCI_A2_BIT     (18)
#define NVIC_ISER0_R_NVIC_eUSCI_A2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_A2_EN      ((uint32_t)0x00040000)

#define NVIC_ISER0_NVIC_eUSCI_A2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_A2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_A2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_A3_MASK  ((uint32_t)0x00080000)
#define NVIC_ISER0_R_NVIC_eUSCI_A3_BIT   (19)
#define NVIC_ISER0_R_NVIC_eUSCI_A3_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_A3_EN    ((uint32_t)0x00080000)

#define NVIC_ISER0_NVIC_eUSCI_A3_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_A3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_A3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_B0_MASK  ((uint32_t)0x00100000)
#define NVIC_ISER0_R_NVIC_eUSCI_B0_BIT   (20)
#define NVIC_ISER0_R_NVIC_eUSCI_B0_DI    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_B0_EN    ((uint32_t)0x00100000)

#define NVIC_ISER0_NVIC_eUSCI_B0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_B0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_B0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x00200000)
#define NVIC_ISER0_R_NVIC_eUSCI_B1_BIT   (21)
#define NVIC_ISER0_R_NVIC_eUSCI_B1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_B1_EN    ((uint32_t)0x00200000)

#define NVIC_ISER0_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_B1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_B1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_B2_MASK  ((uint32_t)0x00400000)
#define NVIC_ISER0_R_NVIC_eUSCI_B2_BIT   (22)
#define NVIC_ISER0_R_NVIC_eUSCI_B2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_B2_EN    ((uint32_t)0x00400000)

#define NVIC_ISER0_NVIC_eUSCI_B2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_B2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_B2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_eUSCI_B3_MASK  ((uint32_t)0x00800000)
#define NVIC_ISER0_R_NVIC_eUSCI_B3_BIT   (23)
#define NVIC_ISER0_R_NVIC_eUSCI_B3_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_eUSCI_B3_EN    ((uint32_t)0x00800000)

#define NVIC_ISER0_NVIC_eUSCI_B3_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_eUSCI_B3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_eUSCI_B3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_ADC_MASK  ((uint32_t)0x01000000)
#define NVIC_ISER0_R_NVIC_ADC_BIT   (24)
#define NVIC_ISER0_R_NVIC_ADC_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_ADC_EN    ((uint32_t)0x01000000)

#define NVIC_ISER0_NVIC_ADC_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_ADC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_ADC_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer32_INT1_MASK   ((uint32_t)0x02000000)
#define NVIC_ISER0_R_NVIC_Timer32_INT1_BIT    (25)
#define NVIC_ISER0_R_NVIC_Timer32_INT1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer32_INT1_EN     ((uint32_t)0x02000000)

#define NVIC_ISER0_NVIC_Timer32_INT1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer32_INT1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer32_INT1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x04000000)
#define NVIC_ISER0_R_NVIC_Timer32_INT2_BIT    (26)
#define NVIC_ISER0_R_NVIC_Timer32_INT2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer32_INT2_EN     ((uint32_t)0x04000000)

#define NVIC_ISER0_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer32_INT2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer32_INT2_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_Timer32_INTC_MASK    ((uint32_t)0x08000000)
#define NVIC_ISER0_R_NVIC_Timer32_INTC_BIT     (27)
#define NVIC_ISER0_R_NVIC_Timer32_INTC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_Timer32_INTC_EN      ((uint32_t)0x08000000)

#define NVIC_ISER0_NVIC_Timer32_INTC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_Timer32_INTC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_Timer32_INTC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_AES256_MASK   ((uint32_t)0x10000000)
#define NVIC_ISER0_R_NVIC_AES256_BIT    (28)
#define NVIC_ISER0_R_NVIC_AES256_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_AES256_EN     ((uint32_t)0x10000000)

#define NVIC_ISER0_NVIC_AES256_MASK     ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_AES256_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_AES256_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_RTC_C_MASK    ((uint32_t)0x20000000)
#define NVIC_ISER0_R_NVIC_RTC_C_BIT     (29)
#define NVIC_ISER0_R_NVIC_RTC_C_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_RTC_C_EN      ((uint32_t)0x20000000)

#define NVIC_ISER0_NVIC_RTC_C_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_RTC_C_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_RTC_C_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA_ERR_MASK    ((uint32_t)0x40000000)
#define NVIC_ISER0_R_NVIC_DMA_ERR_BIT     (30)
#define NVIC_ISER0_R_NVIC_DMA_ERR_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA_ERR_EN      ((uint32_t)0x40000000)

#define NVIC_ISER0_NVIC_DMA_ERR_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA_ERR_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA_ERR_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER0_R_NVIC_DMA_INT3_MASK    ((uint32_t)0x80000000)
#define NVIC_ISER0_R_NVIC_DMA_INT3_BIT     (31)
#define NVIC_ISER0_R_NVIC_DMA_INT3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER0_R_NVIC_DMA_INT3_EN      ((uint32_t)0x80000000)

#define NVIC_ISER0_NVIC_DMA_INT3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER0_NVIC_DMA_INT3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER0_NVIC_DMA_INT3_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICER0_OFFSET)))
#define NVIC_ICER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER0_OFFSET)))


//--------
#define NVIC_ICER0_R_NVIC_PSS_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_R_NVIC_PSS_BIT     (0)
#define NVIC_ICER0_R_NVIC_PSS_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PSS_EN      ((uint32_t)0x00000001)

#define NVIC_ICER0_NVIC_PSS_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PSS_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PSS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_CS_MASK    ((uint32_t)0x00000002)
#define NVIC_ICER0_R_NVIC_CS_BIT     (1)
#define NVIC_ICER0_R_NVIC_CS_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_CS_EN      ((uint32_t)0x00000002)

#define NVIC_ICER0_NVIC_CS_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_CS_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_CS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_PCM_MASK    ((uint32_t)0x00000004)
#define NVIC_ICER0_R_NVIC_PCM_BIT     (2)
#define NVIC_ICER0_R_NVIC_PCM_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_PCM_EN      ((uint32_t)0x00000004)

#define NVIC_ICER0_NVIC_PCM_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_PCM_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_PCM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER0_R_NVIC_WDT_A_MASK    ((uint32_t)0x00000008)
#define NVIC_ICER0_R_NVIC_WDT_A_BIT     (3)
#define NVIC_ICER0_R_NVIC_WDT_A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_WDT_A_EN      ((uint32_t)0x00000008)

#define NVIC_ICER0_NVIC_WDT_A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_WDT_A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_WDT_A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_FPU_INT_MASK    ((uint32_t)0x00000010)
#define NVIC_ICER0_R_NVIC_FPU_INT_BIT     (4)
#define NVIC_ICER0_R_NVIC_FPU_INT_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_FPU_INT_EN      ((uint32_t)0x00000010)

#define NVIC_ICER0_NVIC_FPU_INT_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_FPU_INT_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_FPU_INT_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_FLCTL_MASK    ((uint32_t)0x00000020)
#define NVIC_ICER0_R_NVIC_FLCTL_BIT     (5)
#define NVIC_ICER0_R_NVIC_FLCTL_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_FLCTL_EN      ((uint32_t)0x00000020)

#define NVIC_ICER0_NVIC_FLCTL_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_FLCTL_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_FLCTL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_COMP_E0_MASK    ((uint32_t)0x00000040)
#define NVIC_ICER0_R_NVIC_COMP_E0_BIT     (6)
#define NVIC_ICER0_R_NVIC_COMP_E0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_COMP_E0_EN      ((uint32_t)0x00000040)

#define NVIC_ICER0_NVIC_COMP_E0_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_COMP_E0_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_COMP_E0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_COMP_E1_MASK     ((uint32_t)0x00000080)
#define NVIC_ICER0_R_NVIC_COMP_E1_BIT      (7)
#define NVIC_ICER0_R_NVIC_COMP_E1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_COMP_E1_EN       ((uint32_t)0x00000080)

#define NVIC_ICER0_NVIC_COMP_E1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_COMP_E1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_COMP_E1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A0_CC0_MASK     ((uint32_t)0x00000100)
#define NVIC_ICER0_R_NVIC_Timer_A0_CC0_BIT      (8)
#define NVIC_ICER0_R_NVIC_Timer_A0_CC0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A0_CC0_EN       ((uint32_t)0x00000100)

#define NVIC_ICER0_NVIC_Timer_A0_CC0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A0_CC0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A0_CC0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A0_MASK ((uint32_t)0x00000200)
#define NVIC_ICER0_R_NVIC_Timer_A0_BIT  (9)
#define NVIC_ICER0_R_NVIC_Timer_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A0_EN   ((uint32_t)0x00000200)

#define NVIC_ICER0_NVIC_Timer_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A1_CC0_MASK  ((uint32_t)0x00000400)
#define NVIC_ICER0_R_NVIC_Timer_A1_CC0_BIT   (10)
#define NVIC_ICER0_R_NVIC_Timer_A1_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A1_CC0_EN    ((uint32_t)0x00000400)

#define NVIC_ICER0_NVIC_Timer_A1_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A1_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A1_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A1_MASK  ((uint32_t)0x00000800)
#define NVIC_ICER0_R_NVIC_Timer_A1_BIT   (11)
#define NVIC_ICER0_R_NVIC_Timer_A1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A1_EN    ((uint32_t)0x00000800)

#define NVIC_ICER0_NVIC_Timer_A1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A2_CC0_MASK  ((uint32_t)0x00001000)
#define NVIC_ICER0_R_NVIC_Timer_A2_CC0_BIT   (12)
#define NVIC_ICER0_R_NVIC_Timer_A2_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A2_CC0_EN    ((uint32_t)0x00001000)

#define NVIC_ICER0_NVIC_Timer_A2_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A2_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A2_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A2_MASK     ((uint32_t)0x00002000)
#define NVIC_ICER0_R_NVIC_Timer_A2_BIT      (13)
#define NVIC_ICER0_R_NVIC_Timer_A2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A2_EN       ((uint32_t)0x00002000)

#define NVIC_ICER0_NVIC_Timer_A2_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A2_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A2_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A3_CC0_MASK ((uint32_t)0x00004000)
#define NVIC_ICER0_R_NVIC_Timer_A3_CC0_BIT  (14)
#define NVIC_ICER0_R_NVIC_Timer_A3_CC0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A3_CC0_EN   ((uint32_t)0x00004000)

#define NVIC_ICER0_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A3_CC0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A3_CC0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer_A3_MASK ((uint32_t)0x00008000)
#define NVIC_ICER0_R_NVIC_Timer_A3_BIT  (15)
#define NVIC_ICER0_R_NVIC_Timer_A3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer_A3_EN   ((uint32_t)0x00008000)

#define NVIC_ICER0_NVIC_Timer_A3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer_A3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer_A3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_A0_MASK ((uint32_t)0x00010000)
#define NVIC_ICER0_R_NVIC_eUSCI_A0_BIT  (16)
#define NVIC_ICER0_R_NVIC_eUSCI_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_A0_EN   ((uint32_t)0x00010000)

#define NVIC_ICER0_NVIC_eUSCI_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_A0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_A1_MASK ((uint32_t)0x00020000)
#define NVIC_ICER0_R_NVIC_eUSCI_A1_BIT  (17)
#define NVIC_ICER0_R_NVIC_eUSCI_A1_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_A1_EN   ((uint32_t)0x00020000)

#define NVIC_ICER0_NVIC_eUSCI_A1_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_A1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_A1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_A2_MASK    ((uint32_t)0x00040000)
#define NVIC_ICER0_R_NVIC_eUSCI_A2_BIT     (18)
#define NVIC_ICER0_R_NVIC_eUSCI_A2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_A2_EN      ((uint32_t)0x00040000)

#define NVIC_ICER0_NVIC_eUSCI_A2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_A2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_A2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_A3_MASK  ((uint32_t)0x00080000)
#define NVIC_ICER0_R_NVIC_eUSCI_A3_BIT   (19)
#define NVIC_ICER0_R_NVIC_eUSCI_A3_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_A3_EN    ((uint32_t)0x00080000)

#define NVIC_ICER0_NVIC_eUSCI_A3_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_A3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_A3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_B0_MASK  ((uint32_t)0x00100000)
#define NVIC_ICER0_R_NVIC_eUSCI_B0_BIT   (20)
#define NVIC_ICER0_R_NVIC_eUSCI_B0_DI    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_B0_EN    ((uint32_t)0x00100000)

#define NVIC_ICER0_NVIC_eUSCI_B0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_B0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_B0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x00200000)
#define NVIC_ICER0_R_NVIC_eUSCI_B1_BIT   (21)
#define NVIC_ICER0_R_NVIC_eUSCI_B1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_B1_EN    ((uint32_t)0x00200000)

#define NVIC_ICER0_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_B1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_B1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_B2_MASK  ((uint32_t)0x00400000)
#define NVIC_ICER0_R_NVIC_eUSCI_B2_BIT   (22)
#define NVIC_ICER0_R_NVIC_eUSCI_B2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_B2_EN    ((uint32_t)0x00400000)

#define NVIC_ICER0_NVIC_eUSCI_B2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_B2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_B2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_eUSCI_B3_MASK  ((uint32_t)0x00800000)
#define NVIC_ICER0_R_NVIC_eUSCI_B3_BIT   (23)
#define NVIC_ICER0_R_NVIC_eUSCI_B3_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_eUSCI_B3_EN    ((uint32_t)0x00800000)

#define NVIC_ICER0_NVIC_eUSCI_B3_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_eUSCI_B3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_eUSCI_B3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_ADC_MASK  ((uint32_t)0x01000000)
#define NVIC_ICER0_R_NVIC_ADC_BIT   (24)
#define NVIC_ICER0_R_NVIC_ADC_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_ADC_EN    ((uint32_t)0x01000000)

#define NVIC_ICER0_NVIC_ADC_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_ADC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_ADC_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer32_INT1_MASK   ((uint32_t)0x02000000)
#define NVIC_ICER0_R_NVIC_Timer32_INT1_BIT    (25)
#define NVIC_ICER0_R_NVIC_Timer32_INT1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer32_INT1_EN     ((uint32_t)0x02000000)

#define NVIC_ICER0_NVIC_Timer32_INT1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer32_INT1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer32_INT1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x04000000)
#define NVIC_ICER0_R_NVIC_Timer32_INT2_BIT    (26)
#define NVIC_ICER0_R_NVIC_Timer32_INT2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer32_INT2_EN     ((uint32_t)0x04000000)

#define NVIC_ICER0_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer32_INT2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer32_INT2_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_Timer32_INTC_MASK    ((uint32_t)0x08000000)
#define NVIC_ICER0_R_NVIC_Timer32_INTC_BIT     (27)
#define NVIC_ICER0_R_NVIC_Timer32_INTC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_Timer32_INTC_EN      ((uint32_t)0x08000000)

#define NVIC_ICER0_NVIC_Timer32_INTC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_Timer32_INTC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_Timer32_INTC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_AES256_MASK   ((uint32_t)0x10000000)
#define NVIC_ICER0_R_NVIC_AES256_BIT    (28)
#define NVIC_ICER0_R_NVIC_AES256_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_AES256_EN     ((uint32_t)0x10000000)

#define NVIC_ICER0_NVIC_AES256_MASK     ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_AES256_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_AES256_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_RTC_C_MASK    ((uint32_t)0x20000000)
#define NVIC_ICER0_R_NVIC_RTC_C_BIT     (29)
#define NVIC_ICER0_R_NVIC_RTC_C_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_RTC_C_EN      ((uint32_t)0x20000000)

#define NVIC_ICER0_NVIC_RTC_C_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_RTC_C_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_RTC_C_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA_ERR_MASK    ((uint32_t)0x40000000)
#define NVIC_ICER0_R_NVIC_DMA_ERR_BIT     (30)
#define NVIC_ICER0_R_NVIC_DMA_ERR_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA_ERR_EN      ((uint32_t)0x40000000)

#define NVIC_ICER0_NVIC_DMA_ERR_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA_ERR_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA_ERR_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER0_R_NVIC_DMA_INT3_MASK    ((uint32_t)0x80000000)
#define NVIC_ICER0_R_NVIC_DMA_INT3_BIT     (31)
#define NVIC_ICER0_R_NVIC_DMA_INT3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER0_R_NVIC_DMA_INT3_EN      ((uint32_t)0x80000000)

#define NVIC_ICER0_NVIC_DMA_INT3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER0_NVIC_DMA_INT3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER0_NVIC_DMA_INT3_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISPR0_OFFSET)))
#define NVIC_ISPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR0_OFFSET)))


//--------
#define NVIC_ISPR0_R_NVIC_PSS_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_R_NVIC_PSS_BIT     (0)
#define NVIC_ISPR0_R_NVIC_PSS_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PSS_EN      ((uint32_t)0x00000001)

#define NVIC_ISPR0_NVIC_PSS_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PSS_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PSS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_CS_MASK    ((uint32_t)0x00000002)
#define NVIC_ISPR0_R_NVIC_CS_BIT     (1)
#define NVIC_ISPR0_R_NVIC_CS_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_CS_EN      ((uint32_t)0x00000002)

#define NVIC_ISPR0_NVIC_CS_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_CS_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_CS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_PCM_MASK    ((uint32_t)0x00000004)
#define NVIC_ISPR0_R_NVIC_PCM_BIT     (2)
#define NVIC_ISPR0_R_NVIC_PCM_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_PCM_EN      ((uint32_t)0x00000004)

#define NVIC_ISPR0_NVIC_PCM_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_PCM_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_PCM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR0_R_NVIC_WDT_A_MASK    ((uint32_t)0x00000008)
#define NVIC_ISPR0_R_NVIC_WDT_A_BIT     (3)
#define NVIC_ISPR0_R_NVIC_WDT_A_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_WDT_A_EN      ((uint32_t)0x00000008)

#define NVIC_ISPR0_NVIC_WDT_A_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_WDT_A_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_WDT_A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_FPU_INT_MASK    ((uint32_t)0x00000010)
#define NVIC_ISPR0_R_NVIC_FPU_INT_BIT     (4)
#define NVIC_ISPR0_R_NVIC_FPU_INT_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_FPU_INT_EN      ((uint32_t)0x00000010)

#define NVIC_ISPR0_NVIC_FPU_INT_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_FPU_INT_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_FPU_INT_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_FLCTL_MASK    ((uint32_t)0x00000020)
#define NVIC_ISPR0_R_NVIC_FLCTL_BIT     (5)
#define NVIC_ISPR0_R_NVIC_FLCTL_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_FLCTL_EN      ((uint32_t)0x00000020)

#define NVIC_ISPR0_NVIC_FLCTL_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_FLCTL_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_FLCTL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_COMP_E0_MASK    ((uint32_t)0x00000040)
#define NVIC_ISPR0_R_NVIC_COMP_E0_BIT     (6)
#define NVIC_ISPR0_R_NVIC_COMP_E0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_COMP_E0_EN      ((uint32_t)0x00000040)

#define NVIC_ISPR0_NVIC_COMP_E0_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_COMP_E0_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_COMP_E0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_COMP_E1_MASK     ((uint32_t)0x00000080)
#define NVIC_ISPR0_R_NVIC_COMP_E1_BIT      (7)
#define NVIC_ISPR0_R_NVIC_COMP_E1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_COMP_E1_EN       ((uint32_t)0x00000080)

#define NVIC_ISPR0_NVIC_COMP_E1_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_COMP_E1_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_COMP_E1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A0_CC0_MASK     ((uint32_t)0x00000100)
#define NVIC_ISPR0_R_NVIC_Timer_A0_CC0_BIT      (8)
#define NVIC_ISPR0_R_NVIC_Timer_A0_CC0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A0_CC0_EN       ((uint32_t)0x00000100)

#define NVIC_ISPR0_NVIC_Timer_A0_CC0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A0_CC0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A0_CC0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A0_MASK ((uint32_t)0x00000200)
#define NVIC_ISPR0_R_NVIC_Timer_A0_BIT  (9)
#define NVIC_ISPR0_R_NVIC_Timer_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A0_EN   ((uint32_t)0x00000200)

#define NVIC_ISPR0_NVIC_Timer_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A1_CC0_MASK  ((uint32_t)0x00000400)
#define NVIC_ISPR0_R_NVIC_Timer_A1_CC0_BIT   (10)
#define NVIC_ISPR0_R_NVIC_Timer_A1_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A1_CC0_EN    ((uint32_t)0x00000400)

#define NVIC_ISPR0_NVIC_Timer_A1_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A1_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A1_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A1_MASK  ((uint32_t)0x00000800)
#define NVIC_ISPR0_R_NVIC_Timer_A1_BIT   (11)
#define NVIC_ISPR0_R_NVIC_Timer_A1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A1_EN    ((uint32_t)0x00000800)

#define NVIC_ISPR0_NVIC_Timer_A1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A2_CC0_MASK  ((uint32_t)0x00001000)
#define NVIC_ISPR0_R_NVIC_Timer_A2_CC0_BIT   (12)
#define NVIC_ISPR0_R_NVIC_Timer_A2_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A2_CC0_EN    ((uint32_t)0x00001000)

#define NVIC_ISPR0_NVIC_Timer_A2_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A2_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A2_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A2_MASK     ((uint32_t)0x00002000)
#define NVIC_ISPR0_R_NVIC_Timer_A2_BIT      (13)
#define NVIC_ISPR0_R_NVIC_Timer_A2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A2_EN       ((uint32_t)0x00002000)

#define NVIC_ISPR0_NVIC_Timer_A2_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A2_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A2_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A3_CC0_MASK ((uint32_t)0x00004000)
#define NVIC_ISPR0_R_NVIC_Timer_A3_CC0_BIT  (14)
#define NVIC_ISPR0_R_NVIC_Timer_A3_CC0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A3_CC0_EN   ((uint32_t)0x00004000)

#define NVIC_ISPR0_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A3_CC0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A3_CC0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer_A3_MASK ((uint32_t)0x00008000)
#define NVIC_ISPR0_R_NVIC_Timer_A3_BIT  (15)
#define NVIC_ISPR0_R_NVIC_Timer_A3_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer_A3_EN   ((uint32_t)0x00008000)

#define NVIC_ISPR0_NVIC_Timer_A3_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer_A3_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer_A3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_A0_MASK ((uint32_t)0x00010000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A0_BIT  (16)
#define NVIC_ISPR0_R_NVIC_eUSCI_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A0_EN   ((uint32_t)0x00010000)

#define NVIC_ISPR0_NVIC_eUSCI_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_A0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_A1_MASK ((uint32_t)0x00020000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A1_BIT  (17)
#define NVIC_ISPR0_R_NVIC_eUSCI_A1_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A1_EN   ((uint32_t)0x00020000)

#define NVIC_ISPR0_NVIC_eUSCI_A1_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_A1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_A1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_A2_MASK    ((uint32_t)0x00040000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A2_BIT     (18)
#define NVIC_ISPR0_R_NVIC_eUSCI_A2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A2_EN      ((uint32_t)0x00040000)

#define NVIC_ISPR0_NVIC_eUSCI_A2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_A2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_A2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_A3_MASK  ((uint32_t)0x00080000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A3_BIT   (19)
#define NVIC_ISPR0_R_NVIC_eUSCI_A3_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_A3_EN    ((uint32_t)0x00080000)

#define NVIC_ISPR0_NVIC_eUSCI_A3_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_A3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_A3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_B0_MASK  ((uint32_t)0x00100000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B0_BIT   (20)
#define NVIC_ISPR0_R_NVIC_eUSCI_B0_DI    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B0_EN    ((uint32_t)0x00100000)

#define NVIC_ISPR0_NVIC_eUSCI_B0_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_B0_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_B0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x00200000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B1_BIT   (21)
#define NVIC_ISPR0_R_NVIC_eUSCI_B1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B1_EN    ((uint32_t)0x00200000)

#define NVIC_ISPR0_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_B1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_B1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_B2_MASK  ((uint32_t)0x00400000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B2_BIT   (22)
#define NVIC_ISPR0_R_NVIC_eUSCI_B2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B2_EN    ((uint32_t)0x00400000)

#define NVIC_ISPR0_NVIC_eUSCI_B2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_B2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_B2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_eUSCI_B3_MASK  ((uint32_t)0x00800000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B3_BIT   (23)
#define NVIC_ISPR0_R_NVIC_eUSCI_B3_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_eUSCI_B3_EN    ((uint32_t)0x00800000)

#define NVIC_ISPR0_NVIC_eUSCI_B3_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_eUSCI_B3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_eUSCI_B3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_ADC_MASK  ((uint32_t)0x01000000)
#define NVIC_ISPR0_R_NVIC_ADC_BIT   (24)
#define NVIC_ISPR0_R_NVIC_ADC_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_ADC_EN    ((uint32_t)0x01000000)

#define NVIC_ISPR0_NVIC_ADC_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_ADC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_ADC_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer32_INT1_MASK   ((uint32_t)0x02000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INT1_BIT    (25)
#define NVIC_ISPR0_R_NVIC_Timer32_INT1_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INT1_EN     ((uint32_t)0x02000000)

#define NVIC_ISPR0_NVIC_Timer32_INT1_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer32_INT1_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer32_INT1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x04000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INT2_BIT    (26)
#define NVIC_ISPR0_R_NVIC_Timer32_INT2_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INT2_EN     ((uint32_t)0x04000000)

#define NVIC_ISPR0_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer32_INT2_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer32_INT2_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_Timer32_INTC_MASK    ((uint32_t)0x08000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INTC_BIT     (27)
#define NVIC_ISPR0_R_NVIC_Timer32_INTC_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_Timer32_INTC_EN      ((uint32_t)0x08000000)

#define NVIC_ISPR0_NVIC_Timer32_INTC_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_Timer32_INTC_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_Timer32_INTC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_AES256_MASK   ((uint32_t)0x10000000)
#define NVIC_ISPR0_R_NVIC_AES256_BIT    (28)
#define NVIC_ISPR0_R_NVIC_AES256_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_AES256_EN     ((uint32_t)0x10000000)

#define NVIC_ISPR0_NVIC_AES256_MASK     ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_AES256_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_AES256_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_RTC_C_MASK    ((uint32_t)0x20000000)
#define NVIC_ISPR0_R_NVIC_RTC_C_BIT     (29)
#define NVIC_ISPR0_R_NVIC_RTC_C_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_RTC_C_EN      ((uint32_t)0x20000000)

#define NVIC_ISPR0_NVIC_RTC_C_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_RTC_C_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_RTC_C_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA_ERR_MASK    ((uint32_t)0x40000000)
#define NVIC_ISPR0_R_NVIC_DMA_ERR_BIT     (30)
#define NVIC_ISPR0_R_NVIC_DMA_ERR_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA_ERR_EN      ((uint32_t)0x40000000)

#define NVIC_ISPR0_NVIC_DMA_ERR_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA_ERR_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA_ERR_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR0_R_NVIC_DMA_INT3_MASK    ((uint32_t)0x80000000)
#define NVIC_ISPR0_R_NVIC_DMA_INT3_BIT     (31)
#define NVIC_ISPR0_R_NVIC_DMA_INT3_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR0_R_NVIC_DMA_INT3_EN      ((uint32_t)0x80000000)

#define NVIC_ISPR0_NVIC_DMA_INT3_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR0_NVIC_DMA_INT3_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR0_NVIC_DMA_INT3_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICPR0_OFFSET)))
#define NVIC_ICPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR0_OFFSET)))



//--------
#define NVIC_ICPR0_R_NVIC_PSS_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_R_NVIC_PSS_BIT     (0)
#define NVIC_ICPR0_R_NVIC_PSS_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PSS_EN      ((uint32_t)0x00000001)

#define NVIC_ICPR0_NVIC_PSS_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PSS_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PSS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_CS_MASK    ((uint32_t)0x00000002)
#define NVIC_ICPR0_R_NVIC_CS_BIT     (1)
#define NVIC_ICPR0_R_NVIC_CS_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_CS_EN      ((uint32_t)0x00000002)

#define NVIC_ICPR0_NVIC_CS_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_CS_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_CS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_PCM_MASK    ((uint32_t)0x00000004)
#define NVIC_ICPR0_R_NVIC_PCM_BIT     (2)
#define NVIC_ICPR0_R_NVIC_PCM_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_PCM_EN      ((uint32_t)0x00000004)

#define NVIC_ICPR0_NVIC_PCM_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_PCM_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_PCM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR0_R_NVIC_WDT_A_MASK    ((uint32_t)0x00000008)
#define NVIC_ICPR0_R_NVIC_WDT_A_BIT     (3)
#define NVIC_ICPR0_R_NVIC_WDT_A_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_WDT_A_EN      ((uint32_t)0x00000008)

#define NVIC_ICPR0_NVIC_WDT_A_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_WDT_A_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_WDT_A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_FPU_INT_MASK    ((uint32_t)0x00000010)
#define NVIC_ICPR0_R_NVIC_FPU_INT_BIT     (4)
#define NVIC_ICPR0_R_NVIC_FPU_INT_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_FPU_INT_EN      ((uint32_t)0x00000010)

#define NVIC_ICPR0_NVIC_FPU_INT_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_FPU_INT_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_FPU_INT_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_FLCTL_MASK    ((uint32_t)0x00000020)
#define NVIC_ICPR0_R_NVIC_FLCTL_BIT     (5)
#define NVIC_ICPR0_R_NVIC_FLCTL_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_FLCTL_EN      ((uint32_t)0x00000020)

#define NVIC_ICPR0_NVIC_FLCTL_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_FLCTL_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_FLCTL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_COMP_E0_MASK    ((uint32_t)0x00000040)
#define NVIC_ICPR0_R_NVIC_COMP_E0_BIT     (6)
#define NVIC_ICPR0_R_NVIC_COMP_E0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_COMP_E0_EN      ((uint32_t)0x00000040)

#define NVIC_ICPR0_NVIC_COMP_E0_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_COMP_E0_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_COMP_E0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_COMP_E1_MASK     ((uint32_t)0x00000080)
#define NVIC_ICPR0_R_NVIC_COMP_E1_BIT      (7)
#define NVIC_ICPR0_R_NVIC_COMP_E1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_COMP_E1_EN       ((uint32_t)0x00000080)

#define NVIC_ICPR0_NVIC_COMP_E1_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_COMP_E1_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_COMP_E1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A0_CC0_MASK     ((uint32_t)0x00000100)
#define NVIC_ICPR0_R_NVIC_Timer_A0_CC0_BIT      (8)
#define NVIC_ICPR0_R_NVIC_Timer_A0_CC0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A0_CC0_EN       ((uint32_t)0x00000100)

#define NVIC_ICPR0_NVIC_Timer_A0_CC0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A0_CC0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A0_CC0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A0_MASK ((uint32_t)0x00000200)
#define NVIC_ICPR0_R_NVIC_Timer_A0_BIT  (9)
#define NVIC_ICPR0_R_NVIC_Timer_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A0_EN   ((uint32_t)0x00000200)

#define NVIC_ICPR0_NVIC_Timer_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A1_CC0_MASK  ((uint32_t)0x00000400)
#define NVIC_ICPR0_R_NVIC_Timer_A1_CC0_BIT   (10)
#define NVIC_ICPR0_R_NVIC_Timer_A1_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A1_CC0_EN    ((uint32_t)0x00000400)

#define NVIC_ICPR0_NVIC_Timer_A1_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A1_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A1_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A1_MASK  ((uint32_t)0x00000800)
#define NVIC_ICPR0_R_NVIC_Timer_A1_BIT   (11)
#define NVIC_ICPR0_R_NVIC_Timer_A1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A1_EN    ((uint32_t)0x00000800)

#define NVIC_ICPR0_NVIC_Timer_A1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A2_CC0_MASK  ((uint32_t)0x00001000)
#define NVIC_ICPR0_R_NVIC_Timer_A2_CC0_BIT   (12)
#define NVIC_ICPR0_R_NVIC_Timer_A2_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A2_CC0_EN    ((uint32_t)0x00001000)

#define NVIC_ICPR0_NVIC_Timer_A2_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A2_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A2_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A2_MASK     ((uint32_t)0x00002000)
#define NVIC_ICPR0_R_NVIC_Timer_A2_BIT      (13)
#define NVIC_ICPR0_R_NVIC_Timer_A2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A2_EN       ((uint32_t)0x00002000)

#define NVIC_ICPR0_NVIC_Timer_A2_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A2_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A2_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A3_CC0_MASK ((uint32_t)0x00004000)
#define NVIC_ICPR0_R_NVIC_Timer_A3_CC0_BIT  (14)
#define NVIC_ICPR0_R_NVIC_Timer_A3_CC0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A3_CC0_EN   ((uint32_t)0x00004000)

#define NVIC_ICPR0_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A3_CC0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A3_CC0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer_A3_MASK ((uint32_t)0x00008000)
#define NVIC_ICPR0_R_NVIC_Timer_A3_BIT  (15)
#define NVIC_ICPR0_R_NVIC_Timer_A3_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer_A3_EN   ((uint32_t)0x00008000)

#define NVIC_ICPR0_NVIC_Timer_A3_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer_A3_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer_A3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_A0_MASK ((uint32_t)0x00010000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A0_BIT  (16)
#define NVIC_ICPR0_R_NVIC_eUSCI_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A0_EN   ((uint32_t)0x00010000)

#define NVIC_ICPR0_NVIC_eUSCI_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_A0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_A1_MASK ((uint32_t)0x00020000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A1_BIT  (17)
#define NVIC_ICPR0_R_NVIC_eUSCI_A1_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A1_EN   ((uint32_t)0x00020000)

#define NVIC_ICPR0_NVIC_eUSCI_A1_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_A1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_A1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_A2_MASK    ((uint32_t)0x00040000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A2_BIT     (18)
#define NVIC_ICPR0_R_NVIC_eUSCI_A2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A2_EN      ((uint32_t)0x00040000)

#define NVIC_ICPR0_NVIC_eUSCI_A2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_A2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_A2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_A3_MASK  ((uint32_t)0x00080000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A3_BIT   (19)
#define NVIC_ICPR0_R_NVIC_eUSCI_A3_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_A3_EN    ((uint32_t)0x00080000)

#define NVIC_ICPR0_NVIC_eUSCI_A3_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_A3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_A3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_B0_MASK  ((uint32_t)0x00100000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B0_BIT   (20)
#define NVIC_ICPR0_R_NVIC_eUSCI_B0_DI    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B0_EN    ((uint32_t)0x00100000)

#define NVIC_ICPR0_NVIC_eUSCI_B0_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_B0_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_B0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x00200000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B1_BIT   (21)
#define NVIC_ICPR0_R_NVIC_eUSCI_B1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B1_EN    ((uint32_t)0x00200000)

#define NVIC_ICPR0_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_B1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_B1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_B2_MASK  ((uint32_t)0x00400000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B2_BIT   (22)
#define NVIC_ICPR0_R_NVIC_eUSCI_B2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B2_EN    ((uint32_t)0x00400000)

#define NVIC_ICPR0_NVIC_eUSCI_B2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_B2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_B2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_eUSCI_B3_MASK  ((uint32_t)0x00800000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B3_BIT   (23)
#define NVIC_ICPR0_R_NVIC_eUSCI_B3_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_eUSCI_B3_EN    ((uint32_t)0x00800000)

#define NVIC_ICPR0_NVIC_eUSCI_B3_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_eUSCI_B3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_eUSCI_B3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_ADC_MASK  ((uint32_t)0x01000000)
#define NVIC_ICPR0_R_NVIC_ADC_BIT   (24)
#define NVIC_ICPR0_R_NVIC_ADC_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_ADC_EN    ((uint32_t)0x01000000)

#define NVIC_ICPR0_NVIC_ADC_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_ADC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_ADC_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer32_INT1_MASK   ((uint32_t)0x02000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INT1_BIT    (25)
#define NVIC_ICPR0_R_NVIC_Timer32_INT1_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INT1_EN     ((uint32_t)0x02000000)

#define NVIC_ICPR0_NVIC_Timer32_INT1_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer32_INT1_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer32_INT1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x04000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INT2_BIT    (26)
#define NVIC_ICPR0_R_NVIC_Timer32_INT2_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INT2_EN     ((uint32_t)0x04000000)

#define NVIC_ICPR0_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer32_INT2_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer32_INT2_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_Timer32_INTC_MASK    ((uint32_t)0x08000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INTC_BIT     (27)
#define NVIC_ICPR0_R_NVIC_Timer32_INTC_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_Timer32_INTC_EN      ((uint32_t)0x08000000)

#define NVIC_ICPR0_NVIC_Timer32_INTC_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_Timer32_INTC_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_Timer32_INTC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_AES256_MASK   ((uint32_t)0x10000000)
#define NVIC_ICPR0_R_NVIC_AES256_BIT    (28)
#define NVIC_ICPR0_R_NVIC_AES256_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_AES256_EN     ((uint32_t)0x10000000)

#define NVIC_ICPR0_NVIC_AES256_MASK     ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_AES256_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_AES256_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_RTC_C_MASK    ((uint32_t)0x20000000)
#define NVIC_ICPR0_R_NVIC_RTC_C_BIT     (29)
#define NVIC_ICPR0_R_NVIC_RTC_C_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_RTC_C_EN      ((uint32_t)0x20000000)

#define NVIC_ICPR0_NVIC_RTC_C_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_RTC_C_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_RTC_C_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA_ERR_MASK    ((uint32_t)0x40000000)
#define NVIC_ICPR0_R_NVIC_DMA_ERR_BIT     (30)
#define NVIC_ICPR0_R_NVIC_DMA_ERR_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA_ERR_EN      ((uint32_t)0x40000000)

#define NVIC_ICPR0_NVIC_DMA_ERR_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA_ERR_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA_ERR_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR0_R_NVIC_DMA_INT3_MASK    ((uint32_t)0x80000000)
#define NVIC_ICPR0_R_NVIC_DMA_INT3_BIT     (31)
#define NVIC_ICPR0_R_NVIC_DMA_INT3_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR0_R_NVIC_DMA_INT3_EN      ((uint32_t)0x80000000)

#define NVIC_ICPR0_NVIC_DMA_INT3_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR0_NVIC_DMA_INT3_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR0_NVIC_DMA_INT3_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_IABR0_OFFSET)))
#define NVIC_IABR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR0_OFFSET)))


//--------
#define NVIC_IABR0_R_NVIC_PSS_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_R_NVIC_PSS_BIT     (0)
#define NVIC_IABR0_R_NVIC_PSS_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PSS_EN      ((uint32_t)0x00000001)

#define NVIC_IABR0_NVIC_PSS_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PSS_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PSS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_CS_MASK    ((uint32_t)0x00000002)
#define NVIC_IABR0_R_NVIC_CS_BIT     (1)
#define NVIC_IABR0_R_NVIC_CS_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_CS_EN      ((uint32_t)0x00000002)

#define NVIC_IABR0_NVIC_CS_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_CS_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_CS_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_PCM_MASK    ((uint32_t)0x00000004)
#define NVIC_IABR0_R_NVIC_PCM_BIT     (2)
#define NVIC_IABR0_R_NVIC_PCM_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_PCM_EN      ((uint32_t)0x00000004)

#define NVIC_IABR0_NVIC_PCM_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_PCM_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_PCM_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR0_R_NVIC_WDT_A_MASK    ((uint32_t)0x00000008)
#define NVIC_IABR0_R_NVIC_WDT_A_BIT     (3)
#define NVIC_IABR0_R_NVIC_WDT_A_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_WDT_A_EN      ((uint32_t)0x00000008)

#define NVIC_IABR0_NVIC_WDT_A_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_WDT_A_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_WDT_A_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_FPU_INT_MASK    ((uint32_t)0x00000010)
#define NVIC_IABR0_R_NVIC_FPU_INT_BIT     (4)
#define NVIC_IABR0_R_NVIC_FPU_INT_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_FPU_INT_EN      ((uint32_t)0x00000010)

#define NVIC_IABR0_NVIC_FPU_INT_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_FPU_INT_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_FPU_INT_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_FLCTL_MASK    ((uint32_t)0x00000020)
#define NVIC_IABR0_R_NVIC_FLCTL_BIT     (5)
#define NVIC_IABR0_R_NVIC_FLCTL_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_FLCTL_EN      ((uint32_t)0x00000020)

#define NVIC_IABR0_NVIC_FLCTL_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_FLCTL_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_FLCTL_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_COMP_E0_MASK    ((uint32_t)0x00000040)
#define NVIC_IABR0_R_NVIC_COMP_E0_BIT     (6)
#define NVIC_IABR0_R_NVIC_COMP_E0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_COMP_E0_EN      ((uint32_t)0x00000040)

#define NVIC_IABR0_NVIC_COMP_E0_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_COMP_E0_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_COMP_E0_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_COMP_E1_MASK     ((uint32_t)0x00000080)
#define NVIC_IABR0_R_NVIC_COMP_E1_BIT      (7)
#define NVIC_IABR0_R_NVIC_COMP_E1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_COMP_E1_EN       ((uint32_t)0x00000080)

#define NVIC_IABR0_NVIC_COMP_E1_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_COMP_E1_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_COMP_E1_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A0_CC0_MASK     ((uint32_t)0x00000100)
#define NVIC_IABR0_R_NVIC_Timer_A0_CC0_BIT      (8)
#define NVIC_IABR0_R_NVIC_Timer_A0_CC0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A0_CC0_EN       ((uint32_t)0x00000100)

#define NVIC_IABR0_NVIC_Timer_A0_CC0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A0_CC0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A0_CC0_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A0_MASK ((uint32_t)0x00000200)
#define NVIC_IABR0_R_NVIC_Timer_A0_BIT  (9)
#define NVIC_IABR0_R_NVIC_Timer_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A0_EN   ((uint32_t)0x00000200)

#define NVIC_IABR0_NVIC_Timer_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A0_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A1_CC0_MASK  ((uint32_t)0x00000400)
#define NVIC_IABR0_R_NVIC_Timer_A1_CC0_BIT   (10)
#define NVIC_IABR0_R_NVIC_Timer_A1_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A1_CC0_EN    ((uint32_t)0x00000400)

#define NVIC_IABR0_NVIC_Timer_A1_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A1_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A1_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A1_MASK  ((uint32_t)0x00000800)
#define NVIC_IABR0_R_NVIC_Timer_A1_BIT   (11)
#define NVIC_IABR0_R_NVIC_Timer_A1_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A1_EN    ((uint32_t)0x00000800)

#define NVIC_IABR0_NVIC_Timer_A1_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A2_CC0_MASK  ((uint32_t)0x00001000)
#define NVIC_IABR0_R_NVIC_Timer_A2_CC0_BIT   (12)
#define NVIC_IABR0_R_NVIC_Timer_A2_CC0_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A2_CC0_EN    ((uint32_t)0x00001000)

#define NVIC_IABR0_NVIC_Timer_A2_CC0_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A2_CC0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A2_CC0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A2_MASK     ((uint32_t)0x00002000)
#define NVIC_IABR0_R_NVIC_Timer_A2_BIT      (13)
#define NVIC_IABR0_R_NVIC_Timer_A2_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A2_EN       ((uint32_t)0x00002000)

#define NVIC_IABR0_NVIC_Timer_A2_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A2_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A2_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A3_CC0_MASK ((uint32_t)0x00004000)
#define NVIC_IABR0_R_NVIC_Timer_A3_CC0_BIT  (14)
#define NVIC_IABR0_R_NVIC_Timer_A3_CC0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A3_CC0_EN   ((uint32_t)0x00004000)

#define NVIC_IABR0_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A3_CC0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A3_CC0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer_A3_MASK ((uint32_t)0x00008000)
#define NVIC_IABR0_R_NVIC_Timer_A3_BIT  (15)
#define NVIC_IABR0_R_NVIC_Timer_A3_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer_A3_EN   ((uint32_t)0x00008000)

#define NVIC_IABR0_NVIC_Timer_A3_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer_A3_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer_A3_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_A0_MASK ((uint32_t)0x00010000)
#define NVIC_IABR0_R_NVIC_eUSCI_A0_BIT  (16)
#define NVIC_IABR0_R_NVIC_eUSCI_A0_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_A0_EN   ((uint32_t)0x00010000)

#define NVIC_IABR0_NVIC_eUSCI_A0_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_A0_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_A0_EN ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_A1_MASK ((uint32_t)0x00020000)
#define NVIC_IABR0_R_NVIC_eUSCI_A1_BIT  (17)
#define NVIC_IABR0_R_NVIC_eUSCI_A1_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_A1_EN   ((uint32_t)0x00020000)

#define NVIC_IABR0_NVIC_eUSCI_A1_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_A1_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_A1_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_A2_MASK    ((uint32_t)0x00040000)
#define NVIC_IABR0_R_NVIC_eUSCI_A2_BIT     (18)
#define NVIC_IABR0_R_NVIC_eUSCI_A2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_A2_EN      ((uint32_t)0x00040000)

#define NVIC_IABR0_NVIC_eUSCI_A2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_A2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_A2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_A3_MASK  ((uint32_t)0x00080000)
#define NVIC_IABR0_R_NVIC_eUSCI_A3_BIT   (19)
#define NVIC_IABR0_R_NVIC_eUSCI_A3_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_A3_EN    ((uint32_t)0x00080000)

#define NVIC_IABR0_NVIC_eUSCI_A3_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_A3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_A3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_B0_MASK  ((uint32_t)0x00100000)
#define NVIC_IABR0_R_NVIC_eUSCI_B0_BIT   (20)
#define NVIC_IABR0_R_NVIC_eUSCI_B0_DI    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_B0_EN    ((uint32_t)0x00100000)

#define NVIC_IABR0_NVIC_eUSCI_B0_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_B0_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_B0_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x00200000)
#define NVIC_IABR0_R_NVIC_eUSCI_B1_BIT   (21)
#define NVIC_IABR0_R_NVIC_eUSCI_B1_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_B1_EN    ((uint32_t)0x00200000)

#define NVIC_IABR0_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_B1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_B1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_B2_MASK  ((uint32_t)0x00400000)
#define NVIC_IABR0_R_NVIC_eUSCI_B2_BIT   (22)
#define NVIC_IABR0_R_NVIC_eUSCI_B2_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_B2_EN    ((uint32_t)0x00400000)

#define NVIC_IABR0_NVIC_eUSCI_B2_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_B2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_B2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_eUSCI_B3_MASK  ((uint32_t)0x00800000)
#define NVIC_IABR0_R_NVIC_eUSCI_B3_BIT   (23)
#define NVIC_IABR0_R_NVIC_eUSCI_B3_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_eUSCI_B3_EN    ((uint32_t)0x00800000)

#define NVIC_IABR0_NVIC_eUSCI_B3_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_eUSCI_B3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_eUSCI_B3_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_ADC_MASK  ((uint32_t)0x01000000)
#define NVIC_IABR0_R_NVIC_ADC_BIT   (24)
#define NVIC_IABR0_R_NVIC_ADC_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_ADC_EN    ((uint32_t)0x01000000)

#define NVIC_IABR0_NVIC_ADC_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_ADC_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_ADC_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer32_INT1_MASK   ((uint32_t)0x02000000)
#define NVIC_IABR0_R_NVIC_Timer32_INT1_BIT    (25)
#define NVIC_IABR0_R_NVIC_Timer32_INT1_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer32_INT1_EN     ((uint32_t)0x02000000)

#define NVIC_IABR0_NVIC_Timer32_INT1_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer32_INT1_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer32_INT1_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x04000000)
#define NVIC_IABR0_R_NVIC_Timer32_INT2_BIT    (26)
#define NVIC_IABR0_R_NVIC_Timer32_INT2_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer32_INT2_EN     ((uint32_t)0x04000000)

#define NVIC_IABR0_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer32_INT2_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer32_INT2_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_Timer32_INTC_MASK    ((uint32_t)0x08000000)
#define NVIC_IABR0_R_NVIC_Timer32_INTC_BIT     (27)
#define NVIC_IABR0_R_NVIC_Timer32_INTC_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_Timer32_INTC_EN      ((uint32_t)0x08000000)

#define NVIC_IABR0_NVIC_Timer32_INTC_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_Timer32_INTC_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_Timer32_INTC_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_AES256_MASK   ((uint32_t)0x10000000)
#define NVIC_IABR0_R_NVIC_AES256_BIT    (28)
#define NVIC_IABR0_R_NVIC_AES256_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_AES256_EN     ((uint32_t)0x10000000)

#define NVIC_IABR0_NVIC_AES256_MASK     ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_AES256_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_AES256_EN       ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_RTC_C_MASK    ((uint32_t)0x20000000)
#define NVIC_IABR0_R_NVIC_RTC_C_BIT     (29)
#define NVIC_IABR0_R_NVIC_RTC_C_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_RTC_C_EN      ((uint32_t)0x20000000)

#define NVIC_IABR0_NVIC_RTC_C_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_RTC_C_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_RTC_C_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA_ERR_MASK    ((uint32_t)0x40000000)
#define NVIC_IABR0_R_NVIC_DMA_ERR_BIT     (30)
#define NVIC_IABR0_R_NVIC_DMA_ERR_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA_ERR_EN      ((uint32_t)0x40000000)

#define NVIC_IABR0_NVIC_DMA_ERR_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA_ERR_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA_ERR_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR0_R_NVIC_DMA_INT3_MASK    ((uint32_t)0x80000000)
#define NVIC_IABR0_R_NVIC_DMA_INT3_BIT     (31)
#define NVIC_IABR0_R_NVIC_DMA_INT3_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR0_R_NVIC_DMA_INT3_EN      ((uint32_t)0x80000000)

#define NVIC_IABR0_NVIC_DMA_INT3_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR0_NVIC_DMA_INT3_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR0_NVIC_DMA_INT3_EN        ((uint32_t)0x00000001)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISER1_OFFSET)))
#define NVIC_ISER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER1_OFFSET)))


//--------
#define NVIC_ISER1_R_NVIC_DMA_INT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_R_NVIC_DMA_INT2_BIT     (0)
#define NVIC_ISER1_R_NVIC_DMA_INT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA_INT2_EN      ((uint32_t)0x00000001)

#define NVIC_ISER1_NVIC_DMA_INT2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA_INT2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA_INT2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000002)
#define NVIC_ISER1_R_NVIC_DMA_INT1_BIT     (1)
#define NVIC_ISER1_R_NVIC_DMA_INT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA_INT1_EN      ((uint32_t)0x00000002)

#define NVIC_ISER1_NVIC_DMA_INT1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA_INT1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA_INT1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000004)
#define NVIC_ISER1_R_NVIC_DMA_INT0_BIT      (2)
#define NVIC_ISER1_R_NVIC_DMA_INT0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_DMA_INT0_EN       ((uint32_t)0x00000004)

#define NVIC_ISER1_NVIC_DMA_INT0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_DMA_INT0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_DMA_INT0_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_PORT1_MASK  ((uint32_t)0x00000008)
#define NVIC_ISER1_R_NVIC_PORT1_BIT   (3)
#define NVIC_ISER1_R_NVIC_PORT1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT1_EN    ((uint32_t)0x00000008)

#define NVIC_ISER1_NVIC_PORT1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PORT2_MASK  ((uint32_t)0x00000010)
#define NVIC_ISER1_R_NVIC_PORT2_BIT   (4)
#define NVIC_ISER1_R_NVIC_PORT2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT2_EN    ((uint32_t)0x00000010)

#define NVIC_ISER1_NVIC_PORT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PORT3_MASK     ((uint32_t)0x00000020)
#define NVIC_ISER1_R_NVIC_PORT3_BIT      (5)
#define NVIC_ISER1_R_NVIC_PORT3_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT3_EN       ((uint32_t)0x00000020)

#define NVIC_ISER1_NVIC_PORT3_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT3_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT3_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PORT4_MASK     ((uint32_t)0x00000040)
#define NVIC_ISER1_R_NVIC_PORT4_BIT      (6)
#define NVIC_ISER1_R_NVIC_PORT4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT4_EN       ((uint32_t)0x00000040)

#define NVIC_ISER1_NVIC_PORT4_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT4_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PORT5_MASK     ((uint32_t)0x00000080)
#define NVIC_ISER1_R_NVIC_PORT5_BIT      (7)
#define NVIC_ISER1_R_NVIC_PORT5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT5_EN       ((uint32_t)0x00000080)

#define NVIC_ISER1_NVIC_PORT5_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT5_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_PORT6_MASK     ((uint32_t)0x00000100)
#define NVIC_ISER1_R_NVIC_PORT6_BIT      (8)
#define NVIC_ISER1_R_NVIC_PORT6_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_PORT6_EN       ((uint32_t)0x00000100)

#define NVIC_ISER1_NVIC_PORT6_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_PORT6_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_PORT6_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200)
#define NVIC_ISER1_R_NVIC_RES57_BIT     (9)
#define NVIC_ISER1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES57_EN      ((uint32_t)0x00000200)

#define NVIC_ISER1_NVIC_RES57_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES57_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES57_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400)
#define NVIC_ISER1_R_NVIC_RES58_BIT     (10)
#define NVIC_ISER1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES58_EN      ((uint32_t)0x00000400)

#define NVIC_ISER1_NVIC_RES58_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES58_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES58_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES59_MASK      ((uint32_t)0x00000800)
#define NVIC_ISER1_R_NVIC_RES59_BIT       (11)
#define NVIC_ISER1_R_NVIC_RES59_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES59_EN        ((uint32_t)0x00000800)

#define NVIC_ISER1_NVIC_RES59_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES59_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES59_EN        	((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES60_MASK      ((uint32_t)0x00001000)
#define NVIC_ISER1_R_NVIC_RES60_BIT       (12)
#define NVIC_ISER1_R_NVIC_RES60_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES60_EN        ((uint32_t)0x00001000)

#define NVIC_ISER1_NVIC_RES60_MASK      	((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES60_DIS       	((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES60_EN        	((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_RES61_MASK ((uint32_t)0x00002000)
#define NVIC_ISER1_R_NVIC_RES61_BIT  (13)
#define NVIC_ISER1_R_NVIC_RES61_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES61_EN   ((uint32_t)0x00002000)

#define NVIC_ISER1_NVIC_RES61_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES61_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES61_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES62_MASK ((uint32_t)0x00004000)
#define NVIC_ISER1_R_NVIC_RES62_BIT  (14)
#define NVIC_ISER1_R_NVIC_RES62_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES62_EN   ((uint32_t)0x00004000)

#define NVIC_ISER1_NVIC_RES62_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES62_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES62_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES63_MASK ((uint32_t)0x00008000)
#define NVIC_ISER1_R_NVIC_RES63_BIT (15)
#define NVIC_ISER1_R_NVIC_RES63_DIS ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES63_EN  ((uint32_t)0x00008000)

#define NVIC_ISER1_NVIC_RES63_MASK  ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES63_DIS   ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES63_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES64_MASK ((uint32_t)0x00010000)
#define NVIC_ISER1_R_NVIC_RES64_BIT  (16)
#define NVIC_ISER1_R_NVIC_RES64_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES64_EN   ((uint32_t)0x00010000)

#define NVIC_ISER1_NVIC_RES64_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES64_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES64_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES65_MASK ((uint32_t)0x00020000)
#define NVIC_ISER1_R_NVIC_RES65_BIT  (17)
#define NVIC_ISER1_R_NVIC_RES65_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES65_EN   ((uint32_t)0x00020000)

#define NVIC_ISER1_NVIC_RES65_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES65_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES65_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES66_MASK ((uint32_t)0x00040000)
#define NVIC_ISER1_R_NVIC_RES66_BIT  (18)
#define NVIC_ISER1_R_NVIC_RES66_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES66_EN   ((uint32_t)0x00040000)

#define NVIC_ISER1_NVIC_RES66_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES66_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES66_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES67_MASK ((uint32_t)0x00080000)
#define NVIC_ISER1_R_NVIC_RES67_BIT  (19)
#define NVIC_ISER1_R_NVIC_RES67_DIS  ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES67_EN   ((uint32_t)0x00080000)

#define NVIC_ISER1_NVIC_RES67_MASK   ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES67_DIS    ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES67_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000)
#define NVIC_ISER1_R_NVIC_RES68_BIT     (20)
#define NVIC_ISER1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES68_EN      ((uint32_t)0x00100000)

#define NVIC_ISER1_NVIC_RES68_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES68_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES68_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000)
#define NVIC_ISER1_R_NVIC_RES69_BIT     (21)
#define NVIC_ISER1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES69_EN      ((uint32_t)0x00200000)

#define NVIC_ISER1_NVIC_RES69_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES69_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES69_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000)
#define NVIC_ISER1_R_NVIC_RES70_BIT     (22)
#define NVIC_ISER1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES70_EN      ((uint32_t)0x00400000)

#define NVIC_ISER1_NVIC_RES70_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES70_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES70_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISER1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000)
#define NVIC_ISER1_R_NVIC_RES71_BIT     (23)
#define NVIC_ISER1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES71_EN      ((uint32_t)0x00800000)

#define NVIC_ISER1_NVIC_RES71_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES71_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES71_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000)
#define NVIC_ISER1_R_NVIC_RES72_BIT     (24)
#define NVIC_ISER1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES72_EN      ((uint32_t)0x01000000)

#define NVIC_ISER1_NVIC_RES72_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES72_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES72_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES73_MASK     ((uint32_t)0x02000000)
#define NVIC_ISER1_R_NVIC_RES73_BIT      (25)
#define NVIC_ISER1_R_NVIC_RES73_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES73_EN       ((uint32_t)0x02000000)

#define NVIC_ISER1_NVIC_RES73_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES73_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES73_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES74_MASK     ((uint32_t)0x04000000)
#define NVIC_ISER1_R_NVIC_RES74_BIT      (26)
#define NVIC_ISER1_R_NVIC_RES74_DIS      ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES74_EN       ((uint32_t)0x04000000)

#define NVIC_ISER1_NVIC_RES74_MASK       ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES74_DIS        ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES74_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES75_MASK    ((uint32_t)0x08000000)
#define NVIC_ISER1_R_NVIC_RES75_BIT     (27)
#define NVIC_ISER1_R_NVIC_RES75_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES75_EN      ((uint32_t)0x08000000)

#define NVIC_ISER1_NVIC_RES75_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES75_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES75_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES76_MASK    ((uint32_t)0x10000000)
#define NVIC_ISER1_R_NVIC_RES76_BIT     (28)
#define NVIC_ISER1_R_NVIC_RES76_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES76_EN      ((uint32_t)0x10000000)

#define NVIC_ISER1_NVIC_RES76_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES76_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES76_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES77_MASK    ((uint32_t)0x20000000)
#define NVIC_ISER1_R_NVIC_RES77_BIT     (29)
#define NVIC_ISER1_R_NVIC_RES77_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES77_EN      ((uint32_t)0x20000000)

#define NVIC_ISER1_NVIC_RES77_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES77_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES77_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES78_MASK    ((uint32_t)0x40000000)
#define NVIC_ISER1_R_NVIC_RES78_BIT     (30)
#define NVIC_ISER1_R_NVIC_RES78_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES78_EN      ((uint32_t)0x40000000)

#define NVIC_ISER1_NVIC_RES78_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES78_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES78_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISER1_R_NVIC_RES79_MASK    ((uint32_t)0x80000000)
#define NVIC_ISER1_R_NVIC_RES79_BIT     (31)
#define NVIC_ISER1_R_NVIC_RES79_DIS     ((uint32_t)0x00000000)
#define NVIC_ISER1_R_NVIC_RES79_EN      ((uint32_t)0x80000000)

#define NVIC_ISER1_NVIC_RES79_MASK      ((uint32_t)0x00000001)
#define NVIC_ISER1_NVIC_RES79_DIS       ((uint32_t)0x00000000)
#define NVIC_ISER1_NVIC_RES79_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICER1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICER1_OFFSET)))
#define NVIC_ICER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER1_OFFSET)))

//--------
#define NVIC_ICER1_R_NVIC_DMA_INT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_R_NVIC_DMA_INT2_BIT     (0)
#define NVIC_ICER1_R_NVIC_DMA_INT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA_INT2_EN      ((uint32_t)0x00000001)

#define NVIC_ICER1_NVIC_DMA_INT2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA_INT2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA_INT2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000002)
#define NVIC_ICER1_R_NVIC_DMA_INT1_BIT     (1)
#define NVIC_ICER1_R_NVIC_DMA_INT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA_INT1_EN      ((uint32_t)0x00000002)

#define NVIC_ICER1_NVIC_DMA_INT1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA_INT1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA_INT1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000004)
#define NVIC_ICER1_R_NVIC_DMA_INT0_BIT      (2)
#define NVIC_ICER1_R_NVIC_DMA_INT0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_DMA_INT0_EN       ((uint32_t)0x00000004)

#define NVIC_ICER1_NVIC_DMA_INT0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_DMA_INT0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_DMA_INT0_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_PORT1_MASK  ((uint32_t)0x00000008)
#define NVIC_ICER1_R_NVIC_PORT1_BIT   (3)
#define NVIC_ICER1_R_NVIC_PORT1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT1_EN    ((uint32_t)0x00000008)

#define NVIC_ICER1_NVIC_PORT1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PORT2_MASK  ((uint32_t)0x00000010)
#define NVIC_ICER1_R_NVIC_PORT2_BIT   (4)
#define NVIC_ICER1_R_NVIC_PORT2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT2_EN    ((uint32_t)0x00000010)

#define NVIC_ICER1_NVIC_PORT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PORT3_MASK     ((uint32_t)0x00000020)
#define NVIC_ICER1_R_NVIC_PORT3_BIT      (5)
#define NVIC_ICER1_R_NVIC_PORT3_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT3_EN       ((uint32_t)0x00000020)

#define NVIC_ICER1_NVIC_PORT3_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT3_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT3_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PORT4_MASK     ((uint32_t)0x00000040)
#define NVIC_ICER1_R_NVIC_PORT4_BIT      (6)
#define NVIC_ICER1_R_NVIC_PORT4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT4_EN       ((uint32_t)0x00000040)

#define NVIC_ICER1_NVIC_PORT4_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT4_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PORT5_MASK     ((uint32_t)0x00000080)
#define NVIC_ICER1_R_NVIC_PORT5_BIT      (7)
#define NVIC_ICER1_R_NVIC_PORT5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT5_EN       ((uint32_t)0x00000080)

#define NVIC_ICER1_NVIC_PORT5_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT5_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_PORT6_MASK     ((uint32_t)0x00000100)
#define NVIC_ICER1_R_NVIC_PORT6_BIT      (8)
#define NVIC_ICER1_R_NVIC_PORT6_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_PORT6_EN       ((uint32_t)0x00000100)

#define NVIC_ICER1_NVIC_PORT6_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_PORT6_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_PORT6_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200)
#define NVIC_ICER1_R_NVIC_RES57_BIT     (9)
#define NVIC_ICER1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES57_EN      ((uint32_t)0x00000200)

#define NVIC_ICER1_NVIC_RES57_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES57_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES57_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400)
#define NVIC_ICER1_R_NVIC_RES58_BIT     (10)
#define NVIC_ICER1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES58_EN      ((uint32_t)0x00000400)

#define NVIC_ICER1_NVIC_RES58_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES58_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES58_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES59_MASK      ((uint32_t)0x00000800)
#define NVIC_ICER1_R_NVIC_RES59_BIT       (11)
#define NVIC_ICER1_R_NVIC_RES59_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES59_EN        ((uint32_t)0x00000800)

#define NVIC_ICER1_NVIC_RES59_MASK        ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES59_DIS         ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES59_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES60_MASK      ((uint32_t)0x00001000)
#define NVIC_ICER1_R_NVIC_RES60_BIT       (12)
#define NVIC_ICER1_R_NVIC_RES60_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES60_EN        ((uint32_t)0x00001000)

#define NVIC_ICER1_NVIC_RES60_MASK        ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES60_DIS         ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES60_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_RES61_MASK ((uint32_t)0x00002000)
#define NVIC_ICER1_R_NVIC_RES61_BIT  (13)
#define NVIC_ICER1_R_NVIC_RES61_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES61_EN   ((uint32_t)0x00002000)

#define NVIC_ICER1_NVIC_RES61_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES61_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES61_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES62_MASK ((uint32_t)0x00004000)
#define NVIC_ICER1_R_NVIC_RES62_BIT  (14)
#define NVIC_ICER1_R_NVIC_RES62_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES62_EN   ((uint32_t)0x00004000)

#define NVIC_ICER1_NVIC_RES62_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES62_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES62_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES63_MASK ((uint32_t)0x00008000)
#define NVIC_ICER1_R_NVIC_RES63_BIT (15)
#define NVIC_ICER1_R_NVIC_RES63_DIS ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES63_EN  ((uint32_t)0x00008000)

#define NVIC_ICER1_NVIC_RES63_MASK  ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES63_DIS   ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES63_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES64_MASK ((uint32_t)0x00010000)
#define NVIC_ICER1_R_NVIC_RES64_BIT  (16)
#define NVIC_ICER1_R_NVIC_RES64_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES64_EN   ((uint32_t)0x00010000)

#define NVIC_ICER1_NVIC_RES64_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES64_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES64_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES65_MASK ((uint32_t)0x00020000)
#define NVIC_ICER1_R_NVIC_RES65_BIT  (17)
#define NVIC_ICER1_R_NVIC_RES65_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES65_EN   ((uint32_t)0x00020000)

#define NVIC_ICER1_NVIC_RES65_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES65_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES65_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES66_MASK ((uint32_t)0x00040000)
#define NVIC_ICER1_R_NVIC_RES66_BIT  (18)
#define NVIC_ICER1_R_NVIC_RES66_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES66_EN   ((uint32_t)0x00040000)

#define NVIC_ICER1_NVIC_RES66_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES66_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES66_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES67_MASK ((uint32_t)0x00080000)
#define NVIC_ICER1_R_NVIC_RES67_BIT  (19)
#define NVIC_ICER1_R_NVIC_RES67_DIS  ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES67_EN   ((uint32_t)0x00080000)

#define NVIC_ICER1_NVIC_RES67_MASK   ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES67_DIS    ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES67_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000)
#define NVIC_ICER1_R_NVIC_RES68_BIT     (20)
#define NVIC_ICER1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES68_EN      ((uint32_t)0x00100000)

#define NVIC_ICER1_NVIC_RES68_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES68_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES68_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000)
#define NVIC_ICER1_R_NVIC_RES69_BIT     (21)
#define NVIC_ICER1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES69_EN      ((uint32_t)0x00200000)

#define NVIC_ICER1_NVIC_RES69_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES69_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES69_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000)
#define NVIC_ICER1_R_NVIC_RES70_BIT     (22)
#define NVIC_ICER1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES70_EN      ((uint32_t)0x00400000)

#define NVIC_ICER1_NVIC_RES70_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES70_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES70_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICER1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000)
#define NVIC_ICER1_R_NVIC_RES71_BIT     (23)
#define NVIC_ICER1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES71_EN      ((uint32_t)0x00800000)

#define NVIC_ICER1_NVIC_RES71_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES71_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES71_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000)
#define NVIC_ICER1_R_NVIC_RES72_BIT     (24)
#define NVIC_ICER1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES72_EN      ((uint32_t)0x01000000)

#define NVIC_ICER1_NVIC_RES72_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES72_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES72_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES73_MASK     ((uint32_t)0x02000000)
#define NVIC_ICER1_R_NVIC_RES73_BIT      (25)
#define NVIC_ICER1_R_NVIC_RES73_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES73_EN       ((uint32_t)0x02000000)

#define NVIC_ICER1_NVIC_RES73_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES73_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES73_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES74_MASK     ((uint32_t)0x04000000)
#define NVIC_ICER1_R_NVIC_RES74_BIT      (26)
#define NVIC_ICER1_R_NVIC_RES74_DIS      ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES74_EN       ((uint32_t)0x04000000)

#define NVIC_ICER1_NVIC_RES74_MASK       ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES74_DIS        ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES74_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES75_MASK    ((uint32_t)0x08000000)
#define NVIC_ICER1_R_NVIC_RES75_BIT     (27)
#define NVIC_ICER1_R_NVIC_RES75_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES75_EN      ((uint32_t)0x08000000)

#define NVIC_ICER1_NVIC_RES75_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES75_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES75_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES76_MASK    ((uint32_t)0x10000000)
#define NVIC_ICER1_R_NVIC_RES76_BIT     (28)
#define NVIC_ICER1_R_NVIC_RES76_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES76_EN      ((uint32_t)0x10000000)

#define NVIC_ICER1_NVIC_RES76_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES76_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES76_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES77_MASK    ((uint32_t)0x20000000)
#define NVIC_ICER1_R_NVIC_RES77_BIT     (29)
#define NVIC_ICER1_R_NVIC_RES77_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES77_EN      ((uint32_t)0x20000000)

#define NVIC_ICER1_NVIC_RES77_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES77_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES77_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES78_MASK    ((uint32_t)0x40000000)
#define NVIC_ICER1_R_NVIC_RES78_BIT     (30)
#define NVIC_ICER1_R_NVIC_RES78_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES78_EN      ((uint32_t)0x40000000)

#define NVIC_ICER1_NVIC_RES78_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES78_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES78_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICER1_R_NVIC_RES79_MASK    ((uint32_t)0x80000000)
#define NVIC_ICER1_R_NVIC_RES79_BIT     (31)
#define NVIC_ICER1_R_NVIC_RES79_DIS     ((uint32_t)0x00000000)
#define NVIC_ICER1_R_NVIC_RES79_EN      ((uint32_t)0x80000000)

#define NVIC_ICER1_NVIC_RES79_MASK      ((uint32_t)0x00000001)
#define NVIC_ICER1_NVIC_RES79_DIS       ((uint32_t)0x00000000)
#define NVIC_ICER1_NVIC_RES79_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ISPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ISPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISPR1_OFFSET)))
#define NVIC_ISPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR1_OFFSET)))


//--------
#define NVIC_ISPR1_R_NVIC_DMA_INT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_R_NVIC_DMA_INT2_BIT     (0)
#define NVIC_ISPR1_R_NVIC_DMA_INT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA_INT2_EN      ((uint32_t)0x00000001)

#define NVIC_ISPR1_NVIC_DMA_INT2_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA_INT2_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA_INT2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000002)
#define NVIC_ISPR1_R_NVIC_DMA_INT1_BIT     (1)
#define NVIC_ISPR1_R_NVIC_DMA_INT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA_INT1_EN      ((uint32_t)0x00000002)

#define NVIC_ISPR1_NVIC_DMA_INT1_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA_INT1_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA_INT1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000004)
#define NVIC_ISPR1_R_NVIC_DMA_INT0_BIT      (2)
#define NVIC_ISPR1_R_NVIC_DMA_INT0_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_DMA_INT0_EN       ((uint32_t)0x00000004)

#define NVIC_ISPR1_NVIC_DMA_INT0_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_DMA_INT0_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_DMA_INT0_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_PORT1_MASK  ((uint32_t)0x00000008)
#define NVIC_ISPR1_R_NVIC_PORT1_BIT   (3)
#define NVIC_ISPR1_R_NVIC_PORT1_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT1_EN    ((uint32_t)0x00000008)

#define NVIC_ISPR1_NVIC_PORT1_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PORT2_MASK  ((uint32_t)0x00000010)
#define NVIC_ISPR1_R_NVIC_PORT2_BIT   (4)
#define NVIC_ISPR1_R_NVIC_PORT2_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT2_EN    ((uint32_t)0x00000010)

#define NVIC_ISPR1_NVIC_PORT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PORT3_MASK     ((uint32_t)0x00000020)
#define NVIC_ISPR1_R_NVIC_PORT3_BIT      (5)
#define NVIC_ISPR1_R_NVIC_PORT3_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT3_EN       ((uint32_t)0x00000020)

#define NVIC_ISPR1_NVIC_PORT3_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT3_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT3_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PORT4_MASK     ((uint32_t)0x00000040)
#define NVIC_ISPR1_R_NVIC_PORT4_BIT      (6)
#define NVIC_ISPR1_R_NVIC_PORT4_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT4_EN       ((uint32_t)0x00000040)

#define NVIC_ISPR1_NVIC_PORT4_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT4_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PORT5_MASK     ((uint32_t)0x00000080)
#define NVIC_ISPR1_R_NVIC_PORT5_BIT      (7)
#define NVIC_ISPR1_R_NVIC_PORT5_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT5_EN       ((uint32_t)0x00000080)

#define NVIC_ISPR1_NVIC_PORT5_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT5_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_PORT6_MASK     ((uint32_t)0x00000100)
#define NVIC_ISPR1_R_NVIC_PORT6_BIT      (8)
#define NVIC_ISPR1_R_NVIC_PORT6_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_PORT6_EN       ((uint32_t)0x00000100)

#define NVIC_ISPR1_NVIC_PORT6_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_PORT6_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_PORT6_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200)
#define NVIC_ISPR1_R_NVIC_RES57_BIT     (9)
#define NVIC_ISPR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200)

#define NVIC_ISPR1_NVIC_RES57_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES57_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES57_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400)
#define NVIC_ISPR1_R_NVIC_RES58_BIT     (10)
#define NVIC_ISPR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400)

#define NVIC_ISPR1_NVIC_RES58_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES58_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES58_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES59_MASK      ((uint32_t)0x00000800)
#define NVIC_ISPR1_R_NVIC_RES59_BIT       (11)
#define NVIC_ISPR1_R_NVIC_RES59_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES59_EN        ((uint32_t)0x00000800)

#define NVIC_ISPR1_NVIC_RES59_MASK        ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES59_DIS         ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES59_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES60_MASK      ((uint32_t)0x00001000)
#define NVIC_ISPR1_R_NVIC_RES60_BIT       (12)
#define NVIC_ISPR1_R_NVIC_RES60_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES60_EN        ((uint32_t)0x00001000)

#define NVIC_ISPR1_NVIC_RES60_MASK        ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES60_DIS         ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES60_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_RES61_MASK ((uint32_t)0x00002000)
#define NVIC_ISPR1_R_NVIC_RES61_BIT  (13)
#define NVIC_ISPR1_R_NVIC_RES61_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES61_EN   ((uint32_t)0x00002000)

#define NVIC_ISPR1_NVIC_RES61_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES61_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES61_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES62_MASK ((uint32_t)0x00004000)
#define NVIC_ISPR1_R_NVIC_RES62_BIT  (14)
#define NVIC_ISPR1_R_NVIC_RES62_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES62_EN   ((uint32_t)0x00004000)

#define NVIC_ISPR1_NVIC_RES62_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES62_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES62_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES63_MASK ((uint32_t)0x00008000)
#define NVIC_ISPR1_R_NVIC_RES63_BIT (15)
#define NVIC_ISPR1_R_NVIC_RES63_DIS ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES63_EN  ((uint32_t)0x00008000)

#define NVIC_ISPR1_NVIC_RES63_MASK  ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES63_DIS   ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES63_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES64_MASK ((uint32_t)0x00010000)
#define NVIC_ISPR1_R_NVIC_RES64_BIT  (16)
#define NVIC_ISPR1_R_NVIC_RES64_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES64_EN   ((uint32_t)0x00010000)

#define NVIC_ISPR1_NVIC_RES64_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES64_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES64_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES65_MASK ((uint32_t)0x00020000)
#define NVIC_ISPR1_R_NVIC_RES65_BIT  (17)
#define NVIC_ISPR1_R_NVIC_RES65_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES65_EN   ((uint32_t)0x00020000)

#define NVIC_ISPR1_NVIC_RES65_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES65_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES65_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES66_MASK ((uint32_t)0x00040000)
#define NVIC_ISPR1_R_NVIC_RES66_BIT  (18)
#define NVIC_ISPR1_R_NVIC_RES66_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES66_EN   ((uint32_t)0x00040000)

#define NVIC_ISPR1_NVIC_RES66_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES66_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES66_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES67_MASK ((uint32_t)0x00080000)
#define NVIC_ISPR1_R_NVIC_RES67_BIT  (19)
#define NVIC_ISPR1_R_NVIC_RES67_DIS  ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES67_EN   ((uint32_t)0x00080000)

#define NVIC_ISPR1_NVIC_RES67_MASK   ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES67_DIS    ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES67_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000)
#define NVIC_ISPR1_R_NVIC_RES68_BIT     (20)
#define NVIC_ISPR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000)

#define NVIC_ISPR1_NVIC_RES68_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES68_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES68_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000)
#define NVIC_ISPR1_R_NVIC_RES69_BIT     (21)
#define NVIC_ISPR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000)

#define NVIC_ISPR1_NVIC_RES69_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES69_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES69_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000)
#define NVIC_ISPR1_R_NVIC_RES70_BIT     (22)
#define NVIC_ISPR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000)

#define NVIC_ISPR1_NVIC_RES70_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES70_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES70_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ISPR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000)
#define NVIC_ISPR1_R_NVIC_RES71_BIT     (23)
#define NVIC_ISPR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000)

#define NVIC_ISPR1_NVIC_RES71_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES71_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES71_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000)
#define NVIC_ISPR1_R_NVIC_RES72_BIT     (24)
#define NVIC_ISPR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000)

#define NVIC_ISPR1_NVIC_RES72_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES72_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES72_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES73_MASK     ((uint32_t)0x02000000)
#define NVIC_ISPR1_R_NVIC_RES73_BIT      (25)
#define NVIC_ISPR1_R_NVIC_RES73_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES73_EN       ((uint32_t)0x02000000)

#define NVIC_ISPR1_NVIC_RES73_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES73_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES73_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES74_MASK     ((uint32_t)0x04000000)
#define NVIC_ISPR1_R_NVIC_RES74_BIT      (26)
#define NVIC_ISPR1_R_NVIC_RES74_DIS      ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES74_EN       ((uint32_t)0x04000000)

#define NVIC_ISPR1_NVIC_RES74_MASK       ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES74_DIS        ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES74_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES75_MASK    ((uint32_t)0x08000000)
#define NVIC_ISPR1_R_NVIC_RES75_BIT     (27)
#define NVIC_ISPR1_R_NVIC_RES75_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES75_EN      ((uint32_t)0x08000000)

#define NVIC_ISPR1_NVIC_RES75_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES75_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES75_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES76_MASK    ((uint32_t)0x10000000)
#define NVIC_ISPR1_R_NVIC_RES76_BIT     (28)
#define NVIC_ISPR1_R_NVIC_RES76_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES76_EN      ((uint32_t)0x10000000)

#define NVIC_ISPR1_NVIC_RES76_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES76_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES76_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES77_MASK    ((uint32_t)0x20000000)
#define NVIC_ISPR1_R_NVIC_RES77_BIT     (29)
#define NVIC_ISPR1_R_NVIC_RES77_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES77_EN      ((uint32_t)0x20000000)

#define NVIC_ISPR1_NVIC_RES77_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES77_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES77_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES78_MASK    ((uint32_t)0x40000000)
#define NVIC_ISPR1_R_NVIC_RES78_BIT     (30)
#define NVIC_ISPR1_R_NVIC_RES78_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES78_EN      ((uint32_t)0x40000000)

#define NVIC_ISPR1_NVIC_RES78_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES78_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES78_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ISPR1_R_NVIC_RES79_MASK    ((uint32_t)0x80000000)
#define NVIC_ISPR1_R_NVIC_RES79_BIT     (31)
#define NVIC_ISPR1_R_NVIC_RES79_DIS     ((uint32_t)0x00000000)
#define NVIC_ISPR1_R_NVIC_RES79_EN      ((uint32_t)0x80000000)

#define NVIC_ISPR1_NVIC_RES79_MASK      ((uint32_t)0x00000001)
#define NVIC_ISPR1_NVIC_RES79_DIS       ((uint32_t)0x00000000)
#define NVIC_ISPR1_NVIC_RES79_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ICPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ICPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICPR1_OFFSET)))
#define NVIC_ICPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR1_OFFSET)))

//--------
#define NVIC_ICPR1_R_NVIC_DMA_INT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_R_NVIC_DMA_INT2_BIT     (0)
#define NVIC_ICPR1_R_NVIC_DMA_INT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA_INT2_EN      ((uint32_t)0x00000001)

#define NVIC_ICPR1_NVIC_DMA_INT2_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA_INT2_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA_INT2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000002)
#define NVIC_ICPR1_R_NVIC_DMA_INT1_BIT     (1)
#define NVIC_ICPR1_R_NVIC_DMA_INT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA_INT1_EN      ((uint32_t)0x00000002)

#define NVIC_ICPR1_NVIC_DMA_INT1_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA_INT1_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA_INT1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000004)
#define NVIC_ICPR1_R_NVIC_DMA_INT0_BIT      (2)
#define NVIC_ICPR1_R_NVIC_DMA_INT0_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_DMA_INT0_EN       ((uint32_t)0x00000004)

#define NVIC_ICPR1_NVIC_DMA_INT0_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_DMA_INT0_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_DMA_INT0_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_PORT1_MASK  ((uint32_t)0x00000008)
#define NVIC_ICPR1_R_NVIC_PORT1_BIT   (3)
#define NVIC_ICPR1_R_NVIC_PORT1_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT1_EN    ((uint32_t)0x00000008)

#define NVIC_ICPR1_NVIC_PORT1_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT1_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PORT2_MASK  ((uint32_t)0x00000010)
#define NVIC_ICPR1_R_NVIC_PORT2_BIT   (4)
#define NVIC_ICPR1_R_NVIC_PORT2_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT2_EN    ((uint32_t)0x00000010)

#define NVIC_ICPR1_NVIC_PORT2_MASK    ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT2_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PORT3_MASK     ((uint32_t)0x00000020)
#define NVIC_ICPR1_R_NVIC_PORT3_BIT      (5)
#define NVIC_ICPR1_R_NVIC_PORT3_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT3_EN       ((uint32_t)0x00000020)

#define NVIC_ICPR1_NVIC_PORT3_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT3_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT3_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PORT4_MASK     ((uint32_t)0x00000040)
#define NVIC_ICPR1_R_NVIC_PORT4_BIT      (6)
#define NVIC_ICPR1_R_NVIC_PORT4_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT4_EN       ((uint32_t)0x00000040)

#define NVIC_ICPR1_NVIC_PORT4_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT4_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PORT5_MASK     ((uint32_t)0x00000080)
#define NVIC_ICPR1_R_NVIC_PORT5_BIT      (7)
#define NVIC_ICPR1_R_NVIC_PORT5_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT5_EN       ((uint32_t)0x00000080)

#define NVIC_ICPR1_NVIC_PORT5_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT5_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_PORT6_MASK     ((uint32_t)0x00000100)
#define NVIC_ICPR1_R_NVIC_PORT6_BIT      (8)
#define NVIC_ICPR1_R_NVIC_PORT6_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_PORT6_EN       ((uint32_t)0x00000100)

#define NVIC_ICPR1_NVIC_PORT6_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_PORT6_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_PORT6_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200)
#define NVIC_ICPR1_R_NVIC_RES57_BIT     (9)
#define NVIC_ICPR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200)

#define NVIC_ICPR1_NVIC_RES57_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES57_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES57_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400)
#define NVIC_ICPR1_R_NVIC_RES58_BIT     (10)
#define NVIC_ICPR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400)

#define NVIC_ICPR1_NVIC_RES58_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES58_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES58_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES59_MASK      ((uint32_t)0x00000800)
#define NVIC_ICPR1_R_NVIC_RES59_BIT       (11)
#define NVIC_ICPR1_R_NVIC_RES59_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES59_EN        ((uint32_t)0x00000800)

#define NVIC_ICPR1_NVIC_RES59_MASK        ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES59_DIS         ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES59_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES60_MASK      ((uint32_t)0x00001000)
#define NVIC_ICPR1_R_NVIC_RES60_BIT       (12)
#define NVIC_ICPR1_R_NVIC_RES60_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES60_EN        ((uint32_t)0x00001000)

#define NVIC_ICPR1_NVIC_RES60_MASK        ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES60_DIS         ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES60_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_RES61_MASK ((uint32_t)0x00002000)
#define NVIC_ICPR1_R_NVIC_RES61_BIT  (13)
#define NVIC_ICPR1_R_NVIC_RES61_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES61_EN   ((uint32_t)0x00002000)

#define NVIC_ICPR1_NVIC_RES61_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES61_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES61_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES62_MASK ((uint32_t)0x00004000)
#define NVIC_ICPR1_R_NVIC_RES62_BIT  (14)
#define NVIC_ICPR1_R_NVIC_RES62_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES62_EN   ((uint32_t)0x00004000)

#define NVIC_ICPR1_NVIC_RES62_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES62_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES62_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES63_MASK ((uint32_t)0x00008000)
#define NVIC_ICPR1_R_NVIC_RES63_BIT (15)
#define NVIC_ICPR1_R_NVIC_RES63_DIS ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES63_EN  ((uint32_t)0x00008000)

#define NVIC_ICPR1_NVIC_RES63_MASK  ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES63_DIS   ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES63_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES64_MASK ((uint32_t)0x00010000)
#define NVIC_ICPR1_R_NVIC_RES64_BIT  (16)
#define NVIC_ICPR1_R_NVIC_RES64_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES64_EN   ((uint32_t)0x00010000)

#define NVIC_ICPR1_NVIC_RES64_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES64_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES64_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES65_MASK ((uint32_t)0x00020000)
#define NVIC_ICPR1_R_NVIC_RES65_BIT  (17)
#define NVIC_ICPR1_R_NVIC_RES65_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES65_EN   ((uint32_t)0x00020000)

#define NVIC_ICPR1_NVIC_RES65_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES65_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES65_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES66_MASK ((uint32_t)0x00040000)
#define NVIC_ICPR1_R_NVIC_RES66_BIT  (18)
#define NVIC_ICPR1_R_NVIC_RES66_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES66_EN   ((uint32_t)0x00040000)

#define NVIC_ICPR1_NVIC_RES66_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES66_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES66_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES67_MASK ((uint32_t)0x00080000)
#define NVIC_ICPR1_R_NVIC_RES67_BIT  (19)
#define NVIC_ICPR1_R_NVIC_RES67_DIS  ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES67_EN   ((uint32_t)0x00080000)

#define NVIC_ICPR1_NVIC_RES67_MASK   ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES67_DIS    ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES67_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000)
#define NVIC_ICPR1_R_NVIC_RES68_BIT     (20)
#define NVIC_ICPR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000)

#define NVIC_ICPR1_NVIC_RES68_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES68_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES68_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000)
#define NVIC_ICPR1_R_NVIC_RES69_BIT     (21)
#define NVIC_ICPR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000)

#define NVIC_ICPR1_NVIC_RES69_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES69_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES69_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000)
#define NVIC_ICPR1_R_NVIC_RES70_BIT     (22)
#define NVIC_ICPR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000)

#define NVIC_ICPR1_NVIC_RES70_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES70_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES70_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_ICPR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000)
#define NVIC_ICPR1_R_NVIC_RES71_BIT     (23)
#define NVIC_ICPR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000)

#define NVIC_ICPR1_NVIC_RES71_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES71_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES71_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000)
#define NVIC_ICPR1_R_NVIC_RES72_BIT     (24)
#define NVIC_ICPR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000)

#define NVIC_ICPR1_NVIC_RES72_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES72_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES72_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES73_MASK     ((uint32_t)0x02000000)
#define NVIC_ICPR1_R_NVIC_RES73_BIT      (25)
#define NVIC_ICPR1_R_NVIC_RES73_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES73_EN       ((uint32_t)0x02000000)

#define NVIC_ICPR1_NVIC_RES73_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES73_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES73_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES74_MASK     ((uint32_t)0x04000000)
#define NVIC_ICPR1_R_NVIC_RES74_BIT      (26)
#define NVIC_ICPR1_R_NVIC_RES74_DIS      ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES74_EN       ((uint32_t)0x04000000)

#define NVIC_ICPR1_NVIC_RES74_MASK       ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES74_DIS        ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES74_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES75_MASK    ((uint32_t)0x08000000)
#define NVIC_ICPR1_R_NVIC_RES75_BIT     (27)
#define NVIC_ICPR1_R_NVIC_RES75_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES75_EN      ((uint32_t)0x08000000)

#define NVIC_ICPR1_NVIC_RES75_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES75_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES75_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES76_MASK    ((uint32_t)0x10000000)
#define NVIC_ICPR1_R_NVIC_RES76_BIT     (28)
#define NVIC_ICPR1_R_NVIC_RES76_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES76_EN      ((uint32_t)0x10000000)

#define NVIC_ICPR1_NVIC_RES76_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES76_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES76_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES77_MASK    ((uint32_t)0x20000000)
#define NVIC_ICPR1_R_NVIC_RES77_BIT     (29)
#define NVIC_ICPR1_R_NVIC_RES77_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES77_EN      ((uint32_t)0x20000000)

#define NVIC_ICPR1_NVIC_RES77_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES77_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES77_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES78_MASK    ((uint32_t)0x40000000)
#define NVIC_ICPR1_R_NVIC_RES78_BIT     (30)
#define NVIC_ICPR1_R_NVIC_RES78_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES78_EN      ((uint32_t)0x40000000)

#define NVIC_ICPR1_NVIC_RES78_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES78_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES78_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_ICPR1_R_NVIC_RES79_MASK    ((uint32_t)0x80000000)
#define NVIC_ICPR1_R_NVIC_RES79_BIT     (31)
#define NVIC_ICPR1_R_NVIC_RES79_DIS     ((uint32_t)0x00000000)
#define NVIC_ICPR1_R_NVIC_RES79_EN      ((uint32_t)0x80000000)

#define NVIC_ICPR1_NVIC_RES79_MASK      ((uint32_t)0x00000001)
#define NVIC_ICPR1_NVIC_RES79_DIS       ((uint32_t)0x00000000)
#define NVIC_ICPR1_NVIC_RES79_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IABR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IABR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_IABR1_OFFSET)))
#define NVIC_IABR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR1_OFFSET)))


//--------
#define NVIC_IABR1_R_NVIC_DMA_INT2_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_R_NVIC_DMA_INT2_BIT     (0)
#define NVIC_IABR1_R_NVIC_DMA_INT2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA_INT2_EN      ((uint32_t)0x00000001)

#define NVIC_IABR1_NVIC_DMA_INT2_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA_INT2_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA_INT2_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000002)
#define NVIC_IABR1_R_NVIC_DMA_INT1_BIT     (1)
#define NVIC_IABR1_R_NVIC_DMA_INT1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA_INT1_EN      ((uint32_t)0x00000002)

#define NVIC_IABR1_NVIC_DMA_INT1_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA_INT1_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA_INT1_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000004)
#define NVIC_IABR1_R_NVIC_DMA_INT0_BIT      (2)
#define NVIC_IABR1_R_NVIC_DMA_INT0_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_DMA_INT0_EN       ((uint32_t)0x00000004)

#define NVIC_IABR1_NVIC_DMA_INT0_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_DMA_INT0_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_DMA_INT0_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_PORT1_MASK  ((uint32_t)0x00000008)
#define NVIC_IABR1_R_NVIC_PORT1_BIT   (3)
#define NVIC_IABR1_R_NVIC_PORT1_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT1_EN    ((uint32_t)0x00000008)

#define NVIC_IABR1_NVIC_PORT1_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT1_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT1_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PORT2_MASK  ((uint32_t)0x00000010)
#define NVIC_IABR1_R_NVIC_PORT2_BIT   (4)
#define NVIC_IABR1_R_NVIC_PORT2_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT2_EN    ((uint32_t)0x00000010)

#define NVIC_IABR1_NVIC_PORT2_MASK    ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT2_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT2_EN      ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PORT3_MASK     ((uint32_t)0x00000020)
#define NVIC_IABR1_R_NVIC_PORT3_BIT      (5)
#define NVIC_IABR1_R_NVIC_PORT3_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT3_EN       ((uint32_t)0x00000020)

#define NVIC_IABR1_NVIC_PORT3_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT3_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT3_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PORT4_MASK     ((uint32_t)0x00000040)
#define NVIC_IABR1_R_NVIC_PORT4_BIT      (6)
#define NVIC_IABR1_R_NVIC_PORT4_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT4_EN       ((uint32_t)0x00000040)

#define NVIC_IABR1_NVIC_PORT4_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT4_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT4_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PORT5_MASK     ((uint32_t)0x00000080)
#define NVIC_IABR1_R_NVIC_PORT5_BIT      (7)
#define NVIC_IABR1_R_NVIC_PORT5_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT5_EN       ((uint32_t)0x00000080)

#define NVIC_IABR1_NVIC_PORT5_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT5_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT5_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_PORT6_MASK     ((uint32_t)0x00000100)
#define NVIC_IABR1_R_NVIC_PORT6_BIT      (8)
#define NVIC_IABR1_R_NVIC_PORT6_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_PORT6_EN       ((uint32_t)0x00000100)

#define NVIC_IABR1_NVIC_PORT6_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_PORT6_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_PORT6_EN         ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200)
#define NVIC_IABR1_R_NVIC_RES57_BIT     (9)
#define NVIC_IABR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200)

#define NVIC_IABR1_NVIC_RES57_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES57_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES57_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400)
#define NVIC_IABR1_R_NVIC_RES58_BIT     (10)
#define NVIC_IABR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400)

#define NVIC_IABR1_NVIC_RES58_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES58_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES58_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES59_MASK      ((uint32_t)0x00000800)
#define NVIC_IABR1_R_NVIC_RES59_BIT       (11)
#define NVIC_IABR1_R_NVIC_RES59_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES59_EN        ((uint32_t)0x00000800)

#define NVIC_IABR1_NVIC_RES59_MASK        ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES59_DIS         ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES59_EN          ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES60_MASK      ((uint32_t)0x00001000)
#define NVIC_IABR1_R_NVIC_RES60_BIT       (12)
#define NVIC_IABR1_R_NVIC_RES60_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES60_EN        ((uint32_t)0x00001000)

#define NVIC_IABR1_NVIC_RES60_MASK        ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES60_DIS         ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES60_EN          ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_RES61_MASK ((uint32_t)0x00002000)
#define NVIC_IABR1_R_NVIC_RES61_BIT  (13)
#define NVIC_IABR1_R_NVIC_RES61_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES61_EN   ((uint32_t)0x00002000)

#define NVIC_IABR1_NVIC_RES61_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES61_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES61_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES62_MASK ((uint32_t)0x00004000)
#define NVIC_IABR1_R_NVIC_RES62_BIT  (14)
#define NVIC_IABR1_R_NVIC_RES62_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES62_EN   ((uint32_t)0x00004000)

#define NVIC_IABR1_NVIC_RES62_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES62_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES62_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES63_MASK ((uint32_t)0x00008000)
#define NVIC_IABR1_R_NVIC_RES63_BIT (15)
#define NVIC_IABR1_R_NVIC_RES63_DIS ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES63_EN  ((uint32_t)0x00008000)

#define NVIC_IABR1_NVIC_RES63_MASK  ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES63_DIS   ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES63_EN    ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES64_MASK ((uint32_t)0x00010000)
#define NVIC_IABR1_R_NVIC_RES64_BIT  (16)
#define NVIC_IABR1_R_NVIC_RES64_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES64_EN   ((uint32_t)0x00010000)

#define NVIC_IABR1_NVIC_RES64_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES64_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES64_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES65_MASK ((uint32_t)0x00020000)
#define NVIC_IABR1_R_NVIC_RES65_BIT  (17)
#define NVIC_IABR1_R_NVIC_RES65_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES65_EN   ((uint32_t)0x00020000)

#define NVIC_IABR1_NVIC_RES65_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES65_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES65_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES66_MASK ((uint32_t)0x00040000)
#define NVIC_IABR1_R_NVIC_RES66_BIT  (18)
#define NVIC_IABR1_R_NVIC_RES66_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES66_EN   ((uint32_t)0x00040000)

#define NVIC_IABR1_NVIC_RES66_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES66_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES66_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES67_MASK ((uint32_t)0x00080000)
#define NVIC_IABR1_R_NVIC_RES67_BIT  (19)
#define NVIC_IABR1_R_NVIC_RES67_DIS  ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES67_EN   ((uint32_t)0x00080000)

#define NVIC_IABR1_NVIC_RES67_MASK   ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES67_DIS    ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES67_EN     ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000)
#define NVIC_IABR1_R_NVIC_RES68_BIT     (20)
#define NVIC_IABR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000)

#define NVIC_IABR1_NVIC_RES68_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES68_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES68_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000)
#define NVIC_IABR1_R_NVIC_RES69_BIT     (21)
#define NVIC_IABR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000)

#define NVIC_IABR1_NVIC_RES69_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES69_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES69_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000)
#define NVIC_IABR1_R_NVIC_RES70_BIT     (22)
#define NVIC_IABR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000)

#define NVIC_IABR1_NVIC_RES70_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES70_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES70_EN        ((uint32_t)0x00000001)
//--------


//--------
#define NVIC_IABR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000)
#define NVIC_IABR1_R_NVIC_RES71_BIT     (23)
#define NVIC_IABR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000)

#define NVIC_IABR1_NVIC_RES71_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES71_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES71_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000)
#define NVIC_IABR1_R_NVIC_RES72_BIT     (24)
#define NVIC_IABR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000)

#define NVIC_IABR1_NVIC_RES72_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES72_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES72_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES73_MASK     ((uint32_t)0x02000000)
#define NVIC_IABR1_R_NVIC_RES73_BIT      (25)
#define NVIC_IABR1_R_NVIC_RES73_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES73_EN       ((uint32_t)0x02000000)

#define NVIC_IABR1_NVIC_RES73_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES73_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES73_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES74_MASK     ((uint32_t)0x04000000)
#define NVIC_IABR1_R_NVIC_RES74_BIT      (26)
#define NVIC_IABR1_R_NVIC_RES74_DIS      ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES74_EN       ((uint32_t)0x04000000)

#define NVIC_IABR1_NVIC_RES74_MASK       ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES74_DIS        ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES74_EN         ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES75_MASK    ((uint32_t)0x08000000)
#define NVIC_IABR1_R_NVIC_RES75_BIT     (27)
#define NVIC_IABR1_R_NVIC_RES75_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES75_EN      ((uint32_t)0x08000000)

#define NVIC_IABR1_NVIC_RES75_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES75_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES75_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES76_MASK    ((uint32_t)0x10000000)
#define NVIC_IABR1_R_NVIC_RES76_BIT     (28)
#define NVIC_IABR1_R_NVIC_RES76_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES76_EN      ((uint32_t)0x10000000)

#define NVIC_IABR1_NVIC_RES76_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES76_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES76_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES77_MASK    ((uint32_t)0x20000000)
#define NVIC_IABR1_R_NVIC_RES77_BIT     (29)
#define NVIC_IABR1_R_NVIC_RES77_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES77_EN      ((uint32_t)0x20000000)

#define NVIC_IABR1_NVIC_RES77_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES77_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES77_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES78_MASK    ((uint32_t)0x40000000)
#define NVIC_IABR1_R_NVIC_RES78_BIT     (30)
#define NVIC_IABR1_R_NVIC_RES78_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES78_EN      ((uint32_t)0x40000000)

#define NVIC_IABR1_NVIC_RES78_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES78_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES78_EN        ((uint32_t)0x00000001)
//--------

//--------
#define NVIC_IABR1_R_NVIC_RES79_MASK    ((uint32_t)0x80000000)
#define NVIC_IABR1_R_NVIC_RES79_BIT     (31)
#define NVIC_IABR1_R_NVIC_RES79_DIS     ((uint32_t)0x00000000)
#define NVIC_IABR1_R_NVIC_RES79_EN      ((uint32_t)0x80000000)

#define NVIC_IABR1_NVIC_RES79_MASK      ((uint32_t)0x00000001)
#define NVIC_IABR1_NVIC_RES79_DIS       ((uint32_t)0x00000000)
#define NVIC_IABR1_NVIC_RES79_EN        ((uint32_t)0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_IPRb            (((IPRb__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPRw            (((IPRw__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR0 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR0            (((IPR0_TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPR0_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR0_OFFSET)))

//--------
#define NVIC_IPR0_R_NVIC_PSS_MASK     ((uint32_t)0x000000E0)
#define NVIC_IPR0_R_NVIC_PSS_BIT      (5)
#define NVIC_IPR0_R_NVIC_PSS_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_PSS_IP1      ((uint32_t)0x00000020)
#define NVIC_IPR0_R_NVIC_PSS_IP2      ((uint32_t)0x00000040)
#define NVIC_IPR0_R_NVIC_PSS_IP3      ((uint32_t)0x00000060)
#define NVIC_IPR0_R_NVIC_PSS_IP4      ((uint32_t)0x00000080)
#define NVIC_IPR0_R_NVIC_PSS_IP5      ((uint32_t)0x000000A0)
#define NVIC_IPR0_R_NVIC_PSS_IP6      ((uint32_t)0x000000C0)
#define NVIC_IPR0_R_NVIC_PSS_IP7      ((uint32_t)0x000000E0)

#define NVIC_IPR0_NVIC_PSS_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_PSS_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_PSS_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_PSS_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_PSS_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_PSS_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_PSS_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_PSS_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_PSS_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_CS_MASK     ((uint32_t)0x0000E000)
#define NVIC_IPR0_R_NVIC_CS_BIT      (13)
#define NVIC_IPR0_R_NVIC_CS_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_CS_IP1      ((uint32_t)0x00002000)
#define NVIC_IPR0_R_NVIC_CS_IP2      ((uint32_t)0x00004000)
#define NVIC_IPR0_R_NVIC_CS_IP3      ((uint32_t)0x00006000)
#define NVIC_IPR0_R_NVIC_CS_IP4      ((uint32_t)0x00008000)
#define NVIC_IPR0_R_NVIC_CS_IP5      ((uint32_t)0x0000A000)
#define NVIC_IPR0_R_NVIC_CS_IP6      ((uint32_t)0x0000C000)
#define NVIC_IPR0_R_NVIC_CS_IP7      ((uint32_t)0x0000E000)

#define NVIC_IPR0_NVIC_CS_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_CS_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_CS_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_CS_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_CS_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_CS_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_CS_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_CS_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_CS_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_PCM_MASK    	((uint32_t)0x00E00000)
#define NVIC_IPR0_R_NVIC_PCM_BIT     	(21)
#define NVIC_IPR0_R_NVIC_PCM_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_PCM_IP1      ((uint32_t)0x00200000)
#define NVIC_IPR0_R_NVIC_PCM_IP2      ((uint32_t)0x00400000)
#define NVIC_IPR0_R_NVIC_PCM_IP3      ((uint32_t)0x00600000)
#define NVIC_IPR0_R_NVIC_PCM_IP4      ((uint32_t)0x00800000)
#define NVIC_IPR0_R_NVIC_PCM_IP5      ((uint32_t)0x00A00000)
#define NVIC_IPR0_R_NVIC_PCM_IP6      ((uint32_t)0x00C00000)
#define NVIC_IPR0_R_NVIC_PCM_IP7      ((uint32_t)0x00E00000)

#define NVIC_IPR0_NVIC_PCM_MASK      	((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_PCM_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_PCM_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_PCM_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_PCM_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_PCM_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_PCM_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_PCM_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_PCM_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR0_R_NVIC_WDT_A_MASK     ((uint32_t)0xF0000000)
#define NVIC_IPR0_R_NVIC_WDT_A_BIT      (29)
#define NVIC_IPR0_R_NVIC_WDT_A_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP1      ((uint32_t)0x10000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP2      ((uint32_t)0x20000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP3      ((uint32_t)0x30000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP4      ((uint32_t)0x40000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP5      ((uint32_t)0x50000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP6      ((uint32_t)0x60000000)
#define NVIC_IPR0_R_NVIC_WDT_A_IP7      ((uint32_t)0x70000000)

#define NVIC_IPR0_NVIC_WDT_A_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR0_NVIC_WDT_A_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR0_NVIC_WDT_A_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR0_NVIC_WDT_A_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR0_NVIC_WDT_A_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR0_NVIC_WDT_A_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR0_NVIC_WDT_A_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR0_NVIC_WDT_A_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR0_NVIC_WDT_A_IP7        ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR1 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR1            (((IPR1_TypeDef*)(NVIC_BASE+NVIC_IPR1_OFFSET)))
#define NVIC_IPR1_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR1_OFFSET)))

//--------
#define NVIC_IPR1_R_NVIC_FPU_INT_MASK     ((uint32_t)0x000000E0)
#define NVIC_IPR1_R_NVIC_FPU_INT_BIT      (5)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP1      ((uint32_t)0x00000020)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP2      ((uint32_t)0x00000040)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP3      ((uint32_t)0x00000060)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP4      ((uint32_t)0x00000080)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP5      ((uint32_t)0x000000A0)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP6      ((uint32_t)0x000000C0)
#define NVIC_IPR1_R_NVIC_FPU_INT_IP7      ((uint32_t)0x000000E0)

#define NVIC_IPR1_NVIC_FPU_INT_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_FPU_INT_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_FPU_INT_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_FPU_INT_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_FPU_INT_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_FPU_INT_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_FPU_INT_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_FPU_INT_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_FPU_INT_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR1_R_NVIC_FLCTL_MASK     ((uint32_t)0x0000E000)
#define NVIC_IPR1_R_NVIC_FLCTL_BIT      (13)
#define NVIC_IPR1_R_NVIC_FLCTL_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP1      ((uint32_t)0x00002000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP2      ((uint32_t)0x00004000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP3      ((uint32_t)0x00006000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP4      ((uint32_t)0x00008000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP5      ((uint32_t)0x0000A000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP6      ((uint32_t)0x0000C000)
#define NVIC_IPR1_R_NVIC_FLCTL_IP7      ((uint32_t)0x0000E000)

#define NVIC_IPR1_NVIC_FLCTL_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_FLCTL_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_FLCTL_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_FLCTL_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_FLCTL_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_FLCTL_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_FLCTL_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_FLCTL_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_FLCTL_IP7        ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR1_R_NVIC_COMP_E0_MASK     ((uint32_t)0x00E00000)
#define NVIC_IPR1_R_NVIC_COMP_E0_BIT      (21)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP1      ((uint32_t)0x00200000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP2      ((uint32_t)0x00400000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP3      ((uint32_t)0x00600000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP4      ((uint32_t)0x00800000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP5      ((uint32_t)0x00A00000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP6      ((uint32_t)0x00C00000)
#define NVIC_IPR1_R_NVIC_COMP_E0_IP7      ((uint32_t)0x00E00000)

#define NVIC_IPR1_NVIC_COMP_E0_MASK       ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_COMP_E0_IP0        ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_COMP_E0_IP1        ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_COMP_E0_IP2        ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_COMP_E0_IP3        ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_COMP_E0_IP4        ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_COMP_E0_IP5        ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_COMP_E0_IP6        ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_COMP_E0_IP7        ((uint32_t)0x00000007)
//--------

//-------
#define NVIC_IPR1_R_NVIC_COMP_E1_MASK      ((uint32_t)0xE0000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_BIT       (29)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP1       ((uint32_t)0x20000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP2       ((uint32_t)0x40000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP3       ((uint32_t)0x60000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP4       ((uint32_t)0x80000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP5       ((uint32_t)0xA0000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP6       ((uint32_t)0xC0000000)
#define NVIC_IPR1_R_NVIC_COMP_E1_IP7       ((uint32_t)0xE0000000)

#define NVIC_IPR1_NVIC_COMP_E1_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR1_NVIC_COMP_E1_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR1_NVIC_COMP_E1_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR1_NVIC_COMP_E1_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR1_NVIC_COMP_E1_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR1_NVIC_COMP_E1_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR1_NVIC_COMP_E1_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR1_NVIC_COMP_E1_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR1_NVIC_COMP_E1_IP7         ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR2 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR2            (((IPR2_TypeDef*)(NVIC_BASE+NVIC_IPR2_OFFSET)))
#define NVIC_IPR2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR2_OFFSET)))


//--------
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_BIT       (5)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR2_R_NVIC_Timer_A0_CC0_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR2_NVIC_Timer_A0_CC0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_Timer_A0_CC0_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_Timer_A0_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR2_R_NVIC_Timer_A0_BIT   (13)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR2_R_NVIC_Timer_A0_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR2_NVIC_Timer_A0_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_Timer_A0_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_Timer_A0_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_Timer_A0_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_Timer_A0_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_Timer_A0_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_Timer_A0_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_Timer_A0_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_Timer_A0_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_BIT    (21)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR2_R_NVIC_Timer_A1_CC0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR2_NVIC_Timer_A1_CC0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_Timer_A1_CC0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR2_R_NVIC_Timer_A1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_BIT    (29)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR2_R_NVIC_Timer_A1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR2_NVIC_Timer_A1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR2_NVIC_Timer_A1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR2_NVIC_Timer_A1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR2_NVIC_Timer_A1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR2_NVIC_Timer_A1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR2_NVIC_Timer_A1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR2_NVIC_Timer_A1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR2_NVIC_Timer_A1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR2_NVIC_Timer_A1_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR3 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR3            (((IPR3_TypeDef*)(NVIC_BASE+NVIC_IPR3_OFFSET)))
#define NVIC_IPR3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR3_OFFSET)))


//--------
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_BIT       (5)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR3_R_NVIC_Timer_A2_CC0_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR3_NVIC_Timer_A2_CC0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_Timer_A2_CC0_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_Timer_A2_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR3_R_NVIC_Timer_A2_BIT   (13)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR3_R_NVIC_Timer_A2_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR3_NVIC_Timer_A2_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_Timer_A2_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_Timer_A2_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_Timer_A2_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_Timer_A2_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_Timer_A2_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_Timer_A2_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_Timer_A2_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_Timer_A2_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_BIT    (21)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR3_R_NVIC_Timer_A3_CC0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR3_NVIC_Timer_A3_CC0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_Timer_A3_CC0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR3_R_NVIC_Timer_A3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_BIT    (29)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR3_R_NVIC_Timer_A3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR3_NVIC_Timer_A3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR3_NVIC_Timer_A3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR3_NVIC_Timer_A3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR3_NVIC_Timer_A3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR3_NVIC_Timer_A3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR3_NVIC_Timer_A3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR3_NVIC_Timer_A3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR3_NVIC_Timer_A3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR3_NVIC_Timer_A3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR4 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR4            (((IPR4_TypeDef*)(NVIC_BASE+NVIC_IPR4_OFFSET)))
#define NVIC_IPR4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR4_OFFSET)))


//--------
#define NVIC_IPR4_R_NVIC_eUSCI_A0_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_BIT       (5)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR4_R_NVIC_eUSCI_A0_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR4_NVIC_eUSCI_A0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_eUSCI_A0_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_eUSCI_A1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_BIT   (13)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR4_R_NVIC_eUSCI_A1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR4_NVIC_eUSCI_A1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_eUSCI_A1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_eUSCI_A2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_BIT    (21)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR4_R_NVIC_eUSCI_A2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR4_NVIC_eUSCI_A2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_eUSCI_A2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR4_R_NVIC_eUSCI_A3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_BIT    (29)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR4_R_NVIC_eUSCI_A3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR4_NVIC_eUSCI_A3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR4_NVIC_eUSCI_A3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR5 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR5            (((IPR5_TypeDef*)(NVIC_BASE+NVIC_IPR5_OFFSET)))
#define NVIC_IPR5_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR5_OFFSET)))

//--------
#define NVIC_IPR5_R_NVIC_eUSCI_B0_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_BIT       (5)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR5_R_NVIC_eUSCI_B0_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR5_NVIC_eUSCI_B0_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_eUSCI_B0_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_eUSCI_B1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_BIT   (13)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR5_R_NVIC_eUSCI_B1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR5_NVIC_eUSCI_B1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_eUSCI_B1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_eUSCI_B2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_BIT    (21)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR5_R_NVIC_eUSCI_B2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR5_NVIC_eUSCI_B2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_eUSCI_B2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR5_R_NVIC_eUSCI_B3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_BIT    (29)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR5_R_NVIC_eUSCI_B3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR5_NVIC_eUSCI_B3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR5_NVIC_eUSCI_B3_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR6 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR6            (((IPR6_TypeDef*)(NVIC_BASE+NVIC_IPR6_OFFSET)))
#define NVIC_IPR6_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR6_OFFSET)))

//--------
#define NVIC_IPR6_R_NVIC_ADC_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR6_R_NVIC_ADC_BIT       (5)
#define NVIC_IPR6_R_NVIC_ADC_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_ADC_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR6_R_NVIC_ADC_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR6_R_NVIC_ADC_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR6_R_NVIC_ADC_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR6_R_NVIC_ADC_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR6_R_NVIC_ADC_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR6_R_NVIC_ADC_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR6_NVIC_ADC_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_ADC_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_ADC_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_ADC_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_ADC_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_ADC_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_ADC_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_ADC_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_ADC_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_Timer32_INT1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_BIT   (13)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR6_R_NVIC_Timer32_INT1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR6_NVIC_Timer32_INT1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_Timer32_INT1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_Timer32_INT2_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_BIT    (21)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR6_R_NVIC_Timer32_INT2_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR6_NVIC_Timer32_INT2_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_Timer32_INT2_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR6_R_NVIC_Timer32_INTC_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_BIT    (29)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR6_R_NVIC_Timer32_INTC_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR6_NVIC_Timer32_INTC_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR6_NVIC_Timer32_INTC_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR7 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR7            (((IPR7_TypeDef*)(NVIC_BASE+NVIC_IPR7_OFFSET)))
#define NVIC_IPR7_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR7_OFFSET)))

//--------
#define NVIC_IPR7_R_NVIC_AES256_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR7_R_NVIC_AES256_BIT       (5)
#define NVIC_IPR7_R_NVIC_AES256_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_AES256_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR7_R_NVIC_AES256_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR7_R_NVIC_AES256_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR7_R_NVIC_AES256_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR7_R_NVIC_AES256_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR7_R_NVIC_AES256_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR7_R_NVIC_AES256_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR7_NVIC_AES256_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_AES256_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_AES256_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_AES256_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_AES256_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_AES256_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_AES256_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_AES256_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_AES256_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_RTC_C_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR7_R_NVIC_RTC_C_BIT   (13)
#define NVIC_IPR7_R_NVIC_RTC_C_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR7_R_NVIC_RTC_C_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR7_NVIC_RTC_C_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_RTC_C_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_RTC_C_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_RTC_C_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_RTC_C_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_RTC_C_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_RTC_C_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_RTC_C_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_RTC_C_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_DMA_ERR_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_BIT    (21)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR7_R_NVIC_DMA_ERR_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR7_NVIC_DMA_ERR_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_DMA_ERR_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_DMA_ERR_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_DMA_ERR_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_DMA_ERR_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_DMA_ERR_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_DMA_ERR_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_DMA_ERR_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_DMA_ERR_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR7_R_NVIC_DMA_INT3_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_BIT    (29)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR7_R_NVIC_DMA_INT3_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR7_NVIC_DMA_INT3_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR7_NVIC_DMA_INT3_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR7_NVIC_DMA_INT3_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR7_NVIC_DMA_INT3_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR7_NVIC_DMA_INT3_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR7_NVIC_DMA_INT3_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR7_NVIC_DMA_INT3_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR7_NVIC_DMA_INT3_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR7_NVIC_DMA_INT3_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR8 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR8            (((IPR8_TypeDef*)(NVIC_BASE+NVIC_IPR8_OFFSET)))
#define NVIC_IPR8_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR8_OFFSET)))

//--------
#define NVIC_IPR8_R_NVIC_DMA_INT2_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR8_R_NVIC_DMA_INT2_BIT       (5)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR8_R_NVIC_DMA_INT2_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR8_NVIC_DMA_INT2_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_DMA_INT2_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_DMA_INT2_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_DMA_INT2_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_DMA_INT2_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_DMA_INT2_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_DMA_INT2_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_DMA_INT2_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_DMA_INT2_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_DMA_INT1_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_BIT   (13)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR8_R_NVIC_DMA_INT1_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR8_NVIC_DMA_INT1_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_DMA_INT1_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_DMA_INT1_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_DMA_INT1_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_DMA_INT1_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_DMA_INT1_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_DMA_INT1_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_DMA_INT1_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_DMA_INT1_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_DMA_INT0_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_BIT    (21)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR8_R_NVIC_DMA_INT0_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR8_NVIC_DMA_INT0_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_DMA_INT0_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_DMA_INT0_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_DMA_INT0_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_DMA_INT0_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_DMA_INT0_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_DMA_INT0_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_DMA_INT0_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_DMA_INT0_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR8_R_NVIC_PORT1_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR8_R_NVIC_PORT1_BIT    (29)
#define NVIC_IPR8_R_NVIC_PORT1_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR8_R_NVIC_PORT1_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR8_NVIC_PORT1_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR8_NVIC_PORT1_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR8_NVIC_PORT1_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR8_NVIC_PORT1_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR8_NVIC_PORT1_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR8_NVIC_PORT1_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR8_NVIC_PORT1_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR8_NVIC_PORT1_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR8_NVIC_PORT1_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR9 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR9            (((IPR9_TypeDef*)(NVIC_BASE+NVIC_IPR9_OFFSET)))
#define NVIC_IPR9_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR9_OFFSET)))

//--------
#define NVIC_IPR9_R_NVIC_PORT2_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR9_R_NVIC_PORT2_BIT       (5)
#define NVIC_IPR9_R_NVIC_PORT2_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_PORT2_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR9_R_NVIC_PORT2_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR9_R_NVIC_PORT2_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR9_R_NVIC_PORT2_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR9_R_NVIC_PORT2_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR9_R_NVIC_PORT2_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR9_R_NVIC_PORT2_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR9_NVIC_PORT2_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_PORT2_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_PORT2_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_PORT2_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_PORT2_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_PORT2_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_PORT2_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_PORT2_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_PORT2_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_PORT3_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR9_R_NVIC_PORT3_BIT   (13)
#define NVIC_IPR9_R_NVIC_PORT3_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_PORT3_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR9_R_NVIC_PORT3_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR9_R_NVIC_PORT3_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR9_R_NVIC_PORT3_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR9_R_NVIC_PORT3_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR9_R_NVIC_PORT3_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR9_R_NVIC_PORT3_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR9_NVIC_PORT3_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_PORT3_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_PORT3_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_PORT3_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_PORT3_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_PORT3_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_PORT3_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_PORT3_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_PORT3_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_PORT4_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR9_R_NVIC_PORT4_BIT    (21)
#define NVIC_IPR9_R_NVIC_PORT4_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_PORT4_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR9_R_NVIC_PORT4_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR9_R_NVIC_PORT4_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR9_R_NVIC_PORT4_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR9_R_NVIC_PORT4_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR9_R_NVIC_PORT4_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR9_R_NVIC_PORT4_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR9_NVIC_PORT4_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_PORT4_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_PORT4_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_PORT4_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_PORT4_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_PORT4_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_PORT4_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_PORT4_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_PORT4_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR9_R_NVIC_PORT5_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR9_R_NVIC_PORT5_BIT    (29)
#define NVIC_IPR9_R_NVIC_PORT5_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR9_R_NVIC_PORT5_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR9_NVIC_PORT5_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR9_NVIC_PORT5_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR9_NVIC_PORT5_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR9_NVIC_PORT5_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR9_NVIC_PORT5_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR9_NVIC_PORT5_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR9_NVIC_PORT5_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR9_NVIC_PORT5_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR9_NVIC_PORT5_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR10 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR10            (((IPR10_TypeDef*)(NVIC_BASE+NVIC_IPR10_OFFSET)))
#define NVIC_IPR10_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR10_OFFSET)))

//--------
#define NVIC_IPR10_R_NVIC_PORT6_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR10_R_NVIC_PORT6_BIT       (5)
#define NVIC_IPR10_R_NVIC_PORT6_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_PORT6_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR10_R_NVIC_PORT6_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR10_R_NVIC_PORT6_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR10_R_NVIC_PORT6_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR10_R_NVIC_PORT6_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR10_R_NVIC_PORT6_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR10_R_NVIC_PORT6_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR10_NVIC_PORT6_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_PORT6_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_PORT6_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_PORT6_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_PORT6_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_PORT6_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_PORT6_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_PORT6_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_PORT6_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_RES57_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR10_R_NVIC_RES57_BIT   (13)
#define NVIC_IPR10_R_NVIC_RES57_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_RES57_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR10_R_NVIC_RES57_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR10_R_NVIC_RES57_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR10_R_NVIC_RES57_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR10_R_NVIC_RES57_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR10_R_NVIC_RES57_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR10_R_NVIC_RES57_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR10_NVIC_RES57_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_RES57_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_RES57_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_RES57_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_RES57_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_RES57_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_RES57_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_RES57_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_RES57_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_RES58_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR10_R_NVIC_RES58_BIT    (21)
#define NVIC_IPR10_R_NVIC_RES58_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_RES58_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR10_R_NVIC_RES58_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR10_R_NVIC_RES58_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR10_R_NVIC_RES58_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR10_R_NVIC_RES58_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR10_R_NVIC_RES58_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR10_R_NVIC_RES58_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR10_NVIC_RES58_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_RES58_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_RES58_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_RES58_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_RES58_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_RES58_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_RES58_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_RES58_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_RES58_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR10_R_NVIC_RES59_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR10_R_NVIC_RES59_BIT    (29)
#define NVIC_IPR10_R_NVIC_RES59_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR10_R_NVIC_RES59_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR10_R_NVIC_RES59_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR10_R_NVIC_RES59_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR10_R_NVIC_RES59_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR10_R_NVIC_RES59_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR10_R_NVIC_RES59_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR10_R_NVIC_RES59_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR10_NVIC_RES59_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR10_NVIC_RES59_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR10_NVIC_RES59_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR10_NVIC_RES59_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR10_NVIC_RES59_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR10_NVIC_RES59_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR10_NVIC_RES59_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR10_NVIC_RES59_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR10_NVIC_RES59_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR11 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR11            (((IPR11_TypeDef*)(NVIC_BASE+NVIC_IPR11_OFFSET)))
#define NVIC_IPR11_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR11_OFFSET)))

//--------
#define NVIC_IPR11_R_NVIC_RES60_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR11_R_NVIC_RES60_BIT       (5)
#define NVIC_IPR11_R_NVIC_RES60_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_RES60_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR11_R_NVIC_RES60_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR11_R_NVIC_RES60_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR11_R_NVIC_RES60_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR11_R_NVIC_RES60_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR11_R_NVIC_RES60_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR11_R_NVIC_RES60_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR11_NVIC_RES60_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_RES60_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_RES60_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_RES60_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_RES60_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_RES60_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_RES60_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_RES60_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_RES60_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_RES61_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR11_R_NVIC_RES61_BIT   (13)
#define NVIC_IPR11_R_NVIC_RES61_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_RES61_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR11_R_NVIC_RES61_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR11_R_NVIC_RES61_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR11_R_NVIC_RES61_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR11_R_NVIC_RES61_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR11_R_NVIC_RES61_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR11_R_NVIC_RES61_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR11_NVIC_RES61_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_RES61_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_RES61_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_RES61_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_RES61_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_RES61_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_RES61_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_RES61_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_RES61_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_RES62_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR11_R_NVIC_RES62_BIT    (21)
#define NVIC_IPR11_R_NVIC_RES62_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_RES62_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR11_R_NVIC_RES62_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR11_R_NVIC_RES62_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR11_R_NVIC_RES62_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR11_R_NVIC_RES62_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR11_R_NVIC_RES62_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR11_R_NVIC_RES62_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR11_NVIC_RES62_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_RES62_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_RES62_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_RES62_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_RES62_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_RES62_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_RES62_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_RES62_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_RES62_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR11_R_NVIC_RES63_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR11_R_NVIC_RES63_BIT    (29)
#define NVIC_IPR11_R_NVIC_RES63_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR11_R_NVIC_RES63_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR11_R_NVIC_RES63_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR11_R_NVIC_RES63_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR11_R_NVIC_RES63_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR11_R_NVIC_RES63_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR11_R_NVIC_RES63_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR11_R_NVIC_RES63_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR11_NVIC_RES63_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR11_NVIC_RES63_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR11_NVIC_RES63_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR11_NVIC_RES63_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR11_NVIC_RES63_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR11_NVIC_RES63_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR11_NVIC_RES63_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR11_NVIC_RES63_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR11_NVIC_RES63_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR12 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR12            (((IPR12_TypeDef*)(NVIC_BASE+NVIC_IPR12_OFFSET)))
#define NVIC_IPR12_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR12_OFFSET)))

//--------
#define NVIC_IPR12_R_NVIC_RES64_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR12_R_NVIC_RES64_BIT       (5)
#define NVIC_IPR12_R_NVIC_RES64_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_RES64_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR12_R_NVIC_RES64_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR12_R_NVIC_RES64_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR12_R_NVIC_RES64_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR12_R_NVIC_RES64_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR12_R_NVIC_RES64_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR12_R_NVIC_RES64_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR12_NVIC_RES64_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_RES64_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_RES64_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_RES64_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_RES64_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_RES64_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_RES64_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_RES64_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_RES64_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_RES65_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR12_R_NVIC_RES65_BIT   (13)
#define NVIC_IPR12_R_NVIC_RES65_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_RES65_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR12_R_NVIC_RES65_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR12_R_NVIC_RES65_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR12_R_NVIC_RES65_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR12_R_NVIC_RES65_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR12_R_NVIC_RES65_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR12_R_NVIC_RES65_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR12_NVIC_RES65_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_RES65_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_RES65_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_RES65_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_RES65_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_RES65_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_RES65_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_RES65_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_RES65_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_RES66_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR12_R_NVIC_RES66_BIT    (21)
#define NVIC_IPR12_R_NVIC_RES66_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_RES66_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR12_R_NVIC_RES66_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR12_R_NVIC_RES66_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR12_R_NVIC_RES66_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR12_R_NVIC_RES66_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR12_R_NVIC_RES66_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR12_R_NVIC_RES66_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR12_NVIC_RES66_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_RES66_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_RES66_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_RES66_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_RES66_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_RES66_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_RES66_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_RES66_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_RES66_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR12_R_NVIC_RES67_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR12_R_NVIC_RES67_BIT    (29)
#define NVIC_IPR12_R_NVIC_RES67_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR12_R_NVIC_RES67_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR12_R_NVIC_RES67_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR12_R_NVIC_RES67_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR12_R_NVIC_RES67_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR12_R_NVIC_RES67_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR12_R_NVIC_RES67_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR12_R_NVIC_RES67_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR12_NVIC_RES67_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR12_NVIC_RES67_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR12_NVIC_RES67_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR12_NVIC_RES67_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR12_NVIC_RES67_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR12_NVIC_RES67_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR12_NVIC_RES67_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR12_NVIC_RES67_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR12_NVIC_RES67_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR13 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR13            (((IPR13_TypeDef*)(NVIC_BASE+NVIC_IPR13_OFFSET)))
#define NVIC_IPR13_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR13_OFFSET)))

//--------
#define NVIC_IPR13_R_NVIC_RES68_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR13_R_NVIC_RES68_BIT       (5)
#define NVIC_IPR13_R_NVIC_RES68_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_RES68_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR13_R_NVIC_RES68_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR13_R_NVIC_RES68_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR13_R_NVIC_RES68_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR13_R_NVIC_RES68_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR13_R_NVIC_RES68_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR13_R_NVIC_RES68_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR13_NVIC_RES68_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_RES68_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_RES68_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_RES68_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_RES68_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_RES68_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_RES68_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_RES68_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_RES68_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_RES69_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR13_R_NVIC_RES69_BIT   (13)
#define NVIC_IPR13_R_NVIC_RES69_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_RES69_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR13_R_NVIC_RES69_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR13_R_NVIC_RES69_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR13_R_NVIC_RES69_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR13_R_NVIC_RES69_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR13_R_NVIC_RES69_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR13_R_NVIC_RES69_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR13_NVIC_RES69_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_RES69_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_RES69_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_RES69_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_RES69_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_RES69_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_RES69_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_RES69_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_RES69_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_RES70_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR13_R_NVIC_RES70_BIT    (21)
#define NVIC_IPR13_R_NVIC_RES70_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_RES70_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR13_R_NVIC_RES70_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR13_R_NVIC_RES70_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR13_R_NVIC_RES70_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR13_R_NVIC_RES70_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR13_R_NVIC_RES70_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR13_R_NVIC_RES70_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR13_NVIC_RES70_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_RES70_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_RES70_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_RES70_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_RES70_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_RES70_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_RES70_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_RES70_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_RES70_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR13_R_NVIC_RES71_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR13_R_NVIC_RES71_BIT    (29)
#define NVIC_IPR13_R_NVIC_RES71_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR13_R_NVIC_RES71_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR13_R_NVIC_RES71_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR13_R_NVIC_RES71_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR13_R_NVIC_RES71_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR13_R_NVIC_RES71_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR13_R_NVIC_RES71_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR13_R_NVIC_RES71_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR13_NVIC_RES71_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR13_NVIC_RES71_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR13_NVIC_RES71_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR13_NVIC_RES71_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR13_NVIC_RES71_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR13_NVIC_RES71_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR13_NVIC_RES71_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR13_NVIC_RES71_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR13_NVIC_RES71_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR14 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR14            (((IPR14_TypeDef*)(NVIC_BASE+NVIC_IPR14_OFFSET)))
#define NVIC_IPR14_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR14_OFFSET)))

//--------
#define NVIC_IPR14_R_NVIC_RES72_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR14_R_NVIC_RES72_BIT       (5)
#define NVIC_IPR14_R_NVIC_RES72_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_RES72_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR14_R_NVIC_RES72_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR14_R_NVIC_RES72_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR14_R_NVIC_RES72_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR14_R_NVIC_RES72_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR14_R_NVIC_RES72_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR14_R_NVIC_RES72_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR14_NVIC_RES72_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_RES72_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_RES72_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_RES72_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_RES72_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_RES72_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_RES72_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_RES72_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_RES72_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_RES73_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR14_R_NVIC_RES73_BIT   (13)
#define NVIC_IPR14_R_NVIC_RES73_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_RES73_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR14_R_NVIC_RES73_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR14_R_NVIC_RES73_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR14_R_NVIC_RES73_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR14_R_NVIC_RES73_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR14_R_NVIC_RES73_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR14_R_NVIC_RES73_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR14_NVIC_RES73_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_RES73_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_RES73_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_RES73_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_RES73_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_RES73_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_RES73_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_RES73_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_RES73_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_RES74_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR14_R_NVIC_RES74_BIT    (21)
#define NVIC_IPR14_R_NVIC_RES74_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_RES74_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR14_R_NVIC_RES74_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR14_R_NVIC_RES74_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR14_R_NVIC_RES74_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR14_R_NVIC_RES74_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR14_R_NVIC_RES74_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR14_R_NVIC_RES74_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR14_NVIC_RES74_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_RES74_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_RES74_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_RES74_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_RES74_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_RES74_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_RES74_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_RES74_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_RES74_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR14_R_NVIC_RES75_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR14_R_NVIC_RES75_BIT    (29)
#define NVIC_IPR14_R_NVIC_RES75_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR14_R_NVIC_RES75_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR14_R_NVIC_RES75_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR14_R_NVIC_RES75_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR14_R_NVIC_RES75_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR14_R_NVIC_RES75_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR14_R_NVIC_RES75_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR14_R_NVIC_RES75_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR14_NVIC_RES75_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR14_NVIC_RES75_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR14_NVIC_RES75_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR14_NVIC_RES75_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR14_NVIC_RES75_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR14_NVIC_RES75_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR14_NVIC_RES75_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR14_NVIC_RES75_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR14_NVIC_RES75_IP7      ((uint32_t)0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// IPR15 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_IPR15            (((IPR15_TypeDef*)(NVIC_BASE+NVIC_IPR15_OFFSET)))
#define NVIC_IPR15_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR15_OFFSET)))

//--------
#define NVIC_IPR15_R_NVIC_RES76_MASK      ((uint32_t)0x000000E0)
#define NVIC_IPR15_R_NVIC_RES76_BIT       (5)
#define NVIC_IPR15_R_NVIC_RES76_IP0       ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_RES76_IP1       ((uint32_t)0x00000020)
#define NVIC_IPR15_R_NVIC_RES76_IP2       ((uint32_t)0x00000040)
#define NVIC_IPR15_R_NVIC_RES76_IP3       ((uint32_t)0x00000060)
#define NVIC_IPR15_R_NVIC_RES76_IP4       ((uint32_t)0x00000080)
#define NVIC_IPR15_R_NVIC_RES76_IP5       ((uint32_t)0x000000A0)
#define NVIC_IPR15_R_NVIC_RES76_IP6       ((uint32_t)0x000000C0)
#define NVIC_IPR15_R_NVIC_RES76_IP7       ((uint32_t)0x000000E0)

#define NVIC_IPR15_NVIC_RES76_MASK        ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_RES76_IP0         ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_RES76_IP1         ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_RES76_IP2         ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_RES76_IP3         ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_RES76_IP4         ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_RES76_IP5         ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_RES76_IP6         ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_RES76_IP7         ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_RES77_MASK  ((uint32_t)0x0000E000)
#define NVIC_IPR15_R_NVIC_RES77_BIT   (13)
#define NVIC_IPR15_R_NVIC_RES77_IP0   ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_RES77_IP1   ((uint32_t)0x00002000)
#define NVIC_IPR15_R_NVIC_RES77_IP2   ((uint32_t)0x00004000)
#define NVIC_IPR15_R_NVIC_RES77_IP3   ((uint32_t)0x00006000)
#define NVIC_IPR15_R_NVIC_RES77_IP4   ((uint32_t)0x00008000)
#define NVIC_IPR15_R_NVIC_RES77_IP5   ((uint32_t)0x0000A000)
#define NVIC_IPR15_R_NVIC_RES77_IP6   ((uint32_t)0x0000C000)
#define NVIC_IPR15_R_NVIC_RES77_IP7   ((uint32_t)0x0000E000)

#define NVIC_IPR15_NVIC_RES77_MASK    ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_RES77_IP0     ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_RES77_IP1     ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_RES77_IP2     ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_RES77_IP3     ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_RES77_IP4     ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_RES77_IP5     ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_RES77_IP6     ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_RES77_IP7     ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_RES78_MASK   ((uint32_t)0x00E00000)
#define NVIC_IPR15_R_NVIC_RES78_BIT    (21)
#define NVIC_IPR15_R_NVIC_RES78_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_RES78_IP1    ((uint32_t)0x00200000)
#define NVIC_IPR15_R_NVIC_RES78_IP2    ((uint32_t)0x00400000)
#define NVIC_IPR15_R_NVIC_RES78_IP3    ((uint32_t)0x00600000)
#define NVIC_IPR15_R_NVIC_RES78_IP4    ((uint32_t)0x00800000)
#define NVIC_IPR15_R_NVIC_RES78_IP5    ((uint32_t)0x00A00000)
#define NVIC_IPR15_R_NVIC_RES78_IP6    ((uint32_t)0x00C00000)
#define NVIC_IPR15_R_NVIC_RES78_IP7    ((uint32_t)0x00E00000)

#define NVIC_IPR15_NVIC_RES78_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_RES78_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_RES78_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_RES78_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_RES78_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_RES78_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_RES78_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_RES78_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_RES78_IP7      ((uint32_t)0x00000007)
//--------

//--------
#define NVIC_IPR15_R_NVIC_RES79_MASK   ((uint32_t)0xE0000000)
#define NVIC_IPR15_R_NVIC_RES79_BIT    (29)
#define NVIC_IPR15_R_NVIC_RES79_IP0    ((uint32_t)0x00000000)
#define NVIC_IPR15_R_NVIC_RES79_IP1    ((uint32_t)0x20000000)
#define NVIC_IPR15_R_NVIC_RES79_IP2    ((uint32_t)0x40000000)
#define NVIC_IPR15_R_NVIC_RES79_IP3    ((uint32_t)0x60000000)
#define NVIC_IPR15_R_NVIC_RES79_IP4    ((uint32_t)0x80000000)
#define NVIC_IPR15_R_NVIC_RES79_IP5    ((uint32_t)0xA0000000)
#define NVIC_IPR15_R_NVIC_RES79_IP6    ((uint32_t)0xC0000000)
#define NVIC_IPR15_R_NVIC_RES79_IP7    ((uint32_t)0xE0000000)

#define NVIC_IPR15_NVIC_RES79_MASK     ((uint32_t)0x00000007)
#define NVIC_IPR15_NVIC_RES79_IP0      ((uint32_t)0x00000000)
#define NVIC_IPR15_NVIC_RES79_IP1      ((uint32_t)0x00000001)
#define NVIC_IPR15_NVIC_RES79_IP2      ((uint32_t)0x00000002)
#define NVIC_IPR15_NVIC_RES79_IP3      ((uint32_t)0x00000003)
#define NVIC_IPR15_NVIC_RES79_IP4      ((uint32_t)0x00000004)
#define NVIC_IPR15_NVIC_RES79_IP5      ((uint32_t)0x00000005)
#define NVIC_IPR15_NVIC_RES79_IP6      ((uint32_t)0x00000006)
#define NVIC_IPR15_NVIC_RES79_IP7      ((uint32_t)0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// STIR ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_STIR            (((STIR_TypeDef*)(NVIC_BASE+NVIC_STIR_OFFSET)))
#define NVIC_STIR_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_STIR_OFFSET)))


//--------
#define NVIC_STIR_R_INTID_MASK      ((uint32_t)0x000000FF)
#define NVIC_STIR_R_INTID_BIT       (0)
#define NVIC_STIR_R_INTID_PSS      ((uint32_t)0x00000000)
#define NVIC_STIR_R_INTID_CS      ((uint32_t)0x00000001)
#define NVIC_STIR_R_INTID_PCM      ((uint32_t)0x00000002)
#define NVIC_STIR_R_INTID_WDT_A      ((uint32_t)0x00000003)
#define NVIC_STIR_R_INTID_FPU_INT      ((uint32_t)0x00000004)
#define NVIC_STIR_R_INTID_FLCTL      ((uint32_t)0x00000005)
#define NVIC_STIR_R_INTID_COMP_E0      ((uint32_t)0x00000006)
#define NVIC_STIR_R_INTID_COMP_E1       ((uint32_t)0x00000007)
#define NVIC_STIR_R_INTID_Timer_A0_CC0       ((uint32_t)0x00000008)
#define NVIC_STIR_R_INTID_Timer_A0   ((uint32_t)0x00000009)
#define NVIC_STIR_R_INTID_Timer_A1_CC0    ((uint32_t)0x0000000A)
#define NVIC_STIR_R_INTID_Timer_A1    ((uint32_t)0x0000000B)
#define NVIC_STIR_R_INTID_Timer_A2_CC0    ((uint32_t)0x0000000C)
#define NVIC_STIR_R_INTID_Timer_A2       ((uint32_t)0x0000000D)
#define NVIC_STIR_R_INTID_Timer_A3_CC0   ((uint32_t)0x0000000E)
#define NVIC_STIR_R_INTID_Timer_A3   ((uint32_t)0x0000000F)
#define NVIC_STIR_R_INTID_eUSCI_A0   ((uint32_t)0x00000010)
#define NVIC_STIR_R_INTID_eUSCI_A1   ((uint32_t)0x00000011)
#define NVIC_STIR_R_INTID_eUSCI_A2      ((uint32_t)0x00000012)
#define NVIC_STIR_R_INTID_eUSCI_A3    ((uint32_t)0x00000013)
#define NVIC_STIR_R_INTID_eUSCI_B0    ((uint32_t)0x00000014)
#define NVIC_STIR_R_INTID_eUSCI_B1    ((uint32_t)0x00000015)
#define NVIC_STIR_R_INTID_eUSCI_B2    ((uint32_t)0x00000016)
#define NVIC_STIR_R_INTID_eUSCI_B3    ((uint32_t)0x00000017)
#define NVIC_STIR_R_INTID_ADC    ((uint32_t)0x00000018)
#define NVIC_STIR_R_INTID_Timer32_INT1     ((uint32_t)0x00000019)
#define NVIC_STIR_R_INTID_Timer32_INT2     ((uint32_t)0x0000001A)
#define NVIC_STIR_R_INTID_Timer32_INTC      ((uint32_t)0x0000001B)
#define NVIC_STIR_R_INTID_AES256     ((uint32_t)0x0000001C)
#define NVIC_STIR_R_INTID_RTC_C      ((uint32_t)0x0000001D)
#define NVIC_STIR_R_INTID_DMA_ERR      ((uint32_t)0x0000001E)
#define NVIC_STIR_R_INTID_DMA_INT3      ((uint32_t)0x0000001F)
#define NVIC_STIR_R_INTID_DMA_INT2      ((uint32_t)0x00000020)
#define NVIC_STIR_R_INTID_DMA_INT1      ((uint32_t)0x00000021)
#define NVIC_STIR_R_INTID_DMA_INT0       ((uint32_t)0x00000022)
#define NVIC_STIR_R_INTID_PORT1    ((uint32_t)0x00000023)
#define NVIC_STIR_R_INTID_PORT2    ((uint32_t)0x00000024)
#define NVIC_STIR_R_INTID_PORT3       ((uint32_t)0x00000025)
#define NVIC_STIR_R_INTID_PORT4       ((uint32_t)0x00000026)
#define NVIC_STIR_R_INTID_PORT5       ((uint32_t)0x00000027)
#define NVIC_STIR_R_INTID_PORT6       ((uint32_t)0x00000028)
#define NVIC_STIR_R_INTID_RES57      ((uint32_t)0x00000029)
#define NVIC_STIR_R_INTID_RES58      ((uint32_t)0x0000002A)
#define NVIC_STIR_R_INTID_RES59        ((uint32_t)0x0000002B)
#define NVIC_STIR_R_INTID_RES60        ((uint32_t)0x0000002C)
#define NVIC_STIR_R_INTID_RES61   ((uint32_t)0x0000002D)
#define NVIC_STIR_R_INTID_RES62   ((uint32_t)0x0000002E)
#define NVIC_STIR_R_INTID_RES63  ((uint32_t)0x0000002F)
#define NVIC_STIR_R_INTID_RES64   ((uint32_t)0x00000030)
#define NVIC_STIR_R_INTID_RES65   ((uint32_t)0x00000031)
#define NVIC_STIR_R_INTID_RES66   ((uint32_t)0x00000032)
#define NVIC_STIR_R_INTID_RES67   ((uint32_t)0x00000033)
#define NVIC_STIR_R_INTID_RES68      ((uint32_t)0x00000034)
#define NVIC_STIR_R_INTID_RES69      ((uint32_t)0x00000035)
#define NVIC_STIR_R_INTID_RES70      ((uint32_t)0x00000036)
#define NVIC_STIR_R_INTID_RES71      ((uint32_t)0x00000037)
#define NVIC_STIR_R_INTID_RES72      ((uint32_t)0x00000038)
#define NVIC_STIR_R_INTID_RES73       ((uint32_t)0x00000039)
#define NVIC_STIR_R_INTID_RES74       ((uint32_t)0x0000003A)
#define NVIC_STIR_R_INTID_RES75      ((uint32_t)0x0000003B)
#define NVIC_STIR_R_INTID_RES76      ((uint32_t)0x0000003C)
#define NVIC_STIR_R_INTID_RES77      ((uint32_t)0x0000003D)
#define NVIC_STIR_R_INTID_RES78      ((uint32_t)0x0000003E)
#define NVIC_STIR_R_INTID_RES79      ((uint32_t)0x0000003F)

#define NVIC_STIR_INTID_PSS     ((uint32_t)0x00000000)
#define NVIC_STIR_INTID_CS	    ((uint32_t)0x00000001)
#define NVIC_STIR_INTID_PCM	    ((uint32_t)0x00000002)
#define NVIC_STIR_INTID_WDT_A     ((uint32_t)0x00000003)
#define NVIC_STIR_INTID_FPU_INT     ((uint32_t)0x00000004)
#define NVIC_STIR_INTID_FLCTL     ((uint32_t)0x00000005)
#define NVIC_STIR_INTID_COMP_E0     ((uint32_t)0x00000006)
#define NVIC_STIR_INTID_COMP_E1      ((uint32_t)0x00000007)
#define NVIC_STIR_INTID_Timer_A0_CC0      ((uint32_t)0x00000008)
#define NVIC_STIR_INTID_Timer_A0  ((uint32_t)0x00000009)
#define NVIC_STIR_INTID_Timer_A1_CC0   ((uint32_t)0x0000000A)
#define NVIC_STIR_INTID_Timer_A1   ((uint32_t)0x0000000B)
#define NVIC_STIR_INTID_Timer_A2_CC0   ((uint32_t)0x0000000C)
#define NVIC_STIR_INTID_Timer_A2      ((uint32_t)0x0000000D)
#define NVIC_STIR_INTID_Timer_A3_CC0  ((uint32_t)0x0000000E)
#define NVIC_STIR_INTID_Timer_A3  ((uint32_t)0x0000000F)
#define NVIC_STIR_INTID_eUSCI_A0  ((uint32_t)0x00000010)
#define NVIC_STIR_INTID_eUSCI_A1  ((uint32_t)0x00000011)
#define NVIC_STIR_INTID_eUSCI_A2     ((uint32_t)0x00000012)
#define NVIC_STIR_INTID_eUSCI_A3   ((uint32_t)0x00000013)
#define NVIC_STIR_INTID_eUSCI_B0   ((uint32_t)0x00000014)
#define NVIC_STIR_INTID_eUSCI_B1   ((uint32_t)0x00000015)
#define NVIC_STIR_INTID_eUSCI_B2   ((uint32_t)0x00000016)
#define NVIC_STIR_INTID_eUSCI_B3   ((uint32_t)0x00000017)
#define NVIC_STIR_INTID_ADC   ((uint32_t)0x00000018)
#define NVIC_STIR_INTID_Timer32_INT1    ((uint32_t)0x00000019)
#define NVIC_STIR_INTID_Timer32_INT2	((uint32_t)0x0000001A)
#define NVIC_STIR_INTID_Timer32_INTC     ((uint32_t)0x0000001B)
#define NVIC_STIR_INTID_AES256    ((uint32_t)0x0000001C)
#define NVIC_STIR_INTID_RTC_C	    ((uint32_t)0x0000001D)
#define NVIC_STIR_INTID_DMA_ERR     ((uint32_t)0x0000001E)
#define NVIC_STIR_INTID_DMA_INT3     ((uint32_t)0x0000001F)
#define NVIC_STIR_INTID_DMA_INT2	    ((uint32_t)0x00000020)
#define NVIC_STIR_INTID_DMA_INT1	    ((uint32_t)0x00000021)
#define NVIC_STIR_INTID_DMA_INT0	    ((uint32_t)0x00000022)
#define NVIC_STIR_INTID_PORT1   ((uint32_t)0x00000023)
#define NVIC_STIR_INTID_PORT2   ((uint32_t)0x00000024)
#define NVIC_STIR_INTID_PORT3      ((uint32_t)0x00000025)
#define NVIC_STIR_INTID_PORT4      ((uint32_t)0x00000026)
#define NVIC_STIR_INTID_PORT5      ((uint32_t)0x00000027)
#define NVIC_STIR_INTID_PORT6	    ((uint32_t)0x00000028)
#define NVIC_STIR_INTID_RES57	    ((uint32_t)0x00000029)
#define NVIC_STIR_INTID_RES58	    ((uint32_t)0x0000002A)
#define NVIC_STIR_INTID_RES59		((uint32_t)0x0000002B)
#define NVIC_STIR_INTID_RES60	    ((uint32_t)0x0000002C)
#define NVIC_STIR_INTID_RES61	((uint32_t)0x0000002D)
#define NVIC_STIR_INTID_RES62  ((uint32_t)0x0000002E)
#define NVIC_STIR_INTID_RES63 ((uint32_t)0x0000002F)
#define NVIC_STIR_INTID_RES64  ((uint32_t)0x00000030)
#define NVIC_STIR_INTID_RES65  ((uint32_t)0x00000031)
#define NVIC_STIR_INTID_RES66  ((uint32_t)0x00000032)
#define NVIC_STIR_INTID_RES67  ((uint32_t)0x00000033)
#define NVIC_STIR_INTID_RES68     ((uint32_t)0x00000034)
#define NVIC_STIR_INTID_RES69	    ((uint32_t)0x00000035)
#define NVIC_STIR_INTID_RES70	    ((uint32_t)0x00000036)
#define NVIC_STIR_INTID_RES71	    ((uint32_t)0x00000037)
#define NVIC_STIR_INTID_RES72	    ((uint32_t)0x00000038)
#define NVIC_STIR_INTID_RES73	    ((uint32_t)0x00000039)
#define NVIC_STIR_INTID_RES74	    ((uint32_t)0x0000003A)
#define NVIC_STIR_INTID_RES75	    ((uint32_t)0x0000003B)
#define NVIC_STIR_INTID_RES76	    ((uint32_t)0x0000003C)
#define NVIC_STIR_INTID_RES77	    ((uint32_t)0x0000003D)
#define NVIC_STIR_INTID_RES78	    ((uint32_t)0x0000003E)
#define NVIC_STIR_INTID_RES79	    ((uint32_t)0x0000003F)
//---------------
typedef enum
{
    NVIC_enOK =0,
    NVIC_enERROR=1
}NVIC_nSTATUS;
typedef enum
{
    NVIC_enENABLE =0,
    NVIC_enDISABLE=1
}NVIC_nENABLE;

typedef enum
{
    NVIC_enPENDING =0,
    NVIC_enNOPENDING=1
}NVIC_nPENDING;
typedef enum
{
    NVIC_enACTIVE =0,
    NVIC_enNOACTIVE=1
}NVIC_nACTIVE;


typedef enum
{
    NVIC_enPRI0=0,
    NVIC_enPRI1=1,
    NVIC_enPRI2=2,
    NVIC_enPRI3=3,
    NVIC_enPRI4=4,
    NVIC_enPRI5=5,
    NVIC_enPRI6=6,
    NVIC_enPRI7=7,
    NVIC_enDEFAULT=0xFF,
}NVIC_nPRIORITY;
typedef enum
{
     NVIC_enSTIR_PSS      =(0x00000000),
     NVIC_enSTIR_CS      =(0x00000001),
     NVIC_enSTIR_PCM      =(0x00000002),
     NVIC_enSTIR_WDT_A      =(0x00000003),
     NVIC_enSTIR_FPU_INT      =(0x00000004),
     NVIC_enSTIR_FLCTL      =(0x00000005),
     NVIC_enSTIR_COMP_E0      =(0x00000006),
     NVIC_enSTIR_COMP_E1       =(0x00000007),
     NVIC_enSTIR_Timer_A0_CC0       =(0x00000008),
     NVIC_enSTIR_Timer_A0   =(0x00000009),
     NVIC_enSTIR_Timer_A1_CC0    =(0x0000000A),
     NVIC_enSTIR_Timer_A1    =(0x0000000B),
     NVIC_enSTIR_Timer_A2_CC0    =(0x0000000C),
     NVIC_enSTIR_Timer_A2       =(0x0000000D),
     NVIC_enSTIR_Timer_A3_CC0   =(0x0000000E),
     NVIC_enSTIR_Timer_A3   =(0x0000000F),
     NVIC_enSTIR_eUSCI_A0   =(0x00000010),
     NVIC_enSTIR_eUSCI_A1   =(0x00000011),
     NVIC_enSTIR_eUSCI_A2      =(0x00000012),
     NVIC_enSTIR_eUSCI_A3    =(0x00000013),
     NVIC_enSTIR_eUSCI_B0    =(0x00000014),
     NVIC_enSTIR_eUSCI_B1    =(0x00000015),
     NVIC_enSTIR_eUSCI_B2    =(0x00000016),
     NVIC_enSTIR_eUSCI_B3    =(0x00000017),
     NVIC_enSTIR_ADC    =(0x00000018),
     NVIC_enSTIR_Timer32_INT1     =(0x00000019),
     NVIC_enSTIR_Timer32_INT2     =(0x0000001A),
     NVIC_enSTIR_Timer32_INTC      =(0x0000001B),
     NVIC_enSTIR_AES256     =(0x0000001C),
     NVIC_enSTIR_RTC_C      =(0x0000001D),
     NVIC_enSTIR_DMA_ERR      =(0x0000001E),
     NVIC_enSTIR_DMA_INT3      =(0x0000001F),
     NVIC_enSTIR_DMA_INT2      =(0x00000020),
     NVIC_enSTIR_DMA_INT1      =(0x00000021),
     NVIC_enSTIR_DMA_INT0       =(0x00000022),
     NVIC_enSTIR_PORT1    =(0x00000023),
     NVIC_enSTIR_PORT2    =(0x00000024),
     NVIC_enSTIR_PORT3       =(0x00000025),
     NVIC_enSTIR_PORT4       =(0x00000026),
     NVIC_enSTIR_PORT5       =(0x00000027),
     NVIC_enSTIR_PORT6       =(0x00000028),
     NVIC_enSTIR_RES57      =(0x00000029),
     NVIC_enSTIR_RES58      =(0x0000002A),
     NVIC_enSTIR_RES59        =(0x0000002B),
     NVIC_enSTIR_RES60        =(0x0000002C),
     NVIC_enSTIR_RES61   =(0x0000002D),
     NVIC_enSTIR_RES62   =(0x0000002E),
     NVIC_enSTIR_RES63  =(0x0000002F),
     NVIC_enSTIR_RES64   =(0x00000030),
     NVIC_enSTIR_RES65   =(0x00000031),
     NVIC_enSTIR_RES66   =(0x00000032),
     NVIC_enSTIR_RES67   =(0x00000033),
     NVIC_enSTIR_RES68      =(0x00000034),
     NVIC_enSTIR_RES69      =(0x00000035),
     NVIC_enSTIR_RES70      =(0x00000036),
     NVIC_enSTIR_RES71      =(0x00000037),
     NVIC_enSTIR_RES72      =(0x00000038),
     NVIC_enSTIR_RES73       =(0x00000039),
     NVIC_enSTIR_RES74       =(0x0000003A),
     NVIC_enSTIR_RES75      =(0x0000003B),
     NVIC_enSTIR_RES76      =(0x0000003C),
     NVIC_enSTIR_RES77      =(0x0000003D),
     NVIC_enSTIR_RES78      =(0x0000003E),
     NVIC_enSTIR_RES79      =(0x0000003F),
}NVIC_nSTIR;

typedef enum
{/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
      ThreadMode_IRQn             = -16,
      Reset_IRQn                 = -15,
      NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
      HardFault_IRQn              = -13,
      MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
      BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
      UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
      SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
      DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
      PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
      SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  TM4C specific Interrupt Numbers **********************************************************************/
      PSS_IRQn                  = 0,
      CS_IRQn                   = 1,
      PCM_IRQn                  = 2,
      WDT_A_IRQn                = 3,
      FPU_INT_IRQn              = 4,
      FLCTL_IRQn                = 5,
      COMP_E0_IRQn              = 6,
      COMP_E1_IRQn              = 7,
      Timer_A0_CC0_IRQn         = 8,
      Timer_A0_IRQn             = 9,
      Timer_A1_CC0_IRQn         = 10,
      Timer_A1_IRQn             = 11,
      Timer_A2_CC0_IRQn         = 12,
      Timer_A2_IRQn             = 13,
      Timer_A3_CC0_IRQn         = 14,
      Timer_A3_IRQn             = 15,
      eUSCI_A0_IRQn             = 16,
      eUSCI_A1_IRQn             = 17,
      eUSCI_A2_IRQn             = 18,
      eUSCI_A3_IRQn             = 19,
      eUSCI_B0_IRQn             = 20,
      eUSCI_B1_IRQn             = 21,
      eUSCI_B2_IRQn             = 22,
      eUSCI_B3_IRQn             = 23,
      ADC_IRQn                  = 24,
      Timer32_INT1_IRQn         = 25,
      Timer32_INT2_IRQn         = 26,
      Timer32_INTC_IRQn         = 27,
      AES256_IRQn               = 28,
      RTC_C_IRQn                = 29,
      DMA_ERR_IRQn              = 30,
      DMA_INT3_IRQn             = 31,
      DMA_INT2_IRQn             = 32,
      DMA_INT1_IRQn             = 33,
      DMA_INT0_IRQn             = 34,
      PORT1_IRQn                = 35,
      PORT2_IRQn                = 36,
      PORT3_IRQn                = 37,
      PORT4_IRQn                = 38,
      PORT5_IRQn                = 39,
      PORT6_IRQn                = 40,
      RES57_IRQn                = 41,
      RES58_IRQn                = 42,
      RES59_IRQn                = 43,
      RES60_IRQn                = 44,
      RES61_IRQn                = 45,
      RES62_IRQn                = 46,
      RES63_IRQn                = 47,
      RES64_IRQn                = 48,
      RES65_IRQn                = 49,
      RES66_IRQn                = 50,
      RES67_IRQn                = 51,
      RES68_IRQn                = 52,
      RES69_IRQn                = 53,
      RES70_IRQn                = 54,
      RES71_IRQn                = 55,
      RES72_IRQn                = 56,
      RES73_IRQn                = 57,
      RES74_IRQn                = 58,
      RES75_IRQn                = 59,
      RES76_IRQn                = 60,
      RES77_IRQn                = 61,
      RES78_IRQn                = 62,
      RES79_IRQn                = 63,
} IRQn_Type;

NVIC_nSTATUS    NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority);
NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ);

NVIC_nENABLE    NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority);
NVIC_nSTATUS    NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ);

NVIC_nPENDING   NVIC__enGetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enClearPendingIRQ(NVIC_nSTIR enIRQ);

NVIC_nACTIVE    NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enTriggerIRQ(NVIC_nSTIR enIRQ);




#endif /* NVIC_H_ */
