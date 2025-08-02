#include <stdlib.h> // 표준 라이브러리 포함 (rand, srand 등)
#include <stdio.h>  // 입출력 함수 포함 (printf 등)
#include <time.h>   // 시간 관련 함수 포함 (time 함수)

/*
//배열의 바이트수와 
//sizeof: 바이트 수를 반환
#define SIZE 20

size_t getSize(float* ptr); // 프로토타입

int main(void)
{
    float array[SIZE]; // float자료형 20개 가지는 배열 생성

    printf("The number of bytes in the array is %zu"
        "\nThe number of bytes returned by getSize is %zu\n",
        sizeof(array), getSize(array));
}

// ptr의 크기를 반환(바이트 수)
size_t getSize(float* ptr) //포인터를 매개변수로받음
{
    return sizeof(ptr); //포인트 자체의 크기 의미. => 8반환
}
*/




//배열의 요소가 포인터?




//int형을 가르키는 포인터
int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3];  // int타입의 값을 가르키는 포인터를 저장하는 배열 선언    // int* / arr[3] 으로 끊어서 보기

    // 배열의 각 요소에 변수의 주소를 할당
    arr[0] = &a;
    arr[1] = &b;      //{ㅁ ㅁ ㅁ}
    arr[2] = &c;      // |  |  |
    // a  b  c

// 포인터 배열을 통해 값 출력
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]가 가리키는 값: %d\n", i, *arr[i]);
    }

    return 0;
}








//char형을 가르키는 포인터

int main() {
    // 문자열을 가리키는 포인터들의 배열
    const char* arr[3];                             

    // 각 포인터가 문자열을 가리키도록 설정
    arr[0] = "Hello";
    arr[1] = "World";
    arr[2] = "C programming";
     
    //{ㅁ      ㅁ          ㅁ}
    // |       |           |
    //"Hello" "World"  "C programming"
    
    //'H' 
    //'e' 
    //'l' 
    //'l' 
    //'o'


    // 배열 요소를 통해 문자열 출력
    for (int i = 0; i < 3; i++) { 
        printf("arr[%d]가 가리키는 문자열: %s\n", i, arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("arr[%d]가 가리키는 것: %c\n", i, *arr[i]);
    }

    printf("arr[0]+1이 가리키는 것: %c\n", *(arr[0] + 1));
    printf("arr[0]+2이 가리키는 것: %c\n", *(arr[0] + 2));
    printf("arr[0]+3이 가리키는 것: %c\n", *(arr[0] + 3));
    printf("arr[0]+4이 가리키는 것: %c\n", *(arr[0] + 4));
    printf("arr[0]+5이 가리키는 것: %c\n", *(arr[0] + 5));

    return 0;
}









//함수를 가르키는 포인터


// 산술 연산 함수들 선언
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("0으로 나눌 수 없습니다!\n");
        return 0;
    }
}

int main() {
    // 함수 포인터 배열 선언 및 초기화
    int (*func_ptr[4])(int, int) = { add, subtract, multiply, divide };
    //반환타입 (*배열이름[배열크기])(매개변수타입1, 매개변수타입2, ...); = 함수 표인터 배열 선언 형식

    int choice, x, y;

    printf("두 정수를 입력하세요: ");
    scanf_s("%d %d", &x, &y);

    printf("원하는 연산을 선택하세요:\n");
    printf("0: 덧셈\n1: 뺄셈\n2: 곱셈\n3: 나눗셈\n");
    scanf_s("%d", &choice);

    // 입력값에 따라 해당 연산을 수행
    if (choice >= 0 && choice < 4) {
        printf("결과: %d\n", func_ptr[choice](x, y));  // 함수 포인터 배열을 통한 함수 호출
                             //함수포인터배열의이름[인덱스](인수1, 인수2, ...); = 형식
    }
    else {
        printf("잘못된 선택입니다!\n");
    }

    return 0;
}





// 두 정수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

// 두 정수를 빼는 함수
int subtract(int a, int b) {
    return a - b;
}


int main(void) {
    int(*pointer)(int,int) = &add; //함수 포인터 선언   //pointer -> add

    int result = pointer(10, 20); //포인터를 이용한 함수 호출
    printf("%d",result);

}






// 두 정수를 더하는 함수
int add(int a, int b) {
    return a + b;
}

// 두 정수를 빼는 함수
int subtract(int a, int b) {
    return a - b;
}


int main(void) {
    int(*pointer[3])(int, int) = { add,subtract }; //함수 포인터 배열선언 = 원래 포인터 선언에 나열크기([])만 추가해주면 됨.
    int result = pointer[0](10, 20); //포인터배열을 이용한 함수의 호출.
    printf("%d", result);
  
}











int main() {
    // 함수 포인터 배열 선언 및 초기화
    int (*func_ptr[2])(int, int) = { add, subtract }; 

    //{ㅁ   ㅁ}
    // |    |
    // add  subtract

    int x = 10, y = 5;

    // 함수 포인터 배열을 통한 함수 호출
    printf("add(10, 5) = %d\n", func_ptr[0](x, y));       // add 함수 호출
    printf("subtract(10, 5) = %d\n", func_ptr[1](x, y));  // subtract 함수 호출

    return 0;
}
