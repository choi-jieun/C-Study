#include <stdlib.h> // ǥ�� ���̺귯�� ���� (rand, srand ��)
#include <stdio.h>  // ����� �Լ� ���� (printf ��)
#include <time.h>   // �ð� ���� �Լ� ���� (time �Լ�)

/*
//�迭�� ����Ʈ���� 
//sizeof: ����Ʈ ���� ��ȯ
#define SIZE 20

size_t getSize(float* ptr); // ������Ÿ��

int main(void)
{
    float array[SIZE]; // float�ڷ��� 20�� ������ �迭 ����

    printf("The number of bytes in the array is %zu"
        "\nThe number of bytes returned by getSize is %zu\n",
        sizeof(array), getSize(array));
}

// ptr�� ũ�⸦ ��ȯ(����Ʈ ��)
size_t getSize(float* ptr) //�����͸� �Ű������ι���
{
    return sizeof(ptr); //����Ʈ ��ü�� ũ�� �ǹ�. => 8��ȯ
}
*/




//�迭�� ��Ұ� ������?




//int���� ����Ű�� ������
int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3];  // intŸ���� ���� ����Ű�� �����͸� �����ϴ� �迭 ����    // int* / arr[3] ���� ��� ����

    // �迭�� �� ��ҿ� ������ �ּҸ� �Ҵ�
    arr[0] = &a;
    arr[1] = &b;      //{�� �� ��}
    arr[2] = &c;      // |  |  |
    // a  b  c

// ������ �迭�� ���� �� ���
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]�� ����Ű�� ��: %d\n", i, *arr[i]);
    }

    return 0;
}








//char���� ����Ű�� ������

int main() {
    // ���ڿ��� ����Ű�� �����͵��� �迭
    const char* arr[3];                             

    // �� �����Ͱ� ���ڿ��� ����Ű���� ����
    arr[0] = "Hello";
    arr[1] = "World";
    arr[2] = "C programming";
     
    //{��      ��          ��}
    // |       |           |
    //"Hello" "World"  "C programming"
    
    //'H' 
    //'e' 
    //'l' 
    //'l' 
    //'o'


    // �迭 ��Ҹ� ���� ���ڿ� ���
    for (int i = 0; i < 3; i++) { 
        printf("arr[%d]�� ����Ű�� ���ڿ�: %s\n", i, arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("arr[%d]�� ����Ű�� ��: %c\n", i, *arr[i]);
    }

    printf("arr[0]+1�� ����Ű�� ��: %c\n", *(arr[0] + 1));
    printf("arr[0]+2�� ����Ű�� ��: %c\n", *(arr[0] + 2));
    printf("arr[0]+3�� ����Ű�� ��: %c\n", *(arr[0] + 3));
    printf("arr[0]+4�� ����Ű�� ��: %c\n", *(arr[0] + 4));
    printf("arr[0]+5�� ����Ű�� ��: %c\n", *(arr[0] + 5));

    return 0;
}









//�Լ��� ����Ű�� ������


// ��� ���� �Լ��� ����
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("0���� ���� �� �����ϴ�!\n");
        return 0;
    }
}

int main() {
    // �Լ� ������ �迭 ���� �� �ʱ�ȭ
    int (*func_ptr[4])(int, int) = { add, subtract, multiply, divide };
    //��ȯŸ�� (*�迭�̸�[�迭ũ��])(�Ű�����Ÿ��1, �Ű�����Ÿ��2, ...); = �Լ� ǥ���� �迭 ���� ����

    int choice, x, y;

    printf("�� ������ �Է��ϼ���: ");
    scanf_s("%d %d", &x, &y);

    printf("���ϴ� ������ �����ϼ���:\n");
    printf("0: ����\n1: ����\n2: ����\n3: ������\n");
    scanf_s("%d", &choice);

    // �Է°��� ���� �ش� ������ ����
    if (choice >= 0 && choice < 4) {
        printf("���: %d\n", func_ptr[choice](x, y));  // �Լ� ������ �迭�� ���� �Լ� ȣ��
                             //�Լ������͹迭���̸�[�ε���](�μ�1, �μ�2, ...); = ����
    }
    else {
        printf("�߸��� �����Դϴ�!\n");
    }

    return 0;
}





// �� ������ ���ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// �� ������ ���� �Լ�
int subtract(int a, int b) {
    return a - b;
}


int main(void) {
    int(*pointer)(int,int) = &add; //�Լ� ������ ����   //pointer -> add

    int result = pointer(10, 20); //�����͸� �̿��� �Լ� ȣ��
    printf("%d",result);

}






// �� ������ ���ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// �� ������ ���� �Լ�
int subtract(int a, int b) {
    return a - b;
}


int main(void) {
    int(*pointer[3])(int, int) = { add,subtract }; //�Լ� ������ �迭���� = ���� ������ ���� ����ũ��([])�� �߰����ָ� ��.
    int result = pointer[0](10, 20); //�����͹迭�� �̿��� �Լ��� ȣ��.
    printf("%d", result);
  
}











int main() {
    // �Լ� ������ �迭 ���� �� �ʱ�ȭ
    int (*func_ptr[2])(int, int) = { add, subtract }; 

    //{��   ��}
    // |    |
    // add  subtract

    int x = 10, y = 5;

    // �Լ� ������ �迭�� ���� �Լ� ȣ��
    printf("add(10, 5) = %d\n", func_ptr[0](x, y));       // add �Լ� ȣ��
    printf("subtract(10, 5) = %d\n", func_ptr[1](x, y));  // subtract �Լ� ȣ��

    return 0;
}
