#include <iostream> //.h �� ��


/*
int main(){ //void �� ��
	std::cout << "Enter first integer: "; //::�ݷ� //<< : stream insertion operater
	int number1;
	std::cin >> number1; //����� �Է� �о number1�� ����

	std::cout << "Enter second integer: ";
	int number2;
	std::cin >> number2; //����� �Է� �о number2�� ����
	
	int sum = number1 + number2;
	std::cout << "Sum is " << sum << std::endl;//end line�� �����. //����� ������ �ǹ� + \n�����.
	//���Ϲ� ����
}
*/


/*
using std::cout; //using�� Ű����
using std::cin;
using std::endl;

inline double cube(const double side) { //�ζ����Լ�: ȣ��Ǹ� �ٷ� ����Ǽ� ������ �����. ���� �Լ��� ���.
	return side * side * side;
}

int main() {
	double sideValue;  //���� ����
	cout << "\nEnter the side length of your cube: "; //std::�Ƚᵵ �� //����Ѵ�
	cin >> sideValue; //����� �Է����� ���� �о sideValue������ ����
	  //���� �� �� �ܾ �޾Ƶ���.
	cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl; //
}
*/


//pass by value    vs   pass by reference


//

/*
::number;//���������� ���������� �̸��� ���� �� �����ϵ��� �ϴ� ��. //���������� ����Ŵ
int boxvolum(int length = 1, int width = 1, int height = 1); //����Ʈ argument

//���� �̸� �Լ� ����. function overloading
double square(double y); 
int square(int x);
*/



/*
//���ø� --> Ÿ�Կ� ���ֹ��� �ʴ� �Լ��� Ŭ���� ���� ����

using namespace std;

#include "maximum.h" // ������� ������

int main() {
	int int1, int2, int3; 

	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

	cout << "The maximum integer value is: " << maximum(int1, int2, int3);



	double  double1, double2, double3;

	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;

	cout << "The maximum double value is: " << maximum(double1, double2, double3);




	char char1, char2, char3;

	cout << "\n\nInput three charaters values: ";
	cin >> char1 >> char2 >> char3;

	cout << "The maximum character value is: " 
		<< maximum(char1, char2, char3) << endl;
}
*/






