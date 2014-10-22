

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: TestShapes.cpp
*
*      Date: 10/21/14
*
*      Purpose: To calculate the area of some shapes
*
*
*
*********************************************************************************/

#include "LibIncludes.h"
#include "Shapes.h"

int main() {

	Shapes shape;
	cout << "\"selection\" = " << static_cast<int>(shape.GetCurrentSelection()) << endl;

//	shape.DisplayMenu();
//	shape.MenuSelection();

	
/*	char menuSelection = shape.MenuSelection();
	cout << "selection in main() = " << menuSelection << endl;

	if (menuSelection != 'X') {
		bool status = shape.CheckContinue();
		cout << "\nstatus = " << boolalpha
			<< status << "\n\n";
	}
	else {
		cout << "\nGoodbye!\n\n";
	}
*/
	
	while (true) {
		char menuSelection = shape.MenuSelection();

		if (menuSelection != 'X') {
			if (shape.CheckContinue()) {
				system("cls");
				continue;
			}
			else {
				cout << "\nGoodbye!\n\n";

				break;
			}
			// cout << "\nstatus = " << boolalpha
			//	<< status << "\n\n";

		}
		else {
			cout << "\nGoodbye!\n\n";
			break;
		}
	}
	
}

