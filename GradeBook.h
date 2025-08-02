//interface

#pragma once

#include <string> //c++�⺻ Ŭ���� -> string ������ؼ�
//������Ͽ����� usinf namespace std ��� ����.

class GradeBook {
public: //�ܺο����� public�ϰ� ȣ��� �� ����.
	GradeBook(std::string, std::string); //constructor //argument�� �ϳ��� ��� �տ� explicit���
	void setCourseName(std::string);  //member function
	std::string getCourseName() const;
	void setInstructorName(std::string);
	std::string getInstructorName() const;
	void displayMessage() const;

private: //Ŭ���� �ȿ� ����Ǿ� �ִ� member function�� ���ؼ��� ���� �����ϴ�!!
	std::string courseName; //data member : �� ��ü���� �ٸ� ���� ���� �� �ִ�
	std::string instructorName;
};