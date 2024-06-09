/*******************************************************/
/*******************************************************/
/************		Author: Yehia Ehab 		************/
/************		Layer: MCAL	     		************/
/************		SWC: GPIO				************/
/************		Version: 1.00	 		************/
/************		Date: 6-9-2021  		************/
/*******************************************************/
/*******************************************************/

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_


//Pins Configurations
#define PORT_INPUT_ANALOG_MODE         		0000
#define PORT_INPUT_FLOATING            		0100
#define PORT_INPUT_PULL_UP_DOWN        		1000
#define PORT_OUPUT_10MHZ_PUSH_PULL     		0001
#define PORT_OUPUT_10MHZ_OPEN_DRAIN    		0101
#define PORT_OUPUT_10MHZ_AF_PUSH_PULL  		1001
#define PORT_OUPUT_10MHZ_AF_OPEN_DRAIN 		1101
#define PORT_OUPUT_2MMHZ_PUSH_PULL     		0010
#define PORT_OUPUT_2MMHZ_OPEN_DRAIN    		0110
#define PORT_OUPUT_2MMHZ_AF_PUSH_PULL  		1010
#define PORT_OUPUT_2MMHZ_AF_OPEN_DRAIN 		1110
#define PORT_OUPUT_50MHZ_PUSH_PULL     		0011
#define PORT_OUPUT_50MHZ_OPEN_DRAIN    		0111
#define PORT_OUPUT_50MHZ_AF_PUSH_PULL  		1011
#define PORT_OUPUT_50MHZ_AF_OPEN_DRAIN 		1111

//Concatination Functions
#define CONC(b15,b14,b13,b12,b11,b10,b9,b8)								CONC_HELPER(b15,b14,b13,b12,b11,b10,b9,b8)
#define CONC_HELPER(b15,b14,b13,b12,b11,b10,b9,b8) 						0b##b15##b14##b13##b12##b11##b10##b9##b8

#define CONC1(b7,b6,b5,b4,b3,b2,b1,b0)									CONC_HELPER1(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER1(b7,b6,b5,b4,b3,b2,b1,b0)  							0b##b7##b6##b5##b4##b3##b2##b1##b0


#define CONC2(b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0)			CONC_HELPER2(b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER2(b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0)     0b##b15##b14##b13##b12##b11##b10##b9##b8##b7##b6##b5##b4##b3##b2##b1##b0

#define	PORTA_DIR	 CONC(PORTA_PIN15_DIR,PORTA_PIN14_DIR,PORTA_PIN13_DIR,PORTA_PIN12_DIR,PORTA_PIN11_DIR,PORTA_PIN10_DIR,PORTA_PIN9_DIR, PORTA_PIN8_DIR)
#define	PORTA_DIR1	 CONC1(PORTA_PIN7_DIR, PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR,PORTA_PIN2_DIR,PORTA_PIN1_DIR,PORTA_PIN0_DIR)

#define	PORTB_DIR	 CONC(PORTB_PIN15_DIR,PORTB_PIN14_DIR,PORTB_PIN13_DIR,PORTB_PIN12_DIR,PORTB_PIN11_DIR,PORTB_PIN10_DIR,PORTB_PIN9_DIR,PORTB_PIN8_DIR)
#define	PORTB_DIR1	 CONC1(PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR,PORTB_PIN2_DIR,PORTB_PIN1_DIR,PORTB_PIN0_DIR)

#define	PORTC_DIR	 CONC(PORTC_PIN15_DIR,PORTC_PIN14_DIR,PORTC_PIN13_DIR,0000,0000,0000,0000,0000)


#define	PORTA_VAlUE	 CONC2(PORTA_PIN15_INITIAL,PORTA_PIN14_INITIAL,PORTA_PIN13_INITIAL,PORTA_PIN12_INITIAL,PORTA_PIN11_INITIAL,PORTA_PIN10_INITIAL,PORTA_PIN9_INITIAL,PORTA_PIN8_INITIAL,PORTA_PIN7_INITIAL,PORTA_PIN6_INITIAL,PORTA_PIN5_INITIAL,PORTA_PIN4_INITIAL,PORTA_PIN3_INITIAL,PORTA_PIN2_INITIAL,PORTA_PIN1_INITIAL,PORTA_PIN0_INITIAL)
#define	PORTB_VALUE	 CONC2(PORTB_PIN15_INITIAL,PORTB_PIN14_INITIAL,PORTB_PIN13_INITIAL,PORTB_PIN12_INITIAL,PORTB_PIN11_INITIAL,PORTB_PIN10_INITIAL,PORTB_PIN9_INITIAL,PORTB_PIN8_INITIAL,PORTB_PIN7_INITIAL,PORTB_PIN6_INITIAL,PORTB_PIN5_INITIAL,PORTB_PIN4_INITIAL,PORTB_PIN3_INITIAL,PORTB_PIN2_INITIAL,PORTB_PIN1_INITIAL,PORTB_PIN0_INITIAL)
#define	PORTC_VALUE	 CONC2(PORTC_PIN15_INITIAL,PORTC_PIN14_INITIAL,PORTC_PIN13_INITIAL,0,0,0,0,0,0,0,0,0,0,0,0,0)


#endif