#include <stdexcept>
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

//������
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& first, const string& last, const string& ssn, double sales, double rate, double salary) 
	: CommissionEmployee(first, last, ssn, sales, rate) //CommissionEmployee�� ������ ���
{
	setBaseSalary(salary);
}



//baseSalry ����
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if (salary >= 0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salar must be >=0.0");
}

//baseSalary��������
double  BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}



//earning(���� ��) ��������.
double BasePlusCommissionEmployee::earnings() const
{
	return baseSalary + (CommissionRate * GrossSales); // ���� + ���� = ���� ��.
}


void BasePlusCommissionEmployee::print() const
{
	cout << "commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << GrossSales
		<< "\ncommission rate: " << CommissionRate
		<< "\nbase salary: " << baseSalary;
}