#include <stdio.h>
#include <stdlib.h>

/*
//srand와 rand함수 에 대해서 알아보기
int main() {
    
   
    srand(67); //seed가 같으면 매번 같은 랜덤 수를 생성
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1에서 6사이의 난수 생성
    }
    puts("");

    srand(89);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1에서 6사이의 난수 생성
    }
    puts("");


    srand(67);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1에서 6사이의 난수 생성
    }

    return 0;
} 
*/





/*
//열거형 사용 예시

enum status { continue_game, won, lost }; 
//status: 열거형 이름, continue_game, won, lost: 열거형에서 정의된 상수들 (각각 0,1,2의 값을 가짐)

int main() {
    enum status game_status; //열거형 사용 
    //game_status는 열거형 변수로 continue_game, won, lost 중 하나의 값을 가짐.

    game_status = continue_game; // 상태를 continue_game으로 설정

    if (game_status == continue_game) {
        printf("게임을 계속합니다.\n");
    }
    else if (game_status == won) {
        printf("게임에서 이겼습니다!\n");
    }
    else if (game_status == lost) {
        printf("게임에서 졌습니다.\n");
    }

    return 0;
}
*/








/*
//변수의 스코프와 관련된 예시 코드 ( 지역변수? 전역변수?  static지역변수?)
// 지역변수: 특정 블록이나 함수 내에서만 유효하며, 블록을 벗어나면 메모리에서 해제됨
// static 지역변수 : 특정 함수 내에서만 유효하지만, 함수 호출이 끝나도 값이 유지됨

// 함수 원형 선언
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;  // 전역 변수

int main(void)
{
    int x = 5;  // main 함수의 지역 변수

    printf("local x in outer scope of main is %d\n", x);

    { // 새로운 스코프 시작
        int x = 7;  // 새로운 스코프의 지역 변수
        printf("local x in inner scope of main is %d\n", x);
    } // 스코프 끝

    printf("local x in outer scope of main is %d\n", x);

    // 함수 호출
    useLocal();        // 지역 변수 사용         
    useStaticLocal();  // static 지역 변수 사용
    useGlobal();       // 전역 변수 사용

    useLocal();        // 지역 변수 재초기화
    useStaticLocal();  // static 지역 변수 값 유지
    useGlobal();       // 전역 변수 값 유지

    printf("\nlocal x in main is %d\n", x);

    return 0;
}

void useLocal(void)
{
    int x = 25;  // 지역 변수 (함수 호출 시마다 초기화)
    printf("\nuseLocal함수 안에 있는 지역변수x는 %d입니다. after entering useLocal\n", x); //25
    ++x;
    printf("useLocal함수 안에 있는 지역변수x는 %d입니다. before exiting useLocal\n", x); //26
}

void useStaticLocal(void)
{
    static int x = 50;  // static 지역 변수 (처음 한 번만 초기화)
    printf("\nuseStaticLocal함수 안에 있는 static지역 변수는 %d입니다. on entering useStaticLocal\n", x);
    ++x;
    printf("useStaticLocal함수 안에 있는 static지역 변수는 %d입니다. on exiting useStaticLocal\n", x);
}

void useGlobal(void)
{   //변수 설정 없음
    printf("\nglobal x 는 %d입니다. on entering useGlobal\n", x);
    x *= 10;
    printf("global x 는 %d입니다. on exiting useGlobal\n", x);
}
*/










/*
// 팩토리얼을 계산하는 재귀 함수 예제
unsigned long long int factorial(unsigned int number);

int main(void)
{
    // 0부터 21까지의 숫자의 팩토리얼을 계산하여 출력
    for (unsigned int i = 0; i <= 21; ++i) {
        printf("%u! = %llu\n", i, factorial(i));
        //%llu는 unsigned long long int값을 출력하기 위한 형식 지정자.
    }

    return 0;
}

// 팩토리얼 계산 함수
unsigned long long int factorial(unsigned int number)  
//long long int: 일반적인 int보다 더 큰 범위의 정수를 저장할 수 있는 자료형, 바이트 수 많이 할당
//ll은 long long을 의미
{
    // 기본 조건: number가 0 또는 1일 때는 1을 반환
    if (number <= 1) {
        return 1;
    }
    // 재귀 호출: number * (number - 1)!를 반환
    else {
        return number * factorial(number - 1);
    }
}
*/







/*
//사용자가 정수를 입력하면 피보나치 수열의 그 정수번째 값을 알려주는 프로그램.  
//피보나치 수열:
//첫 번째 항은 0이고, 두 번째 항은 1입니다. 
// 그 이후의 항은 이전 두 항의 합으로 결정됩니다.

// 0 1 2 3 5 8 

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int number;  // 사용자가 입력할 수

    // 사용자로부터 정수 입력 받기
    printf("Enter an integer: ");
    scanf_s("%u", &number);

    // 피보나치 수 계산
    unsigned long long int result = fibonacci(number);

    // 결과 출력
    printf("Fibonacci(%u) = %llu\n", number, result);

    return 0;
}

// 피보나치 수를 계산하는 재귀 함수 정의
unsigned long long int fibonacci(unsigned int n)
{
    // 기본 조건: n이 0 또는 1이면 n을 반환
    if (n == 0 || n == 1) {
        return n;
    }
    // 재귀 호출: F(n) = F(n-1) + F(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
*/
