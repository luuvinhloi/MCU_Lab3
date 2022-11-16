/*
 * fsm_manual.c
 *
 *  Created on: Nov 15, 2022
 *      Author: luuvinhloi
 */

#include "fsm_manual.h"

void turnOnLedRed()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void turnOnLedYellow()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void turnOnLedGreen()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}

void turnOnLedRed1()
{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
}

void turnOnLedYellow1()
{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
}

void turnOnLedGreen1()
{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);
}

void fsm_manual_run()
{
	switch(status1) {
		case MAN_RED:
			//TODO
			turnOnLedRed();

			if(timer1_flag == 1) {
				status1 = AUTO_RED;
				setTimer1(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status1 = MAN_RED;
				setTimer1(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status1 = INCVALUE_RED;
				setTimer1(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status1 = SETVALUE_RED;
				setTimer1(5000);
			}
			break;
		case MAN_GREEN:
			//TODO
			turnOnLedGreen();

			if(timer1_flag == 1) {
				status1 = AUTO_GREEN;
				setTimer1(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status1 = MAN_GREEN;
				setTimer1(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status1 = INCVALUE_GREEN;
				setTimer1(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status1 = SETVALUE_GREEN;
				setTimer1(5000);
			}
			break;
		case MAN_YELLOW:
			turnOnLedYellow();

			if(timer1_flag == 1) {
				status1 = AUTO_YELLOW;
				setTimer1(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status1 = MAN_YELLOW;
				setTimer1(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status1 = INCVALUE_YELLOW;
				setTimer1(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status1 = SETVALUE_YELLOW;
				setTimer1(5000);
			}
			break;

		case INCVALUE_RED:
			//TODO
			turnOnLedRed();
			if(timer1_flag == 1) {
				status1 = AUTO_RED;
				setTimer1(5000);
			}
			break;
		case SETVALUE_RED:
			//TODO
			turnOnLedRed();
			if(timer1_flag == 1) {
				status1 = AUTO_RED;
				setTimer1(5000);
			}
			break;

		case INCVALUE_YELLOW:
			//TODO
			turnOnLedYellow();
			if(timer1_flag == 1) {
				status1 = AUTO_YELLOW;
				setTimer1(5000);
			}
			break;
		case SETVALUE_YELLOW:
			//TODO
			turnOnLedYellow();
			if(timer1_flag == 1) {
				status1 = AUTO_YELLOW;
				setTimer1(5000);
			}
			break;
		case INCVALUE_GREEN:
			//TODO
			turnOnLedGreen();
			if(timer1_flag == 1) {
				status1 = AUTO_GREEN;
				setTimer1(5000);
			}
			break;
		case SETVALUE_GREEN:
			//TODO
			turnOnLedGreen();
			if(timer1_flag == 1) {
				status1 = AUTO_GREEN;
				setTimer1(5000);
			}
			break;
		default:
			break;
	}

	switch(status2) {
		case MAN_RED:
			//TODO
			turnOnLedRed1();

			if(timer2_flag == 1) {
				status2 = AUTO_RED;
				setTimer2(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status2 = MAN_RED;
				setTimer2(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status2 = INCVALUE_RED;
				setTimer2(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status2 = SETVALUE_RED;
				setTimer2(5000);
			}
			break;
		case MAN_GREEN:
			//TODO
			turnOnLedGreen1();

			if(timer2_flag == 1) {
				status2 = AUTO_GREEN;
				setTimer2(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status2 = MAN_GREEN;
				setTimer2(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status2 = INCVALUE_GREEN;
				setTimer2(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status2 = SETVALUE_GREEN;
				setTimer2(5000);
			}
			break;
		case MAN_YELLOW:
			turnOnLedYellow1();

			if(timer2_flag == 1) {
				status2 = AUTO_YELLOW;
				setTimer2(5000);
			}
			//BUTTON 1
			if(isButton1Pressed() == 1) {
				status2 = MAN_YELLOW;
				setTimer2(10000);
			}
			//BUTTON 2: INCREASE VALUE 10s
			if(isButton2Pressed() == 1) {
				status2 = INCVALUE_YELLOW;
				setTimer2(10000);
			}
			//BUTTON 3: SET VALUE 5s
			if(isButton2Pressed() == 1) {
				status2 = SETVALUE_YELLOW;
				setTimer2(5000);
			}
			break;

		case INCVALUE_RED:
			//TODO
			turnOnLedRed();
			if(timer2_flag == 1) {
				status2 = AUTO_RED;
				setTimer2(5000);
			}
			break;
		case SETVALUE_RED:
			//TODO
			turnOnLedRed();
			if(timer2_flag == 1) {
				status2 = AUTO_RED;
				setTimer2(5000);
			}
			break;

		case INCVALUE_YELLOW:
			//TODO
			turnOnLedYellow();
			if(timer2_flag == 1) {
				status2 = AUTO_YELLOW;
				setTimer2(5000);
			}
			break;
		case SETVALUE_YELLOW:
			//TODO
			turnOnLedYellow();
			if(timer2_flag == 1) {
				status2 = AUTO_YELLOW;
				setTimer2(5000);
			}
			break;
		case INCVALUE_GREEN:
			//TODO
			turnOnLedGreen();
			if(timer2_flag == 1) {
				status2 = AUTO_GREEN;
				setTimer2(5000);
			}
			break;
		case SETVALUE_GREEN:
			//TODO
			turnOnLedGreen();
			if(timer2_flag == 1) {
				status2 = AUTO_GREEN;
				setTimer2(5000);
			}
			break;
		default:
			break;
	}
}
