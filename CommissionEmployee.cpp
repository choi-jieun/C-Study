#include<iostream>
#include<stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
{
	firstName = first; //ÀÌ¸§
	lastName = last; //¼º
	socialSecurityNumber = ssn;

	setGrossSales(sales); //ÃÑÆÇ¸Å·®
	setCommissionRate (rate); //¼öÀÔ·ü
}

void CommissionEmployee::setfirstName(const string& first)
{
	firstName = first;
}

string CommissionEmployee::getfirstName() const
{
	return firstName;
}




void CommissionEmployee::setlastName(const string& last)
{
	lastName = last;
}

string CommissionEmployee::getlastName() const
{
	return lastName;
}





void CommissionEmployee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
}


string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber ;
}





void CommissionEmployee::setGrossSales(double sales) //ÆÇ¸Å·®
{
	if (sales >= 0.0) {
		GrossSales = sales;
	}
	else {
		throw invalid_argument("Gross sales must be >= 0.0");
	}
}

double CommissionEmployee::getGrossSales() const
{
	return GrossSales;
}





void CommissionEmployee::setCommissionRate(double rate) //¼öÀÔ·ü
{
	if (rate >= 0.0 && rate < 1.0) 
		CommissionRate = rate;

	else {
		throw invalid_argument("Commission rate must be >= 0.0 and <1.0");
	}

}

double CommissionEmployee::getCommissionRate() const
{
	return CommissionRate;
}





double CommissionEmployee::earnings() const
{
	return CommissionRate * GrossSales;
}




void CommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << ' ' << lastName << "\nsocial security number: " << socialSecurityNumber 
		<< "\ngross sales: " << GrossSales
		<< "\ncommission rate: " << CommissionRate;
}