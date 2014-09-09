

/*********************************************************************************
*                                                                               *
*      Program Name:                                                            *
*                                                                               *
*********************************************************************************
*                                                                               *
*      Author: Matthew Walker                                                   *
*                                                                               *
*      Date:                                                                    *
*                                                                               *
*      Class: CIS 040 - Intro to C++, Mission College, CA                       *
*                                                                               *
*      Description:                                                             *
*                                                                               *
*                                                                               *
*                                                                               *
*********************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv) {

	// Part 1 - Using cout
	cout << "1 2 3 4" << endl;

	cout << "1 " << "2 " << "3 " << "4\n";

	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4" << endl;
	
	// Part 2 - Using printf_s()
	printf_s("%s\n", "This set uses printf!");
	printf_s( "%s", "1 2 3 4\n");

	printf_s("%d %d %d %d\n", 1, 2, 3, 4);

	printf_s("%s", "1 ");
	printf_s("%s", "2 ");
	printf_s("%s", "3 ");
	printf_s("%s", "4\n");

	// Part 3
	int n{ 1 };

	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%d\t%d\t%d\t\n", n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);

	// Part 4
	n = { 1 };
	cout << setw(2);
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%d\t%d\t%d\t\n", n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);
	printf_s("%d\t%d\t%d\t\n", ++n, n*n, n*n*n);

	// Part 5
	n = { 1 };
	printf_s("%s\t%s\t%s\t\n", "number", "square", "cube");
	printf_s("%2d\t%2d\t%2d\n", n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);
	printf_s("%2d\t%2d\t%2d\n", ++n, n*n, n*n*n);

	// Part 6



	system("pause");
}
