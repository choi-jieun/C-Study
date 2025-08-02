#include <stdio.h>
#include <math.h>


int maximum(int x, int y, int z); //main함수 전에 함수 프로토타입 선언
int square(int x);

int main_function(void) {

    //sqrt 함수
    double num = 16.0;
    double result = sqrt(num); //sprt함수는 값의 제곱근을 반환함.

    printf("%.2f의 제곱근은 %.2f 이다.\n", num, result);
 


   num = 9.5;
   result = sqrt(num); //sprt함수는 값의 제곱근을 반환함.

    printf("%.2f의 제곱근은 %.5f 이다.\n", num, result);


    puts("-------------------------------------------------");


    //세개의 값중에 최대값을 알려주는 함수.

    int a = 1;
    int b = 3;
    int c = 7;
    maximum(a, b, c); //함수 호출 
    



    //함수가 요구하는 매개변수의 타입과 다은 타입이 들어올 경우 
    //--> 알아서 타입을 원래 요구되는 타입으로 변환시킨다.

    double h = 4.5;
    printf("%d", square(h));// 함수호출 //16반환

    return 0;


}


//세개의 값중에 최대값을 알려주는 함수
int maximum(int x, int y, int z) { //메인함수 밖에 함수 쭉 써내려가기
    int max = x;

    if (max < y) {
        max = y;
    }
    if (max < z) {
        max = z;
    }
    printf("%d\n", max);
    return max;
    
}


 
//제곱을 해주는 함수.
int square(int x){
    
    return x * x;
}










//우리가 직접 헤더파일 만들어서 함수 사용 할 수 있음.
int main(void) {

    int a = 4;
    printf("%d", jieun(a));// 함수호출 //16반환



    return 0;
}
