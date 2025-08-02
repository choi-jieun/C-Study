#include <stdio.h>


int main(void) {

	int a = 7;
	printf("a값의 주소는 %d입니다.\n", &a);

	 
	int * pointer; //포인터 선언
	pointer = &a;
	printf("pointer의 값은 %d이고 가르키는 값은 %d입니다.", pointer, *pointer);
	
	*pointer = 8; //a의 값 바꾸기
	printf("a의 값은 %d입니다.", a);

	return 0;
}






// 함수 프로토타입
void cubeByReference(int* nPtr); // 포인터를 매개변수로 받는 함수

int main(void) {
	int number = 5; // 숫자 초기화

	printf("The original value of number is %d\n", number); // 원본 값 출력 

	// number의 주소를 cubeByReference에 전달
	cubeByReference(&number);

	printf("The new value of number is %d\n", number); // 새 값 출력

	return 0;
}

// *nPtr의 세제곱을 계산; 실제로 main의 number를 수정합니다.     // nPtr -> number
void cubeByReference(int* nPtr) {
	//그니까 *nPtr가 참조하는 메모리 위치랑 
	//&number가 참조하는 메모리 위치랑 같아서 전달할 수 있다!!!
	*nPtr = *nPtr * *nPtr * *nPtr; // nPtr의 세제곱             
}





// 두 정수의 값을 교환하는 함수
void swap(int* a, int* b) {                                   //x
	int temp = *a; // temp = 5                          //a ->| 5 |        
	*a = *b;       // *a = 10    
	*b = temp;    // *b = 5
}

int main() {
	int x = 5;
	int y = 10;

	printf("교환 전: x = %d, y = %d\n", x, y);
	swap(&x, &y); // x와 y의 주소를 전달 //pass by reference
	printf("교환 후: x = %d, y = %d\n", x, y);

	return 0;
}









//int a : a의 값은 변할 수 있음
//const int a  : a의 값은 변할 수 없음
//int * const aPtr : aPtr는 a만 가르킬 수 있음, a는 정수형임
//const int * const aPtr: aPtr는 a만 가르킬 수 있음, a의 값은 변할 수 없는 정수형.

//constant : 변함없는