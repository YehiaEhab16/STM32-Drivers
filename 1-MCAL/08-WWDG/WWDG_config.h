/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: WWDG				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef WWDG_CONFIG_H_
#define WWDG_CONFIG_H_


/*
Prescalar Options:
	-IWDG_DIVIDE_BY_1
	-IWDG_DIVIDE_BY_2	
	-IWDG_DIVIDE_BY_4
	-IWDG_DIVIDE_BY_8
*/
#define WWDG_PRESCALAR_VALUE			WWDG_DIVIDE_BY_1

//Select 0 for no interrupts and 1 if an interrupt is needed before reset
#define WWDG_EARLY_WAKEUP_INTERRUPT		0


#endif
