/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: EXTI				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef EXTI_REGISTER_H
#define EXTI_REGISTER_H


//EXTI Registers
typedef struct
{
	volatile u32 IMR;	
	volatile u32 EMR;	
	volatile u32 RTSR;	
	volatile u32 FTSR;	
	volatile u32 SWIER;	
	volatile u32 PR;
}EXTI_t;

//EXTI Base Address
#define EXTI				((volatile EXTI_t*)0x40010400)


#endif
