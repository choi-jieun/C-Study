#include <stdio.h> //헤더파일

int main_printf_scanf_puts(void) {

	//printf : 출력함수
	//scanf  : 입력합수
	int a, b;
	printf("첫 번째 정수를 입력하세요:\n");
	scanf_s("%d", &a);
	printf("a는 %d\n", a);

	printf("두 번째 정수를 입력하세요: ");
	scanf_s("%d", &b);
	printf("b는 %d\n", b);

	int c, d; //변수 동시 입력 가능
	printf("2개의 정수를 입력하세요 : "); //두개의 정수는 공백이나 탭으로 구분한다.
	scanf_s("%d%d", &c, &d); //2개의 정수를 입력받기
	printf("c는 %d, d는 %d\n", c, d);


	//printf를 이용한 테이블 형태 만들기 //두개 이상 값을 출력할 수 있음!
	printf("%4s%25s  ", "year", "the years deposit");




	//puts : 알아서 \n 해줌!
	puts("jieun\n"); //puts는 오직 문자열만 출력함. 줄바꿈까지 해줌.
	puts("jieun");


	puts("-------------------------------------");

	int score;
	printf("what's your score?\n");
	scanf_s("%d", &score);

	if (score >= 60) {
		puts("Passed");
	}
	else {
		puts("Failed");
		puts("Try again");
	}
	puts(score >= 60 ? "Passed" : "Failed"); //같은 의미 ( 조건? 참일때 실행할 값 : 거짓일 때 실행할 값)

	






	return 0;
}




//printf
//소수점 몇자리 까지만 표현 가능
//오른쪽 정렬 or 왼쪽 정렬가능
//원하는 위치에 출력 가능
//e사용 표현도 가능
//8진수,16진수 표현도 가능



//포맷(형식)지정자
//printf("conversion specification", argument1)

//%d, %i = 정수 
//%u = unsigned int  // -455 --> 4294966841로 출력됨. 
//%o = 8진수 octal
//%x = 16진수 (소문자로 표현 hexadecimal
//%X = 16진수 (대문자로 표현
//%hd = 짧은 정수 자료형
//%ld = long 정수
//%lld = long long 정수


int main(void)
{ //정수를 다룬다
    printf("%d\n", 455); // 정수 출력
    printf("%d\n", +455); // 양수 기호는 출력되지 않음
    printf("%d\n", -455); // 음수 기호 출력
    printf("%i\n\n", 455); // 정수 출력 (d와 동일)

    printf("%u\n", 455); // 부호 없는 정수 출력
    printf("%u\n\n", -455); //1바이트가 32비트일때 2의보수를 10진수표현으로 나타낸 수

    printf("%hd\n", 32000); // short형 정수 출력
    printf("%ld\n\n", 2000000000L); // L 접미사는 리터럴이 long 형이라고 명시적으로 지정하는 것임.

    printf("%o\n", 455); // 8진수로 바꿔서 출력
    printf("%x\n", 455); // 16진수로 바꿔서 (소문자) 출력
    printf("%X\n", 455); // 16진수로 바꿔서 (대문자) 출력

    return 0;
}















//소수를 다루기

int main(void)

{
    printf("%f\n", 1234567.89); //디폴트로 소수점 6자리로 표현(7자리에서 반올림)
    printf("%F\n\n", 1234567.89); //디폴트로 소수점 6자리로 표현(7자리에서 반올림)


    //e사용 표현: exponential notation 지수의 표기법.


    //ㅁ.xxxxxx 형식임.
    //무조건 지수형식으로 표현
    //소수점 6자리까지 표현(7자리에서 반올림)
    printf("%e\n", 0.123456789); // 지수 형식으로 출력 //e+06= x 10의 6제곱
    printf("%e\n", +1234567.89); // 양수 기호는 출력되지 않음
    printf("%e\n", -1234567.89); // 음수 기호 출력
    printf("%E\n\n", 1234567.89); // 지수 형식 (대문자 E)로 출력




    //%g는 숫자의 크기에 따라 지수표현법 or 일반표기법을 자동으로 선택
    // e+06 이상.. e-05이하... 이면 지수형식으로 출력  --> = %e
    // 아니면 그대로 일반 표기법으로 출력    --> = %f
    //불필요한 0을 생략한다.
     //소수점왼쪽 숫자 포함 해서 6개

    printf("%g\n", 1234567.89);
    printf("%G\n\n", 1234567.89);

    double a = 123.456;
    double b = 0.0001234;
    double c = 1230000.0;

    printf("%g\n", a);  // 일반 표기법 
    printf("%g\n", b);  // 일반 표기법 ???
    printf("%g\n", c);  // 지수 표기법 

    return 0;
}







//%c
//%s

int main(void)
{
    char character = 'A'; // char 초기화
    printf("%c\n", character); // 문자 출력

    printf("%s\n", "This is a string"); // 문자열 출력

    char string[] = "This is a string"; // char 배열 초기화
    printf("%s\n", string); // 배열 내용 출력

    const char* stringPtr = "This is also a string"; // char 포인터 초기화
    printf("%s\n", stringPtr); // 포인터가 가리키는 문자열 출력

    return 0;
}









//%p: 주소값을 출력하기 위해 사용
//%% : %를 출력하기 위해

int main(void)
{
    int x = 12345; // int x 초기화
    int* ptr = &x; // x의 주소를 ptr에 할당   //ptr--> x

    printf("The value of ptr is %p\n", ptr); // ptr의 값 출력
    printf("The address of x is %p\n\n", &x); // x의 주소 출력

    printf("Printing a %% in a format control string\n"); // 포맷 제어 문자열에서 %% 출력

    return 0;
}





//field widths
//오른쪽정렬, 왼쪽정렬
//원하는 위치에 출력가능

int main(void)
{
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n", 12345); //초과시 그냥 출력

    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234); //초과시 그냥 출력
    printf("%4d\n", -12345); //초과시 그냥 출력

    return 0;
}







//precision 정밀도
//%.4d : 4자리의 정수로
//%.4f : 소수점 자리수가 4개
//%.3e : 소수점 자리수가 3개로 표현
//%.3g : 소수점 왼쪽 숫자 포함해서 3자리로 표현
//%.11s: 문자열 11개만 출력


//precision + field widths
//%9.3f: 9칸배정, 소수점 3자리수까지 표현(4자리에서 반올림)


//printf("%*.*f",7,2,98.736) 이런 표현도 가능 --> ㅁㅁ98.74출력

int main(void)
{
    puts("Using precision for integers"); // 정수에 대한 정밀도 사용
    int i = 873; // int i 초기화
    printf("\t%.4d\n\t%.9d\n\n", i, i); // 정수 출력 (정밀도 적용)

    puts("Using precision for floating-point numbers"); // 부동 소수점 숫자에 대한 정밀도 사용
    double f = 123.94536; // double f 초기화
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f); // 부동 소수점 출력 (정밀도 적용)

    puts("Using precision for strings"); // 문자열에 대한 정밀도 사용
    char s[] = "Happy Birthday"; // char 배열 s 초기화
    printf("%.11s\n", s); // 문자열 출력 (정밀도 적용)

    return 0;
}










//flag
// - : 왼쪽 정렬
int main(void) {
    printf("%-10d", 123);
}


// + : +문자 자체출력
//selfreview
int main(void) {
    printf("%10s%10s\n", "Fahrenheit", "Celsius");

    for (int i = 0; i <= 212; i++) {
        double Celsius = 5.0 / 9.0 * (i - 32);
        printf("%10d%+10.3f\n", i, Celsius); // + : +문자 자체출력
    }
}



//' ': 양수일때 ' ' 그대로 같이 출력
int main(void) {
    printf("% d\n% d\n", 547, -547);
}



// # : 몇진수인지 알수있도록! 8진수 출력값에 0을 미리 고정, 16진수 출력값에 0x or 0X 고정
//g랑 같이 쓰이면 소수점 0을 표현할 수 있다.
int main(void) {
    int c = 1427;
    printf("%#o\n",c);
    printf("%#x\n", c);
    printf("%#X\n\n", c);

    double p = 1427.0;
    printf("%g\n", p); //불필요한 0 제거
    printf("%#g\n", p); //소수점 표현하기 위해서
}


// 0 : 나머지 빈 공간에 0을 채운다 //%09d 9자리 배정, 남는 자리수에 0 채워 넣기



// 백슬래시(\) 통해서 escape가능. 







//scanf
//d: 정수
//i: 정수 + 8진수 + 16진수 , 0나 OX를 앞에 써서 정수,8진수,16진수를 구분한다.


int main(void) {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    puts("Enter seven integers: ");
    scanf_s("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f,&g);

    puts("\nThe input displayed as decimal integers is");
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g); //10진수로 바꿔서 출력함.

}



int main(void)
{

    
    double a; // double 변수 a 선언
    double b; // double 변수 b 선언
    double c; // double 변수 c 선언

    puts("Enter three floating-point numbers:"); // 사용자 입력 요청
    scanf_s("%le%lf%lg", &a, &b, &c); // 세 개의 부동 소수점 숫자 입력

    printf("\nHere are the numbers entered in plain:"); // 입력한 숫자 출력
    puts("floating-point notation:\n");
    printf("%f\n%f\n%f\n", a, b, c); // 입력한 숫자 출력
    

    printf("%2d\n", 1458);
    printf("%.2g", 12.34);

    return 0;
}



//char x;
// char y[9];
//scanf(%c%8s",&x,y)//입력한 수가 sunday일때 x에 s, y에 unday저장됨. 분리저장가능

//scan sets
//scanf("%8[aeiou]",&a ): 모음까지만 스캔
//scanf("%8[^aeiou]",&a) : 모음이 아닌것 까지만 스캔 8:읽을 최대의 문자.
//scanf("%d-%d-%d", &day,&month,&year)//특정 문자(-) 제외하고 스캔가능
//scanf("%d*c%d*c%d", &day,&month,&year)//어떤 문자이든지 제외하고 스캔가능
