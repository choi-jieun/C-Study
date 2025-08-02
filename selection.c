//if...else
//if... else if ...else if... else
//switch ...case..case..case...default    + break
#include <stdio.h>
#include <time.h>



int main(void) {

	//랜덤, switch
	//컴퓨터가 가위바위보를 내는 프로그램

	srand(time(NULL)); //초기화

	int i = rand() % 3;// 0,1,2 중에서 무작위로 냄
	
	switch (i) {
	case 0:
		puts("가위");
		break; // break 해줘야 함. 안하면 아랫 문장들 모두 실행됨.
	case 1:
		puts("바위");
		break;
	case 2:
		puts("보");
		break;
	default: // 0도 아니고 1도 아니고 2도 아닌 나머지 경우(사실 없음)
		puts("몰라요");




	}




	return 0;
}
