/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: RTOS     		************/
/************		Version: 1.00	 		************/
/************		Date: 10-7-2021 		************/
/*******************************************************/
/*******************************************************/


/* Preprocessor file guard */
#ifndef RTOS_INTERFACE_H_
#define RTOS_INTERFACE_H_


//RTOS Task States
#define RTOS_READY			0
#define RTOS_SUSPENDED		1


//Scheduler Functions
void RTOS_voidInit(void);

//Tasks Handling Functions
u8 RTOS_u8CreateTask(u8 Copy_u8RTOSpriority ,u16 Copy_u16RTOSPeriodicity ,u16 Copy_u16RTOSFirstDelay ,u8 Copy_u8RTOSTaskState ,void (*Copy_voidRTOSpvoid)(void));
void RTOS_voidResumeTask (u8 Copy_u8RTOSTaskNUM);
void RTOS_voidSuspendTask(u8 Copy_u8RTOSTaskNUM);
void RTOS_voidDeleteTask (u8 Copy_u8RTOSTaskNUM);

#endif
