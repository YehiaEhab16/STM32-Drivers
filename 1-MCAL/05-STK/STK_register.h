/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: STK				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef STK_REGISTER_H_
#define STK_REGISTER_H_
typedef struct 
{
	volatile u32 STK_CTRL 	; 
	volatile u32 STK_LOAD 	;
	volatile u32 STK_VAL 	;
	volatile u32 STK_CALIB	;
	
}STK_TYPE;


#define STK		((volatile STK_TYPE *)(0xE000E010))


#endif
