// Commission.h
// class declarations
// Author: Matthew Walker

#include <string>
using namespace std;

class Commission {

public:
	Commission(string, string, string, double, double, double);
	string GetFirstName();
	string GetLastName();
	string GetSSN();
	double GetBaseSalary() const;
	double GetGrossSales();
	double GetCommissionRate();
	double Earnings();
	void SetBaseSalary(double);
	void SetFirstName(const string &);
	void SetLastName(const string &);
	void SetSSN(const string &);
	void Print();
	~Commission();		// destructor

private:
	string firstName;
	string lastName;
	string SSN;
	double baseSalary;
	double grossSales;
	double commissionRate;


};
