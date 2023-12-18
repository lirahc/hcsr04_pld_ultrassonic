/*
 * main_HCSR04.c
 *
 *  Created on: out 12, 2020
 *
 *      Author: Suzi Yousif
 *      Instituto Federal de Santa Catarina
 *
 *
 * HCSR04 Ultrassonic Sensor
 * -----------------------------------------
 */

#include "../_core/utils.h"
#include "../_core/hardware.h"
#include "../gpio/gpio.h"
int Read_HCSR04(){
	return INBUS;
}

int main(){
	int buffer = 0;

	while (1){

		SEGMENTS = 0x12;
		delay_(500000);

	}

	return 0;
}
