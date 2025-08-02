#pragma once

#include <string>

#ifndef COMMISSION_H
#define COMMISSION_H


class CommissionEmployee 
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0);

	void setfirstName(const std::string& );
	std::string getfirstName() const;

	void setlastName(const std::string& );
	std::string getlastName() const;

	void setSocialSecurityNumber(const std::string& );
	std::string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double getGrossSales() const;

	void setCommissionRate(double rate);
	double getCommissionRate()const;

	double earnings()const;

	void print() const;


protected:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double GrossSales;
	double CommissionRate;
};

#endif
