#include "TestCout1.h"

/*********************************************************************************
*                                                                               *
*      Program Name: TestCout1.cpp                                              *
*                                                                               *
*********************************************************************************
*                                                                               *
*      Author: Matthew Walker                                                   *
*                                                                               *
*      Date: 9/9/14                                                             *
*                                                                               *
*      Class: CIS 040 - Intro to C++, Mission College, CA                       *
*                                                                               *
*      Description: Using cout and printf_s() in various ways                   *
*                                                                               *
*                                                                               *
*                                                                               *
*********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv) {

	// Part 1 - Using cout
	cout << "Part 1\n";
	cout << "1 2 3 4" << endl;

	cout << "1 " << "2 " << "3 " << "4\n";

	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4" << endl;

	// Part 2 - Using printf_s()
	printf_s("\n%s\n", "Part 2");
	printf_s("%s", "1 2 3 4\n");

	printf_s("%d %d %d %d\n", 1, 2, 3, 4);

	printf_s("%s", "1 ");
	printf_s("%s", "2 ");
	printf_s("%s", "3 ");
	printf_s("%s", "4\n");

	// Part 3 - using /t
	int n{ 1 };
	printf_s("\n%s\n", "Part 3");
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%d\t%d\t%d\t\n", n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);

	// Part 4 - using setw()
	n = { 1 };
	cout << endl << "Part 4" << endl;
	cout << "number\tsquare\tcube" << endl;
	cout << setw(2) << n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;
	cout << setw(2) << ++n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;
	cout << setw(2) << ++n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;

	// Part 5 - using %2d\t
	n = { 1 };
	printf_s("\n%s\n", "Part 5");
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%2d\t%2d\t%2d\n", n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);

	// Part 6 - Calculate length and area, display using setprecision & fixed manipulators
	double pi{ 3.14159 };
	double radius{ 1.25 };
	double length, area;

	length = 2 * pi * radius;
	area = pi * radius * radius;

	cout << "\nPart 6" << endl;
	cout << "Radius\tLength\tArea" << endl;

	cout << setprecision(2) << fixed << radius << "\t" << length << "\t" << area << endl;

	system("pause");
}
