#include "Framework.h"

using namespace std;

class DataActors {
	/*This Struct contains a some data about a actors. Money, Producing ETC...
	* Struct contains any characteristicks and methods to edit a name.
	* 
	*/

public:

	long long _Money = 0;
	long long _Producing = 0;
	long long _Income = 0;

	char Name[6];

	/* Name constructor */

private:

	int FPnameNum = 0;
	int SPnameNum = 0;

	char FirstPartOfName[3];
	const char FirstPartOfNameF[3] = { 'S','C','O' }; const char FirstPartOfNameS[3] = { 'N','O','Q' }; const char FirstPartOfNameT[3] = { 'P','O','S' };

	char SecondPartOfName[3];
	const char SecondPartOfNameF[3] = { 'L', 'T', 'D' }; const char SecondPartOfNameS[3] = { 'N', 'C', 'O' }; const char SecondPartOfNameT[3] = { 'C', 'O', 'N' };

	void GetName() {

		srand(time(0));

		FPnameNum = rand() % 3;
		SPnameNum = rand() % 3;

		if (FPnameNum == 0) {

			for (int i = 0; i < 3; i++) {

				FirstPartOfName[i] = FirstPartOfNameF[i];

			}

		}
		else if (FPnameNum == 1) {

			for (int i = 0; i < 3; i++) {

				FirstPartOfName[i] = FirstPartOfNameS[i];

			}

		}
		else if (FPnameNum == 2) {

			for (int i = 0; i < 3; i++) {

				FirstPartOfName[i] = FirstPartOfNameT[i];

			}
		}

		if (SPnameNum == 0) {

			for (int i = 0; i < 3; i++) {

				SecondPartOfName[i] = SecondPartOfNameF[i];

			}

		}
		else if (SPnameNum == 1) {

			for (int i = 0; i < 3; i++) {

				SecondPartOfName[i] = SecondPartOfNameS[i];

			}

		}
		else if (SPnameNum == 2) {

			for (int i = 0; i < 3; i++) {

				SecondPartOfName[i] = SecondPartOfNameT[i];
			}

		}

		for (int i = 0; i < 3; i++) {

			this->Name[i] = FirstPartOfName[i];

		}
		for (int i = 3; i < 6; i++) {

			this->Name[i] = FirstPartOfName[i];

		}

	}
	/**/

public:

	DataActors(long long money, long long producing, long long income) {

		this->_Money = money;
		this->_Producing = producing;
		this->_Income = income;

		GetName();

	}
};

struct InfoData {

	int Number = 0;
	int* NumberPtr = &Number;

};

int main() {

	srand(time(0));

	DataActors FabricFirst(rand() % 5, rand() % 5, rand() % 5);
	DataActors FabricSecond(rand() % 5, rand() % 5, rand() % 5);
	DataActors FabricThird(rand() % 5, rand() % 5, rand() % 5);
	DataActors FabricFour(rand() % 5, rand() % 5, rand() % 5);

	bool GameStart = true;

	long long Turn = 0;

	short ArrNumbersIvory[4];

	while (GameStart) {
		/* Game Body.Its loop for main game and uses to Create, and edit a Main actor class characteristics
		* 
		*/

		Turn++;

		cout << "Turn - " << Turn << endl << endl;

		short IvoryFirst = rand() % 21;
		short IvorySecond = rand() % 21;
		short IvoryThird = rand() % 21;
		short IvoryFourth = rand() % 21;
		
		/* Proccedure to give array indexes ins array, thats need to avoid a Zero division on next proccedures with (FIELDS) of classes */
		ArrNumbersIvory[0] = IvoryFirst;
		ArrNumbersIvory[1] = IvorySecond;
		ArrNumbersIvory[2] = IvoryThird; 
		ArrNumbersIvory[3] = IvoryFourth;
		/**/

		if (!NoZerosInsIvoryes(ArrNumbersIvory)) {
			continue;
		}
		else if (NoZerosInsIvoryes(ArrNumbersIvory)) {

		}

		//cout << endl << IvoryFirst << endl << IvorySecond << endl << IvoryThird << endl << IvoryFourth << endl;

		FabricFirst._Income = IncomePerTurnHandler(FabricFirst._Income, IvoryFirst);
		FabricFirst._Money = IncomePlusToMoney(FabricFirst._Money, FabricFirst._Income);

		cout << endl << FabricFirst._Income << endl;
		cout << endl << FabricFirst._Money << endl;

		Sleep(1000);
		system("cls");
	}

	return 0;
}