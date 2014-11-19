

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: Grades.cpp
*
*      Date: 11/20/14
*
*      Purpose: create Grades class using private and public functionality
*
*
*
*********************************************************************************/


#include <iostream>
#include <string>
#include "Grades.h"
using namespace std;

int main() {

	/*
	int count = Grades::GetGradeCounter();
	cout << "Count of the grades = " << count << endl;
	*/

	Grades myClass = Grades();
	myClass.ProcessGrades();

	/*
	cout << "Class number of myClass = " << myClass.classNumber << endl;

	Grades::className = 'C';
	Grades::DisplayClassName(myClass);

	string tempName;
	tempName = Grades::InputClassName();
	cout << "New full class name is... " << tempName << endl;
	*/

}
