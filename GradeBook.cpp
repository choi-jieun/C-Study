//GradeBook.h Ŭ������ ������
#include <iostream>
#include "GradeBook.h" //��� �����Ƿ�,, #include <string> �Ƚᵵ ��.
using namespace std;


GradeBook::GradeBook(string name,string Name) //constructor
	:courseName(name),//name�� courseName���� �ʱ�ȭ
	instructorName(Name) //name�� instructorName���� �ʱ�ȭ

{
	//�� �ٵ�
}

void GradeBook::setCourseName(string name)
{
	courseName = name; 
}


string GradeBook::getCourseName() const { //const : �� �Լ��� ���ο��� ������ �ٲٴ� ���� �ƴմϴ�.�� ��Ȯ�� �ϴ� ��
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