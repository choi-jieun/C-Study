#include "BasePlusCommissionEmployee.h"
#include <iomanip>
#include <iostream>
using namespace std;

//직원에 대한 정보입력(이름,성,주민번호,판매량,수입률,수입+ 월급)

/*
int main()
{
	BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300); //클래스 객체 생성

	cout << fixed << setprecision(2);

	cout << "Emplotee information obrained by get functions: \n"
		<< "\nFirst name is " << employee.getfirstName()
		<< "\nLast name is " << employee.getlastName()
		<< "\nsocial security number is " << employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << employee.getBaseSalary() << endl;

	employee.setBaseSalary(1000);
	
	cout << "\nUpdated employee information output by print function: \n" << endl;
	employee.print();

	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}
*/
