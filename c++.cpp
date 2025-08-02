#include <iostream> //.h 안 씀


/*
int main(){ //void 안 씀
	std::cout << "Enter first integer: "; //::콜롬 //<< : stream insertion operater
	int number1;
	std::cin >> number1; //사용자 입력 읽어서 number1에 저장

	std::cout << "Enter second integer: ";
	int number2;
	std::cin >> number2; //사용자 입력 읽어서 number2에 저장
	
	int sum = number1 + number2;
	std::cout << "Sum is " << sum << std::endl;//end line의 축약형. //출력이 끝났다 의미 + \n출력함.
	//리턴문 없음
}
*/


/*
using std::cout; //using은 키워드
using std::cin;
using std::endl;

inline double cube(const double side) { //인라인함수: 호출되면 바로 실행되서 빠르게 실행됨. 작은 함수에 사용.
	return side * side * side;
}

int main() {
	double sideValue;  //변수 선언
	cout << "\nEnter the side length of your cube: "; //std::안써도 됨 //출력한다
	cin >> sideValue; //사용자 입력으로 부터 읽어서 sideValue변수에 저장
	  //띄어쓰기 전 한 단어만 받아들임.
	cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl; //
}
*/


//pass by value    vs   pass by reference


//

/*
::number;//전역변수와 지역변수의 이름이 같을 때 구별하도록 하는 것. //전역변수를 가르킴
int boxvolum(int length = 1, int width = 1, int height = 1); //디폴트 argument

//같은 이름 함수 가능. function overloading
double square(double y); 
int square(int x);
*/



/*
//탬플릿 --> 타입에 구애받지 않는 함수나 클래스 정의 가능

using namespace std;

#include "maximum.h" // 헤더파일 가져옴

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






