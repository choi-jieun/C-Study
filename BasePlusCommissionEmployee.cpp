#include <stdexcept>
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

//생성자
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& first, const string& last, const string& ssn, double sales, double rate, double salary) 
	: CommissionEmployee(first, last, ssn, sales, rate) //CommissionEmployee의 생성자 사용
{
	setBaseSalary(salary);
}



//baseSalry 설정
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if (salary >= 0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salar must be >=0.0");
}

//baseSalary가져오기
double  BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}



//earning(버는 것) 가져오기.
double BasePlusCommissionEmployee::earnings() const
{
	return baseSalary + (CommissionRate * GrossSales); // 수입 + 월급 = 버는 것.
}


void BasePlusCommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << GrossSales
		<< "\ncommission rate: " << CommissionRate
		<< "\nbase salary: " << baseSalary;
}