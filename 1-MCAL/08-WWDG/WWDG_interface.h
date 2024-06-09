/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: WWDG				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef WWDG_INTERFACE_H_
#define WWDG_INTERFACE_H_


//Prescalar Configurations
#define WWDG_DIVIDE_BY_1		0
#define WWDG_DIVIDE_BY_2		1
#define WWDG_DIVIDE_BY_4		2
#define WWDG_DIVIDE_BY_8		3

/**
 * @def reset controller
 * @param Copy_u8TimeoutValue Countdown value
 */
void WWDG_voidReset(u8 Copy_u8TimeoutValue);


#endif
