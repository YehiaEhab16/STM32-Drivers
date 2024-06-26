/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: Library     		************/
/************		SWC: MAP				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#include "STD_TYPES.h"
#include "MAPP_interface.h"


s32	MAPP_S32Rang(s32 Copy_s32MinInputRang ,s32 Copy_s32MaxInputRang ,s32 Copy_s32MinOutputRang , s32 Copy_s32MaxOutputRang ,s32 Copy_s32InputValue)
{
	s32 Local_s32OutputValue ;

	Local_s32OutputValue =((Copy_s32InputValue-Copy_s32MinInputRang)*((Copy_s32MaxOutputRang-Copy_s32MinOutputRang)/(Copy_s32MaxInputRang-Copy_s32MinInputRang)))+Copy_s32MinOutputRang;

	return Local_s32OutputValue ;
}
