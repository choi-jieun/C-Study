#include <stdio.h>


struct Gameinfo {
	char* name; //포인터를 사용하면 게임이름에 따라 유동적으로 메모리를 할당할 수 있음.
	int year;
	int price;
	char* company;
	
	struct Gameinfo * friendGame;//구조체안에 구조체 //연관업체게임
};

typedef struct Gameinformation {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame;//구조체안에 구조체 //연관업체게임
} GAME_INFO; //구조체 이름이 GAME_INFO임. struct Gameinformation = GAME_INFO


//int main(void) {
//
//	//구조체 사용
//	struct Gameinfo gameinfo1;//gameinfo1구조체 생성
//	gameinfo1.name = "지은게임";
//	gameinfo1.year = 2017;
//	gameinfo1.price = 10000;
//	gameinfo1.company = "지은회사";
//	
//
//	//구조체 출력
//	printf("게임명 : %s\n", gameinfo1.name);
//
//	//구조체를 배열처럼 초기화
//	struct Gameinfo gameinfo2 = { "너도게임",2017,100,"너도회사" };
//	printf("게임명 : %s\n", gameinfo2.name);
//
//
//	//구조체 배열
//	struct Gameinfo gameArray[2] = {
//		{"나도게임",2017,50,"나도회사"},
//		{"재민게임",2024,40000,"재민회사"}
//	};
//	printf("게임명 : %s\n", gameArray[0].name);
//
//	//구조체 포인터 설정.
//	struct Gameinfo* gamePtr;
//	gamePtr = &gameinfo1;
//	printf("\n게임명 : %s\n", gamePtr->name);
//	printf("게임명 : %s\n", (*gamePtr).name);
//
//
//	//구조체안에 구조체
//	gameinfo1.friendGame = &gameinfo2;
//	printf("\ngameinfo2 게임명 : %s\n", gameinfo1.friendGame->name);
//
//
//	//typedef
//	typedef struct Gameinfo 게임정보; //struct Gameinfo = 게임정보
//	게임정보 gameinfo3 = { "영희게임",1974,4000,"영희회사" };
//	printf("게임명 : %s\n", gameinfo3.name);
//
//	GAME_INFO gameinfo4 = { "은택게임",1972,7000,"은택회사" };
//	printf("게임명 : %s\n", gameinfo4.name);
//
//
//	return 0;
//}
