/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: NVIC				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_


//Encoding of Grouping bits
#define  NVIC_GROUP0	 0b011
#define  NVIC_GROUP1	 0b100
#define  NVIC_GROUP2	 0b101
#define  NVIC_GROUP3	 0b110
#define  NVIC_GROUP4	 0b111


#define VETKEY 		0x05FA0000

#define NVIC_MAX_INTERRUPT	60


#endif
