// Commission.cpp
// member definitions
// Author: Matthew Walker

#include <iostream>
#include <iomanip>
#include <string>
#include "Commission.h"
using namespace std;



Commission::Commission(const string fname, const string lname, const string ssn,
	double bSalary, double gSales, double cRate) {

	// fname = { "Mary" };
	cout << "Constructor called.\n";

	firstName = { fname };
	lastName = { lname };
	SSN = { ssn };
	baseSalary = { bSalary };
	grossSales = { gSales };
	commissionRate = { cRate };
};

string Commission::GetFirstName() {
	return firstName;
};

string Commission::GetLastName() {
	return lastName;
};

string Commission::GetSSN() {
	return SSN;
};

double Commission::GetBaseSalary() const {
	// baseSalary = baseSalary++;
	return baseSalary;
};

double Commission::GetGrossSales() {
	return grossSales;
};

double Commission::GetCommissionRate() {
	return commissionRate;
};

double Commission::Earnings() {
	return baseSalary + commissionRate * grossSales;
};

void Commission::SetBaseSalary(double newsalary) {

	if (newsalary <= 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}
	else
		baseSalary = newsalary;
}

void Commission::SetFirstName(const string &f) {
	firstName = f;
}

void Commission::SetLastName(const string &l) {
	lastName = l;
}

void Commission::SetSSN(const string &s) {
	SSN = s;
}

void Commission::Print() {

	cout << "Name: " << GetFirstName() << " "
		<< GetLastName() << endl;
	cout << "SSN: " << GetSSN() << endl;
	cout << "Base Salary: $" << fixed << setprecision(2) << showpoint
		<< GetBaseSalary() << endl;
	cout << "Gross Sales: $" << GetGrossSales() << endl;
	cout << "Commission Rate: " << GetCommissionRate() << endl;

	cout << "\nEarnings: $" << Earnings() << endl;
	cout << "-----------------------\n\n";

}

// destructor
Commission::~Commission() {
	cout << "Inside destructor!\n";
}
