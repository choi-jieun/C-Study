//GradeBook.h 클래스의 디테일
#include <iostream>
#include "GradeBook.h" //상속 받으므로,, #include <string> 안써도 됨.
using namespace std;


GradeBook::GradeBook(string name,string Name) //constructor
	:courseName(name),//name을 courseName으로 초기화
	instructorName(Name) //name을 instructorName으로 초기화

{
	//빈 바디
}

void GradeBook::setCourseName(string name)
{
	courseName = name; 
}


string GradeBook::getCourseName() const { //const : 이 함수는 내부에서 뭔가를 바꾸는 것이 아닙니다.를 명확히 하는 것
	return courseName;
}





void GradeBook::setInstructorName(string Name)
{
	instructorName = Name;
}

string GradeBook::getInstructorName() const {
	return instructorName;
}



void GradeBook::displayMessage() const {
	cout << "Welcome to the grade book for\n"
		<< getCourseName() << "!" << "\nThis course is presented by: " << getInstructorName() << endl;
}