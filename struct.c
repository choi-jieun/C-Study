#include <stdio.h>


struct Gameinfo {
	char* name; //�����͸� ����ϸ� �����̸��� ���� ���������� �޸𸮸� �Ҵ��� �� ����.
	int year;
	int price;
	char* company;
	
	struct Gameinfo * friendGame;//����ü�ȿ� ����ü //������ü����
};

typedef struct Gameinformation {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame;//����ü�ȿ� ����ü //������ü����
} GAME_INFO; //����ü �̸��� GAME_INFO��. struct Gameinformation = GAME_INFO


//int main(void) {
//
//	//����ü ���
//	struct Gameinfo gameinfo1;//gameinfo1����ü ����
//	gameinfo1.name = "��������";
//	gameinfo1.year = 2017;
//	gameinfo1.price = 10000;
//	gameinfo1.company = "����ȸ��";
//	
//
//	//����ü ���
//	printf("���Ӹ� : %s\n", gameinfo1.name);
//
//	//����ü�� �迭ó�� �ʱ�ȭ
//	struct Gameinfo gameinfo2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
//	printf("���Ӹ� : %s\n", gameinfo2.name);
//
//
//	//����ü �迭
//	struct Gameinfo gameArray[2] = {
//		{"��������",2017,50,"����ȸ��"},
//		{"��ΰ���",2024,40000,"���ȸ��"}
//	};
//	printf("���Ӹ� : %s\n", gameArray[0].name);
//
//	//����ü ������ ����.
//	struct Gameinfo* gamePtr;
//	gamePtr = &gameinfo1;
//	printf("\n���Ӹ� : %s\n", gamePtr->name);
//	printf("���Ӹ� : %s\n", (*gamePtr).name);
//
//
//	//����ü�ȿ� ����ü
//	gameinfo1.friendGame = &gameinfo2;
//	printf("\ngameinfo2 ���Ӹ� : %s\n", gameinfo1.friendGame->name);
//
//
//	//typedef
//	typedef struct Gameinfo ��������; //struct Gameinfo = ��������
//	�������� gameinfo3 = { "�������",1974,4000,"����ȸ��" };
//	printf("���Ӹ� : %s\n", gameinfo3.name);
//
//	GAME_INFO gameinfo4 = { "���ð���",1972,7000,"����ȸ��" };
//	printf("���Ӹ� : %s\n", gameinfo4.name);
//
//
//	return 0;
//}
