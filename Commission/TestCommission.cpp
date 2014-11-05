

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name:
*
*      Date: 11/4/14
*
*      Purpose: Implement class Commission and test
*
*
*
*********************************************************************************/


#include <iostream>
#include <iomanip>
#include <string>
#include "Commission.h"

using namespace std;


int main() {

	Commission employee{ "Sue", "Jones", "222-22-2222", 300, 5000, 0.06 };

	cout << "Name: " << employee.GetFirstName() << " " 
		<< employee.GetLastName() << endl;
	cout << "SSN: " << employee.GetSSN() << endl;
	cout << "Base Salary: $" << fixed << setprecision(2) << showpoint
		<< employee.GetBaseSalary() << endl;
	cout << "Gross Sales: $" << employee.GetGrossSales() << endl;
	cout << "Commission Rate: " << employee.GetCommissionRate() << endl;

	cout << "\nEarnings: $" << employee.Earnings() << endl;

	cout << "\n\nSet a new base salary: $";
	double newsalary;
	cin >> newsalary;
	employee.SetBaseSalary(newsalary);
	// employee.SetBaseSalary(-500.0);  // causes abort at runtime

	cout << "\nSet a new first name: ";
	string f;
	cin >> f;
	employee.SetFirstName(f);

	cout << "\nSet a new last name: ";
	cin >> f;
	employee.SetLastName(f);

	cout << "\nSet a new SSN (xxx-xx-xxxx): ";
	cin >> f;
	employee.SetSSN(f);

	employee.Print();


}
