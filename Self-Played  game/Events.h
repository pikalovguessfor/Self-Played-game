#pragma once

#include <iostream>
#include <time.h>

int ArrIvoryWeight[3] = { 5 , 10, 18 };

int CheckWeight(short ivory_cut_result) {

	/*
	* Thats function need to handle a weight of ivories, weight has 3 variants:
	* "short", when ivories less than "5";
	* "medium", when ivories less than "18" but more than "5";
	* "long", when ivories more than "18";
	*/

	/*
	* Thats function
	* return 1 if "Short";
	* return 2 if "medium";
	* return 3 if "long";
	*/

	if (ivory_cut_result <= ArrIvoryWeight[0]) {
		return 1;
	}
	else if (ivory_cut_result > ArrIvoryWeight[0] and ivory_cut_result < ArrIvoryWeight[2]) {
		return 2;
	}
	else if (ivory_cut_result >= ArrIvoryWeight[2]) {
		return 3;
	}
	else {
		return CheckWeight(ivory_cut_result);
	}

	return 0;
}

long long IncomePerTurnHandler(long long Income, int ivory_cut_result) {

	int weight = CheckWeight(ivory_cut_result);
	
	Income = Income + (Income * (weight / 2));

	if (weight == 1) {

		Income = Income / 2;

	}


	return Income;
}

long long IncomePlusToMoney(long long Money, long long income) {

	return Money = Money + income;

}

struct PositiveLimits {



};

struct NegativeLimits {



};
