#include <stdio.h>


int main(void) {

	int a = 7;
	printf("a���� �ּҴ� %d�Դϴ�.\n", &a);

	 
	int * pointer; //������ ����
	pointer = &a;
	printf("pointer�� ���� %d�̰� ����Ű�� ���� %d�Դϴ�.", pointer, *pointer);
	
	*pointer = 8; //a�� �� �ٲٱ�
	printf("a�� ���� %d�Դϴ�.", a);

	return 0;
}






// �Լ� ������Ÿ��
void cubeByReference(int* nPtr); // �����͸� �Ű������� �޴� �Լ�

int main(void) {
	int number = 5; // ���� �ʱ�ȭ

	printf("The original value of number is %d\n", number); // ���� �� ��� 

	// number�� �ּҸ� cubeByReference�� ����
	cubeByReference(&number);

	printf("The new value of number is %d\n", number); // �� �� ���

	return 0;
}

// *nPtr�� �������� ���; ������ main�� number�� �����մϴ�.     // nPtr -> number
void cubeByReference(int* nPtr) {
	//�״ϱ� *nPtr�� �����ϴ� �޸� ��ġ�� 
	//&number�� �����ϴ� �޸� ��ġ�� ���Ƽ� ������ �� �ִ�!!!
	*nPtr = *nPtr * *nPtr * *nPtr; // nPtr�� ������             
}





// �� ������ ���� ��ȯ�ϴ� �Լ�
void swap(int* a, int* b) {                                   //x
	int temp = *a; // temp = 5                          //a ->| 5 |        
	*a = *b;       // *a = 10    
	*b = temp;    // *b = 5
}

int main() {
	int x = 5;
	int y = 10;

	printf("��ȯ ��: x = %d, y = %d\n", x, y);
	swap(&x, &y); // x�� y�� �ּҸ� ���� //pass by reference
	printf("��ȯ ��: x = %d, y = %d\n", x, y);

	return 0;
}









//int a : a�� ���� ���� �� ����
//const int a  : a�� ���� ���� �� ����
//int * const aPtr : aPtr�� a�� ����ų �� ����, a�� ��������
//const int * const aPtr: aPtr�� a�� ����ų �� ����, a�� ���� ���� �� ���� ������.

//constant : ���Ծ���