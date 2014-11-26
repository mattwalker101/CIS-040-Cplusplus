// Grades.cpp
// member definitions
// Author: Matthew Walker



#include <iostream>
#include <string>
#include <iomanip>
#include "Grades2.h"
using namespace std;

// constructor
void Grades::SelectClass() {

	InputClassName();
	GetClassInfo();
};

void Grades::InputClassName() {	// user input for the course name
	string name;

	while (true) {
		cout << "Enter the full class name: ";
		getline(cin, name);

		bool b = CheckIfLegalName(name);

		if (b == true) {
			courseName = name;
			break;
		}
		else {
			cout << "Invalid course name. Try again!\n";
			continue;
		}
	}
};

void Grades::GetClassInfo() {
	string test1, test2, test3, test4, test5, test6;

	while (true) {
		cout << "Enter semester (Spring or Fall): ";
		getline(cin, test1);
		if (test1 == "Spring" || test1 == "Fall") {
			cout << "Valid entry.\n";
			program.semester = test1;
			break;
		}
		else {
			cout << "Invalid entry.\n";
			cin.ignore(50, '\n');
			continue;
		}
	}
	
	while (true) {
		cout << "Enter time (Day or Evening): ";
		getline(cin, test2);
		if (test2 == "Day" || test2 == "Evening") {
			cout << "Valid entry.\n";
			program.time = test2;
			break;
		}
		else {
			cout << "Invalid entry.\n";
			cin.ignore(50, '\n');
			continue;
		}
	}
	
	while (true) {
		try {
			cout << "Enter textbook title: ";
			cin >> test3;
			if (!cin.good()) {		// if problem with input
				cin.clear();
				throw "\nIllegal Input! Try again!\n\n";
			}
			else {
				program.textbook.title = test3;
				break;
			}
		}
		catch (char *exceptionString) {
			cout << exceptionString;
			cin.ignore(50, '\n');
			continue;
		}
	}
	cin.ignore(10, '\n');

	while (true) {
		try {
			cout << "Enter textbook author: ";
			getline(cin, test4);
			if (!cin.good()) {		// if problem with input
				cin.clear();
				throw "\nIllegal Input! Try again!\n\n";
			}
			else {
				program.textbook.author = test4;
				break;
			}
		}
		catch (char *exceptionString) {
			cout << exceptionString;
			cin.ignore(50, '\n');
			continue;
		}
	}
	cin.ignore(10, '\n');
	
	int testYear;
	while (true) {
		cout << "Enter textbook edition (2010, 2012, 2013): ";
		cin >> testYear;
		cin.ignore();
		if (testYear == 2010 || testYear == 2012 || testYear == 2013) {
			cout << "Valid entry.\n";
			program.textbook.year = testYear;
			break;
		}
		else {
			cout << "Invalid entry.\n";			
			cin.ignore(50, '\n');
			continue;
		}
	}
	
	while (true) {
		cout << "Enter college name (Mission or WestValley): ";
		getline(cin, test5);
		if (test5 == "Mission" || test5 == "WestValley") {
			cout << "Valid entry.\n";
			program.college.name = test5;
			break;
		}
		else {
			cout << "Invalid entry.\n";
			cin.ignore(50, '\n');
			continue;
		}
	}

	while (true) {
		cout << "Enter College City (Santa Clara or Saratoga): ";
		getline(cin, test6);
		if (test6 == "Santa Clara" || test6 == "Saratoga") {
			cout << "Valid entry.\n";
			program.college.city = test6;
			break;
		}
		else {
			cout << "Invalid entry.\n";
			cin.ignore(50, '\n');
			continue;
		}
	}
};

string courseName;

bool Grades::CheckIfLegalName(string n) {
	string str[] = { "C", "C++", "C#", "Java" };

	for (string x : str) {
		if (x == n)
			return true;
	}
	return false;
};

void Grades::DisplayClassInfo() {
	cout << "\n\n-----Course Info-----\n\n";
	cout << "Course Name:  " << courseName << endl;
	cout << "Semester:  " << program.semester << endl;
	cout << "Time:  " << program.time << endl;
	cout << "Textbook:  " << program.textbook.title << endl;
	cout << "Author:  " << program.textbook.author << endl;
	cout << "Year of Textbook:  " << program.textbook.year;
	if (program.textbook.year == 2010)
		cout << " - Seventh" << endl;
	else if (program.textbook.year == 2012)
		cout << " - Eighth" << endl;
	else if (program.textbook.year == 2013)
		cout << " - Ninth" << endl;
	else
		cout << " - Edition unknown" << endl;
	cout << "College:  " << program.college.name << endl;
	cout << "City:  " << program.college.city << endl;
	cout << "---------------------\n\n";
}

bool Grades::CheckContinue() {
	
	while (true) {
		try {
			cout << "Would you like to go again (Y or N)? ";
			char runMore;
			cin >> runMore;
			if (!cin.good()) {
				cin.clear();
				throw "\nInvalid input. Try again!\n\n";
			}
			cin.ignore(50, '\n');
			if (runMore == 'Y' || runMore == 'y')
				return true;
			else if (runMore == 'N' || runMore == 'n')
				return false;
			else {
				cout << "Invalid input. Try again!\n";
				continue;
			}
		}
		catch (char *exceptionString) {
			cout << exceptionString;
			cin.ignore(50, '\n');
			continue;
		}
	}


};
