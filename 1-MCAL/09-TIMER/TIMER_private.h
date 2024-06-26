/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: TIMER				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

typedef struct
{
	u8 timer;
	u8 channel;
}TIM_CH_t;



#define 	TIM2_CH1    0
#define 	TIM2_CH2    1
#define 	TIM2_CH3    2
#define 	TIM2_CH4    3
#define 	TIM3_CH1    4
#define 	TIM3_CH2    5
#define 	TIM3_CH3    6
#define 	TIM3_CH4    7
#define 	TIM1_CH1    8
#define 	TIM1_CH2    9
#define 	TIM1_CH3    10
#define 	TIM1_CH4    11


#define TIM_CHANNEL_OUTPUT			0
#define TIM_CHANNEL_IC_TL1			1
#define TIM_CHANNEL_IC_TL2			2
#define TIM_CHANNEL_IC_TRC			3


#define TIM_RISING_EDGE				0
#define TIM_FALLING_EDGE			1

#define TIMER_MASK					0xFF88
#define TIMER_RESET					0x0064

static TIMER_t * Get_timer( u8 timer) ;
static TIM_CH_t* GET_TIM_CH(u8 Port_Pin);


#endif
