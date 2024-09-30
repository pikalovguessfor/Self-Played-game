#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
#include <Windows.h>

#include "Events.h"

bool NoZerosInsIvoryes(short ArrIvoryesRes[]) {

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