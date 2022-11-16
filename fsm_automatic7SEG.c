/*
 * fsm_automatic7SEG.c
 *
 *  Created on: Nov 16, 2022
 *      Author: luuvinhloi
 */

#ifndef SRC_FSM_AUTOMATIC7SEG_C_
#define SRC_FSM_AUTOMATIC7SEG_C_

#include "fsm_automatic7SEG.h"

void fsm_automatic7SEG_run()
{
	switch(counter3) { //LED 7 DOAN A
		case INIT:
			counter3 = AUTO_LED7_0;
			setTimer3(1000);
			break;
		case AUTO_LED7_0: //LED_RED: ON
			//TODO
			GPIOA->ODR = 0xA4; //LED 7 DOAN A HIEN THI SO 2
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_1;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_1: //LED_RED: ON
			//TODO
			GPIOA->ODR = 0xF9; //LED 7 DOAN A HIEN THI SO 1
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_2;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_2: //LED_RED: ON
			//TODO
			GPIOA->ODR = 0xC0; //LED 7 DOAN A HIEN THI SO 0
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_3;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_3: //LED_RED: ON
			//TODO
			GPIOA->ODR = 0xF9; //LED 7 DOAN A HIEN THI SO 1
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_4;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_4: //LED_RED: ON
			//TODO
			GPIOA->ODR = 0xC0; //LED 7 DOAN A HIEN THI SO 0
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_5;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_5: //LED_GREEN: ON
			//TODO
			GPIOA->ODR = 0x99; //LED 7 DOAN A HIEN THI SO 4
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_6;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_6: //LED_GREEN: ON
			//TODO
			GPIOA->ODR = 0xB0; //LED 7 DOAN A HIEN THI SO 3
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_7;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_7: //LED_GREEN: ON
			//TODO
			GPIOA->ODR = 0xA4; //LED 7 DOAN A HIEN THI SO 2
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_8;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_8: //LED_YELLOW: ON
			//TODO
			GPIOA->ODR = 0xF9; //LED 7 DOAN A HIEN THI SO 1
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_9;
				setTimer3(1000);
			}
			break;
		case AUTO_LED7_9: //LED_YELLOW: ON
			//TODO
			GPIOA->ODR = 0xC0; //LED 7 DOAN A HIEN THI SO 0
			if(timer3_flag == 1) {
				counter3 = AUTO_LED7_0;
				setTimer3(1000);
			}
			break;
		default:
			break;
	}

	switch(counter4) { //LED 7 DOAN B
		case INIT:
			counter4 = AUTO_LED7_0;
			setTimer4(1000);
			break;
		case AUTO_LED7_0: //LED_GREEN1: ON
			//TODO
			GPIOB->ODR = 0x99; //LED 7 DOAN B HIEN THI SO 4
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_1;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_1: //LED_GREEN1: ON
			//TODO
			GPIOB->ODR = 0xB0; //LED 7 DOAN B HIEN THI SO 3
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_2;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_2: //LED_GREEN1: ON
			//TODO
			GPIOB->ODR = 0xA4; //LED 7 DOAN B HIEN THI SO 2
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_3;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_3: //LED_YELLOW1: ON
			//TODO
			GPIOB->ODR = 0xF9; //LED 7 DOAN B HIEN THI SO 1
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_4;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_4: //LED_YELLOW1: ON
			//TODO
			GPIOB->ODR = 0xC0; //LED 7 DOAN B HIEN THI SO 0
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_5;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_5: //LED_RED1: ON
			//TODO
			GPIOB->ODR = 0xA4; //LED 7 DOAN B HIEN THI SO 2
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_6;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_6: //LED_RED1: ON
			//TODO
			GPIOB->ODR = 0xF9; //LED 7 DOAN B HIEN THI SO 1
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_7;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_7: //LED_RED1: ON
			//TODO
			GPIOB->ODR = 0xC0; //LED 7 DOAN B HIEN THI SO 0
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_8;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_8: //LED_RED1: ON
			//TODO
			GPIOB->ODR = 0xF9; //LED 7 DOAN B HIEN THI SO 1
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_9;
				setTimer4(1000);
			}
			break;
		case AUTO_LED7_9: //LED_RED1: ON
			//TODO
			GPIOB->ODR = 0xC0; //LED 7 DOAN B HIEN THI SO 0
			if(timer4_flag == 1) {
				counter4 = AUTO_LED7_0;
				setTimer4(1000);
			}
			break;
		default:
			break;
		}
}

#endif /* SRC_FSM_AUTOMATIC7SEG_C_ */
