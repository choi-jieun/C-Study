//if...else
//if... else if ...else if... else
//switch ...case..case..case...default    + break
#include <stdio.h>
#include <time.h>



int main(void) {

	//����, switch
	//��ǻ�Ͱ� ������������ ���� ���α׷�

	srand(time(NULL)); //�ʱ�ȭ

	int i = rand() % 3;// 0,1,2 �߿��� �������� ��
	
	switch (i) {
	case 0:
		puts("����");
		break; // break ����� ��. ���ϸ� �Ʒ� ����� ��� �����.
	case 1:
		puts("����");
		break;
	case 2:
		puts("��");
		break;
	default: // 0�� �ƴϰ� 1�� �ƴϰ� 2�� �ƴ� ������ ���(��� ����)
		puts("�����");




	}




	return 0;
}
