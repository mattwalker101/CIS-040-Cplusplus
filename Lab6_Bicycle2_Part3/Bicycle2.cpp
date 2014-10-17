/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: Lab 6 - Bicycle2 Assignment
*
*      Date: 10/16/14
*
*      Purpose: ImplementSelection() fuction, continue function added
*
*
*
*********************************************************************************/

#include "Bicycle2Prototypes.h"
#include "Bicycle2LibIncludes.h"

template <class T>
T DoubleTheSpeed(T number) {
	return (number * 2);
}


int main() {
	// display initial values for variables
	cout << "My Super Bicycle Program\n" << endl;


#if A
	// use overloaded function
	int sp = { 33 };
	cout << "Setting speed to " << sp << "!\n";
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";


	sp = { 44 };
	cout << "Setting speed to " << sp << "!\n";
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

	sp = { 9 };
	cout << "Setting speed to " << sp << "!\n";
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

	sp = { 12 };
	cout << "Setting speed to " << sp << "!\n";
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

	// use "A" as speed value, will convert to ASCII
	sp = { 'A' };
	cout << "Setting speed to letter 'A' or " << sp << "!\n";
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

	// try sending a double type to SetSpeed
	double spdouble = 33.5;
	cout << "Setting speed to double type speed " << spdouble << "!\n";
	SetSpeed(spdouble);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

	// use function DoubleTheSpeed with int and double
	int speedInt = 15;
	double speedDouble = 12.7;

	speedInt = DoubleTheSpeed(speedInt);
	cout << "Current speed from int = " << speedInt << "\n";

	speedDouble = DoubleTheSpeed(speedDouble);
	cout << "Current speed from double = " << speedDouble << "\n\n";

	DefaultSetSpeed();
	cout << "Default current speed = " << GetSpeed() << "\n";

	DefaultSetSpeed(28);
	cout << "Default current speed set to 28 = " << GetSpeed() << "\n\n";

	// use SWAP function to swap two values
	speedInt = { 15 };
	int secondspeedInt = 18;

	cout << "speedInt = " << speedInt << "\n";
	cout << "secondspeedInt = " << secondspeedInt << "\n";
	Swap(speedInt, secondspeedInt);
	cout << "The swapped values are : \n" << "speedInt = " << speedInt
		<< " and secondspeedInt = " << secondspeedInt << "\n\n";

	// call by reference function
	cout << "Distance Travelled..." << "\n";
	DistanceTravelled(5);
	DistanceTravelled(5);

	GetSelectedSpeed();
#endif



	SetSpeed();

	MenuSelection();

/*
	int menuSelection = MenuSelection();
	cout << "Menu Selection is: " << menuSelection;		// for debug

	if (menuSelection != 5)	// not exiting
	{
		bool status = CheckContinue();
		cout << "\nStatus = " << boolalpha << status << "\n\n";
	}
	else
		cout << "\nGoodbye!\n\n";
*/

	while (true) {
		int menuSelection = MenuSelection();

		if (menuSelection != 5) {
			bool status = CheckContinue();

			if (status == true) {
				system("cls");
				continue;
			}
			else
				break;
		}
		else {
			SelectModel();
			break;
		}
	}
	cout << "\nThank you! Goodbye!\n\n";

}
