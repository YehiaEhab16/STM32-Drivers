/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: ADC				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*You can choose frome 16 channel 0-15*/
#define ADC_SQ1				CHANNEL0
#define ADC_SQ2				NOCHANNEL
#define ADC_SQ3				NOCHANNEL
#define ADC_SQ4				NOCHANNEL
#define ADC_SQ5				NOCHANNEL
#define ADC_SQ6				NOCHANNEL
#define ADC_SQ7				NOCHANNEL
#define ADC_SQ8				NOCHANNEL
#define ADC_SQ9				NOCHANNEL
#define ADC_SQ10			NOCHANNEL
#define ADC_SQ11			NOCHANNEL
#define ADC_SQ12			NOCHANNEL
#define ADC_SQ13			NOCHANNEL
#define ADC_SQ14			NOCHANNEL
#define ADC_SQ15			NOCHANNEL
#define ADC_SQ16			NOCHANNEL

/*Regular channel sequence length */
#define SQ_L               1




/*Conversion mode
-CONT
-Single
-DISCON
*/
#define ADC_CONV_MODE       Single


/*Alignment of data after conversion
-Left
-Right
*/
#define ADC_ALIG_STATE      Right
/*  JDR1;
	JDR2;
	JDR3;      
	jDR4;*/





#endif
