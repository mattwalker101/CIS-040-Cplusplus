/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name: TestCout.cpp
*
*      Date: 9/9/14
*
*      Purpose: Implement code using 'cout', 'printf_s',
*				
*
*
*********************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

						// Part 1 - Using cout
	cout << "Part 1 - using 'cout'" << endl;
	
	// using one statement with one string input to cout
	cout << "1 2 3 4" << endl;

	// using one statement with four cascaded inputs to cout
	cout << "1 " << "2 " << "3 " << "4\n";

	// using 4 cout statements
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4" << endl;

	system("pause");


					// Part 2 - Using printf_s()
	printf_s("\n%s\n", "Part 2 - using 'printf_s'");
	
	// using one statement with one string input to printf_s
	printf_s("%s", "1 2 3 4\n");

	// using one statement with four cascaded inputs
	printf_s("%d %d %d %d\n", 1, 2, 3, 4);

	// using 4 printf_s statements
	printf_s("%s", "1 ");
	printf_s("%s", "2 ");
	printf_s("%s", "3 ");
	printf_s("%s", "4\n");

	system("pause");

					// Part 3 - using /t
	int n{ 1 };
	printf_s("\n%s\n", "Part 3 - using /t");
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%d\t%d\t%d\t\n", n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);

	system("pause");

					// Part 4 - using setw()
	n = { 1 };
	cout << endl << "Part 4 - using 'setw'" << endl;
	cout << "number\tsquare\tcube" << endl;
	cout << setw(2) << n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;
	cout << setw(2) << ++n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;
	cout << setw(2) << ++n << "\t" << setw(2) << n*n << "\t" << setw(2) << n*n*n << endl;

	system("pause");

				// Part 5 - using %2d\t
	n = { 1 };
	printf_s("\n%s\n", "Part 5 - using %2d");
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%2d\t%2d\t%2d\n", n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);

	system("pause");

				// Part 6 
	// Calculate length and area, display using setprecision & fixed manipulators
	double pi{ 3.14159 };
	double radius{ 1.25 };
	double length, area;

	length = 2 * pi * radius;
	area = pi * radius * radius;

	cout << "\nPart 6 - using setprecision & fixed for formatting" << endl;
	cout << "Radius\tLength\tArea" << endl;

	cout << setprecision(2) << fixed << radius << "\t" << length << "\t" << area << endl;

	system("pause");
}
