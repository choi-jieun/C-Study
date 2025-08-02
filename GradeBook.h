//interface

#pragma once

#include <string> //c++기본 클래스 -> string 사용위해서
//헤더파일에서는 usinf namespace std 사용 못함.

class GradeBook {
public: //외부에서도 public하게 호출될 수 있음.
	GradeBook(std::string, std::string); //constructor //argument가 하나일 경우 앞에 explicit사용
	void setCourseName(std::string);  //member function
	std::string getCourseName() const;
	void setInstructorName(std::string);
	std::string getInstructorName() const;
	void displayMessage() const;

private: //클래스 안에 선언되어 있는 member function을 통해서만 접근 가능하다!!
	std::string courseName; //data member : 각 개체마다 다른 값을 가질 수 있다
	std::string instructorName;
};