#include <stdio.h>

int main_study(void) {
	//�Ǽ��� ���� float, double
	float f = 46.578;
	printf("%f\n", f);

	float g = 46.578;
	printf("%.2f\n", g); // �Ҽ��� 2�ڸ� ������ ǥ��( �Ҽ��� 3�ڸ� ������ �ݿø�)

	double h = 46.578;
	printf("%.2f\n", h); // �Ҽ��� 2�ڸ� ������ ǥ��, lf/f�� ��



	//!(c == d)�� c != d �� ���� ��
	int c = 5;
	int d = 6;

	if (!(c == d)) {
		printf("c�� d�� �ٸ��ϴ�.");
	}

	if (c != d) {
		printf("c�� d�� �ٸ��ϴ�.\n");
	}


	//getchar �Լ�:  �� ���� ���ڸ� �о���� �Լ�
	int ch;

	printf("���ڸ� �Է��ϼ���: ");
	ch = getchar(); // ����ڷκ��� ���� ������ �� ���ڸ� ����. 

	printf("�Է��� ����: %c\n", ch);




	// d++ vs ++d
   //print�ȿ���
	int j = 20;
	printf("d�� %d\n", j++); //20���  //d++�� printf���� ���� '��' +1�� ��.
	printf("d�� %d\n", ++j); //22���  //++d�� printf���� ���� '��' +1�� ��.

	//while �ȿ���
	int o = 1;
	while (o++ <= 10) {
		printf("�̰͸� �ϰ� ����\n"); //10�� ��� //while�� ���� �Ŀ� ++��
	}
	puts("");

	int v = 1;
	while (++v <= 10) {
		printf("�̰͸� �ϰ� ����\n"); //9�� ���
	}


	//for�� �ȿ��� ++a�� a++�� ����!!



}

