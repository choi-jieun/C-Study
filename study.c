#include <stdio.h>

int main_study(void) {
	//실수형 변수 float, double
	float f = 46.578;
	printf("%f\n", f);

	float g = 46.578;
	printf("%.2f\n", g); // 소수점 2자리 수까지 표현( 소수점 3자리 수에서 반올림)

	double h = 46.578;
	printf("%.2f\n", h); // 소수점 2자리 수까지 표현, lf/f로 씀



	//!(c == d)는 c != d 랑 같은 말
	int c = 5;
	int d = 6;

	if (!(c == d)) {
		printf("c와 d는 다릅니다.");
	}

	if (c != d) {
		printf("c와 d는 다릅니다.\n");
	}


	//getchar 함수:  한 개의 문자를 읽어오는 함수
	int ch;

	printf("문자를 입력하세요: ");
	ch = getchar(); // 사용자로부터 가장 왼쪽의 한 문자를 읽음. 

	printf("입력한 문자: %c\n", ch);




	// d++ vs ++d
   //print안에서
	int j = 20;
	printf("d는 %d\n", j++); //20출력  //d++은 printf문장 수행 '후' +1이 됨.
	printf("d는 %d\n", ++j); //22출력  //++d는 printf문장 수행 '전' +1이 됨.

	//while 안에서
	int o = 1;
	while (o++ <= 10) {
		printf("이것만 하고 자자\n"); //10번 출력 //while문 수행 후에 ++함
	}
	puts("");

	int v = 1;
	while (++v <= 10) {
		printf("이것만 하고 자자\n"); //9번 출력
	}


	//for문 안에서 ++a와 a++은 같다!!



}

