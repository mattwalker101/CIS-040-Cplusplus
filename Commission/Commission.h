// Commission.h
// class declarations
// Author: Matthew Walker

#include <string>
using namespace std;

class Commission {

public:
	Commission(const string, const string, const string, double, double, double);
	string GetFirstName() const;
	string GetLastName() const;
	string GetSSN() const;
	// double GetBaseSalary() const;
	double GetBaseSalary() const;
	double GetGrossSales() const;
	double GetCommissionRate() const;
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
