// Grades.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include <string>
#include <iomanip>
#include "Grades.h"
using namespace std;

Grades::Grades(){
	classNumber = { 40 };
	cout << "Automatically initialized fullClassName is ... "
		<< fullClassName << "\n\n";
	fullClassName = { "CIS" };
	cout << "New default fullClassName is " << fullClassName << endl;
};

int Grades::GetGradeCounter() {
	//	classNumber = 50;
	return gradeCounter;
};

int Grades::gradeCounter{};

char Grades::className;

//void Grades::DisplayClassName() {
//	cout << "Full Class Name = " << fullClassName;
//};

void Grades::DisplayClassName(Grades obj) {
	cout << "Full Class Name = " << obj.fullClassName << endl;
};

string InputClassName() {
	string name;

	while (true) {
		cout << "Enter the full class name: ";
		getline(cin, name);
		
		if (name == "C++" || name == "C#") {
			
			return name;
		}
		else {
			cout << "Invalid response! Only ""C++"" & ""C#"" are valid!\n";
			continue;
		}


	}
};
