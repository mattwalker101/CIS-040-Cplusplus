

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: Grades2.cpp
*
*      Date: 11/27/14
*
*      Purpose: implement SelectClass() and use 'struct' as members
*
*
*
*********************************************************************************/


#include <iostream>
#include <string>
#include "Grades2.h"
using namespace std;

int main() {

	Grades myClass = Grades();

	while (true) {
		myClass.SelectClass();
		myClass.DisplayClassInfo();
		bool again = myClass.CheckContinue();
		if (again)
			continue;
		else 
			break;
	}
	cout << "Goodbye!\n";
}
