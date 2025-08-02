#include <string>
#include "CommissionEmployee.h" //헤더파일 해줘야..
#pragma once

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
	BasePlusCommissionEmployee(
		const std::string& , const std::string& , const std::string& , double=0.0 , double=0.0 , double=0.0 ); //수정

	void setBaseSalary(double );//추가
	double  getBaseSalary() const;//추가

	double earnings() const;//수정
	void print() const; //수정
private:
	double baseSalary; //추가

};

