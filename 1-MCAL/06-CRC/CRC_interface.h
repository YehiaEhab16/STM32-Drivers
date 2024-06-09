/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: CRC				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef CRC_INTERFACE_H_
#define CRC_INTERFACE_H_

/**
 * @def calculate the crc by the hardware
 * @param Copy_u32Data Data you want to calculate the crc
 * @return CRC Value
 */
u32 CRC_u8CalculationHardware(u32 Copy_u32Data);

#endif
