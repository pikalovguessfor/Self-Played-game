#pragma once

#include <iostream>

bool NoZerosInsIvoryes(short ArrIvoryesRes[]) {

	/*
	* That function need to check zero`s inside ivories. Thats need for run away zero division
	*/

	short CounterZeros = 0;

	for (int i = 0; i < 4; i++) {

		if (ArrIvoryesRes[i] == 0) {

			CounterZeros++;

		}

	}

	if (CounterZeros <= 0) {

		return true;

	}
	if (CounterZeros > 0) {

		return false;

	}

}
