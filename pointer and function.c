#include <stdio.h>

//함수를 가르키는 포인터!!



// 두 개의 정수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

// 두 개의 정수를 곱하는 함수
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // int를 반환하고 두 개의 int 매개변수를 받는 함수 포인터 선언
    int (*func_ptr)(int, int);
    //함수 포인터 선언 형식: 반환타입 (*포인터이름)(매개변수타입, ...);

    // 함수 포인터에 add 함수의 주소를 할당
    func_ptr = &add;  //ㅁ-> add
    printf("add(10, 20) = %d\n", func_ptr(10, 20));  // 포인터를 통해 함수 호출        

    // 함수 포인터에 multiply 함수의 주소를 할당
    func_ptr = &multiply;  ////ㅁ-> multifly
    printf("multiply(10, 20) = %d\n", func_ptr(10, 20));  // 포인터를 통해 함수 호출   

    return 0;
}
shourts  int  long   long long 
 float double long double
 