/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: HAL	     		************/
/************		SWC: TMP				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

/* Preprocessor file guard 
   Macros and prototypes   */
#ifndef TMP_INTERFACE_H_
#define TMP_INTERFACE_H_



/**
 * @def   Read Temperature Value
 * @param Temperature Value read from sensor
 * @ret   Error Status
 */
u16 TMP_u16ReadValue(void);


#endif
