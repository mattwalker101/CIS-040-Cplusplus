#include "TestCout2.h"

/********************************************************************************
 *                                                                               
 *      Mission College C++ Class                                                           
 *                                                                               
 ********************************************************************************
 *                                                                                
 *      Author: Matthew Walker    
 
 *      Program Name: TestCout2.h
 *                                                                               
 *      Date: 9/16/14                                                                   
 *                                                                               
 *      Purpose: Using 'cout' & 'cin' with integer & remainder division,
 *				'if' and logical &&, and math class functions 
 *                                                                               
 *                                                                               
 *********************************************************************************/

int main() {

					// First Part : Sales pay
	cout << "\n\t\tFIRST PART\n\n";

	// receive user input
	double base, sale, percentage, wage;
		
	cout << "Enter the base pay amount: $";		
	cin >> base;

	cout << "Enter the percentage paid on sales as decimal: ";
	cin >> percentage;
	
	cout << "Enter the weekly sales amount: $";
	cin >> sale;

	// calculate wage & display
	wage = base + (sale * percentage);
	
	cout << "\nTheir weekly pay will be: $" << fixed << setprecision(2)
		<< wage << endl;

	cin.ignore();
	system("pause");

				// Second Part : Crate calculations
	cout << "\n\t\tSECOND PART\n\n";

	// user input
	double length, width, height, volume;

	cout << "General Crates, Inc.\n" << "Crate Calculator\n\n";
	cout << "********************\n";
	cout << "Enter length (in cm): ";
	cin >> length;
	cout << "Enter width (in cm): ";
	cin >> width;
	cout << "Enter height (in cm): ";
	cin >> height;

	// calculate volume, cost, charge, profit
	volume = length * width * height;
	cout << "\nVolume is: " << fixed << setprecision(2) << showpoint 
		<< volume << " cm^3\n" << endl;

	cout << "Cost is: \t$" << (0.23 * volume) << endl;
	cout << "Charge is: \t$" << (0.5 * volume) << endl;
	cout << "Profit is \t$" << (0.27 * volume) << endl;
	cout << "\n\n";

	system("pause");

	
				// Third Part : Integers & Palindromes
	cout << "\n\t\tTHIRD PART\n\n";

	// get a 5 digit integer & display individual digits
	int number, n1, n2, n3, n4, n5;
	
	cout << "Enter an integer with 5 digits: ";
	cin >> number;

	n1 = number / 10000;
	number %= 10000;

	n2 = number / 1000;
	number	%= 1000;

	n3 = number / 100;
	number %= 100;

	n4 = number / 10;
	number %= 10;

	n5 = number;

	// display number with spaces
	cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << "\n";

	// check if number is a palindrome
	if (n1 == n5 && n2 == n4) {
		cout << "Your number is a palindrome!\n";
	} else {
		cout << "Your number is NOT a palindrome!\n";
	}

	// swap 1st & 3rd digits and 2nd & 5th digits
	int temp;

	temp = n3;
	n3 = n1;
	n1 = temp;

	temp = n5;
	n5 = n2;
	n2 = temp;

	// display number with spaces
	cout << "\nAfter swapping 1st-3rd and 2nd-5th digits, the new number is: ";
	cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << "\n";

	// check if new number is a palindrome
	if (n1 == n5 && n2 == n4) {
		cout << "Your new number is a palindrome!\n";
	}
	else {
		cout << "Your new number is NOT a palindrome!\n";
	}

	cin.ignore();
	system("pause");
	system("cls");

					// Fourth Part : Calculate distance between two points
	cout << "\n\t\tFOURTH PART\n\n";

	// get user input
	double x1, x2, y1, y2, distance;

	cout << "I will calculate distance between 2 points (x1, y1) and (x2, y2).\n";
	cout << "What is x1? ";
	cin >> x1;
	cout << "What is y1? ";
	cin >> y1;
	cout << "What is x2? ";
	cin >> x2;
	cout << "What is y2? ";
	cin >> y2;

	// calculate & display
	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	cout << "Distance between (" << setprecision(0) << noshowpoint
		<< x1 << ", " << y1 << ") and ("
		<< x2 << ", " << y2 << ") is: " << setprecision(2) << distance << endl;
	
	system("pause");

				// Fifth Part : Wallpaper calculations
	cout << "\n\t\tFIFTH PART\n\n";
	
	// get user input for room dimensions
	int length2, width2, height2, perimeter, strips, rolls;

	cout << "Please enter dimensions of your room in feet...\n";
	cout << "\tLength: ";
	cin >> length2;
	cout << "\tWidth: ";
	cin >> width2;
	cout << "\tHeight: ";
	cin >> height2;

	// change room dimensions to inches
	length2 *= 12;
	width2 *= 12;
	height2 *= 12;

	// calculate strips from a roll based on height of room
	strips = (33*12) / height2;
	// cout << "\n\nStrips per roll = " << strips << endl;

	// calculate room perimeter and total strips needed
	perimeter = 2 * length2 + 2 * width2;

	// cout << "\nPerimeter requires strips = " << (perimeter / 21) << endl;

	// calculate rolls required and display
	rolls = (perimeter / 21) / strips;
	cout << "\nTotal rolls required = " << rolls << endl;
	cout << "************************\n\n";

	system("pause");

}
