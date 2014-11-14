

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: Grades.cpp
*
*      Date: 11/13/14
*
*      Purpose:
*
*
*
*********************************************************************************/


#include <iostream>
#include <string>
#include "Grades.h"
using namespace std;

int main() {

	int count = Grades::GetGradeCounter();
	cout << "Count of the grades = " << count << endl;

	Grades myClass;
	cout << "Class number of myClass = " << myClass.classNumber << endl;

	// myClass.className = 'C';
	Grades::DisplayClassName(myClass);

	string tempName;
	tempName = Grades::InputClassName();
	cout << "New full class name is... " << tempName << endl;


}
