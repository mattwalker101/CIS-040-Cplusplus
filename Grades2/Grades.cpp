// Grades.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include <string>
#include <array>
#include <iomanip>
#include "Grades.h"
using namespace std;


Grades::Grades() {
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

// int Grades::gradeCounter{};

char Grades::className;

//void Grades::DisplayClassName() {
//	cout << "Full Class Name = " << fullClassName;
//};

void Grades::DisplayClassName(Grades obj) {
	cout << "Full Class Name = " << obj.fullClassName << endl;
};

string Grades::InputClassName() {
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

void Grades::ProcessGrades() {
	GetGrades();

	// array<int, gradeCounter> arr = {};
	// GetGrades(arr);

	double ave = GetAverage();
	cout << "\nClass average is " << setprecision(2) << fixed
		<< ave << endl;

	cout << "Lowest grade is " << GetMinimum()
		<< "\nHighest grade is " << GetMaximum() << endl;

	ShowLetterGrade(ave);

};

// using While and try-catch
void Grades::GetGrades() {
	while (true) {
		try {
			int i = 0;
			cout << "\nEnter five grades (50-100), seperated by spaces: ";

			while (i < 5) {
				cin >> grades[i];
				if (!cin.good()) {
					cin.clear();
					throw "\nIllegal Input! Try again!\n\n";
				}

				if (grades[i] < 50 || grades[i] > 100)
					throw "\nIllegal input! Try again!\n\n";
				i++;
			}
		}
		catch (char *exceptionString) {
			cout << exceptionString;
			cin.ignore(50, '\n');
			continue;
		}
		cin.ignore(10, '\n');

		cout << "User entered the following grades: ";
		for (int i = 0; i < gradeCounter; i++)
			cout << grades[i] << " ";
		cout << endl;

		/*
		for (auto i = begin(grades); i != end(grades); ++i)
			cout << *i << " ";
		cout << endl;

		for (auto i : grades)
			cout << i << " ";
		cout << endl;
		*/

		// using RAND()
		cout << "Randomly generated grades are: ";
		for (size_t j = 0; j < 5; j++)
			grades[j] = 50 + rand() % 51;

		for (auto i : grades)
			cout << i << " ";
		cout << endl;

		break;
	}
}

/*
//using do-while and try-catch
void Grades::GetGrades() {
	do {
		bool b = false;

		try {
			cout << "\nEnter five grades (50-100), seperated by spaces: ";
			cin >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
			cin.ignore(100, '\n');

			if (!cin.good()) {
				cin.clear();
				throw "\nIllegal Input! Try again!\n\n";
			}
		}
		catch (char *exceptionString) {
			cout << exceptionString;
			cin.ignore(50, '\n');
			continue;
		}
		for (int i = 0; i < gradeCounter; i++) {
			if (grades[i] < 50 || grades[i] > 100) {
				b = true;
				break;
			}
		}

		if (b == false) { // ie, legal input
			cout << "The input grades are: ";
			for (int i = 0; i < gradeCounter; i++)
				cout << grades[i] << " ";
			cout << endl;
			break;
		}
		else {
			cout << "\nInput out of range 50-100! Try again!\n";
			continue;
		}
	} while (true);
};
*/

/*
// using do-while without try-catch
void Grades::GetGrades() {
	do {
		cout << "\nEnter five grades (50-100), seperated by spaces: ";
		cin >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
		cin.ignore(100, '\n');

		if (!cin.good()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nIllegal input. Try again!\n";
			continue;
		}

		bool b = true;

		for (int i = 0; i < gradeCounter; i++) {
			if (grades[i] < 50 || grades[i] > 100)
				b = false;
		}

		if (b == false) {
			cout << "\nInput out of range 50-100. Try again!\n";
			continue;
		}
		else {
			cout << "The input grades are: ";
			for (int i = 0; i < gradeCounter; i++)
				cout << grades[i] << " ";
			cout << endl;
			break;
		}
	} while (true);
};
*/

/*
// using while without try-catch
void Grades::GetGrades() {
	while (true) {
		cout << "\nEnter five grades (50-100), seperated by spaces: ";
		cin >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
		cin.ignore(100, '\n');

		if (!cin.good()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nIllegal input. Try again!\n";
			continue;
		}

		bool b = true;

		for (int i = 0; i < gradeCounter; i++) {
			if (grades[i] < 50 || grades[i] > 100)
				b = false;
		}

		if (b == false) {
			cout << "\nInput out of range 50-100. Try again!\n";
			continue;
		}
		else {
			cout << "The input grades are: ";
			for (int i = 0; i < gradeCounter; i++)
				cout << grades[i] << " ";
			cout << endl;
			break;
		}
	}
}
*/


void Grades::GetGrades(array<int, gradeCounter> &a) {
	do {
		cout << "\nEnter five grades (50-100), seperated by spaces: ";
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
		cin.ignore(100, '\n');

		if (!cin.good()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nIllegal input. Try again!\n";
			continue;
		}

		bool b = true;

		for (size_t i = 0; i < a.size(); i++) {
			if (a[i] < 50 || a[i] > 100)
				b = false;
		}

		if (b == false) {
			cout << "\nInput out of range 50-100. Try again!\n";
			continue;
		} 
		else {
			cout << "The input grades are: ";
			for (int i = 0; i < gradeCounter; i++)
				cout << grades[i] << " ";
			cout << endl;
			break;
		}
	} while (true);
}



double Grades::GetAverage() {
	int total{};

	for (int grade = 0; grade < gradeCounter; grade++)
		total += grades[grade];

	return((static_cast<double>(total)) / gradeCounter);
}

int Grades::GetMaximum() {
	int highGrade{};

	for (int grade = 0; grade < gradeCounter; grade++) {
		if (grades[grade] > highGrade)
			highGrade = grades[grade];
	}

	auto maxValue = max_element(begin(grades), end(grades));
	cout << "maxVal = " << *maxValue << endl;

	return highGrade;
}

int Grades::GetMinimum() {
	int lowGrade{ 100 };

	for (int grade = 0; grade < gradeCounter; grade++) {
		if (grades[grade] < lowGrade)
			lowGrade = grades[grade];
	}

	auto minValue = min_element(begin(grades), end(grades));
	cout << "minVal = " << *minValue << endl;

	return lowGrade;
}

void Grades::ShowLetterGrade(double ave) {
	char letterGrade;

	if ((ave >= 88) && (ave <= 100))
		letterGrade = 'A';
	else if ((ave >= 75) && (ave <= 87))
		letterGrade = 'B';
	else if ((ave >= 62) && (ave <= 74))
		letterGrade = 'C';
	else if ((ave >= 50) && (ave <= 61))
		letterGrade = 'D';
	else if ((ave >= 1) && (ave <= 49))
		letterGrade = 'F';
	else 
		letterGrade = 'I';

	switch (letterGrade) {
	case 'A':
		cout << "Letter grade is " << letterGrade << " : Excellent";
		break;
	case 'B':
		cout << "Letter grade is " << letterGrade << " : Good";
		break;
	case 'C':
		cout << "Letter grade is " << letterGrade << " : Satisfactory";
		break;
	case 'D':
		cout << "Letter grade is " << letterGrade << " : Passing";
		break;
	case 'F':
		cout << "Letter grade is " << letterGrade << " : Failing";
		break;
	case 'I':
		cout << "Letter grade is " << letterGrade << " : Incomplete";
		break;
	}

	cout << "\n\n";
}
