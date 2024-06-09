/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: IWDG				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef IWDG_REGISTER_H_
#define IWDG_REGISTER_H_


typedef struct
{
	volatile u32 KR;	//Key Register
	volatile u32 PR;	//Prescalar Register
	volatile u32 RLR;	//Reload Register
	volatile u32 SR;	//Status Register
}IWDG_t;

#define IWDG					((volatile IWDG_t *)0x40003000)

#define IWDG_SR_PVU				0	//Watchdog prescaler value update
#define IWDG_SR_RVU				1	//Watchdog counter reload value update


#endif
