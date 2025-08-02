#include <string>
#include "CommissionEmployee.h" //������� �����..
#pragma once

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
	BasePlusCommissionEmployee(
		const std::string& , const std::string& , const std::string& , double=0.0 , double=0.0 , double=0.0 ); //����

	void setBaseSalary(double );//�߰�
	double  getBaseSalary() const;//�߰�

	double earnings() const;//����
	void print() const; //����
private:
	double baseSalary; //�߰�

};

