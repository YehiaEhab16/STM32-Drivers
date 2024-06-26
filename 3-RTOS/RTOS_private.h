/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: RTOS     		************/
/************		Version: 1.00	 		************/
/************		Date: 10-7-2021 		************/
/*******************************************************/
/*******************************************************/


/* Preprocessor file guard */
#ifndef RTOS_PRIVATE_H_
#define RTOS_PRIVATE_H_


typedef struct
{
	u16 RTOS_u16Periodicity;
	u16 RTOS_u16FirstDelay;
	void (*RTOS_pvoid)(void);
	u8 RTOS_u8Priority;
	u8 RTOS_u8TaskState;
}RTOS_t;






#define RTOS_NUM_TASKS	100

#define RTOS_TICKTIME	1
		
static void Scheduler(void);


#endif
