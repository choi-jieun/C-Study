#include <stdio.h>

//�Լ��� ����Ű�� ������!!



// �� ���� ������ ���ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// �� ���� ������ ���ϴ� �Լ�
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // int�� ��ȯ�ϰ� �� ���� int �Ű������� �޴� �Լ� ������ ����
    int (*func_ptr)(int, int);
    //�Լ� ������ ���� ����: ��ȯŸ�� (*�������̸�)(�Ű�����Ÿ��, ...);

    // �Լ� �����Ϳ� add �Լ��� �ּҸ� �Ҵ�
    func_ptr = &add;  //��-> add
    printf("add(10, 20) = %d\n", func_ptr(10, 20));  // �����͸� ���� �Լ� ȣ��        

    // �Լ� �����Ϳ� multiply �Լ��� �ּҸ� �Ҵ�
    func_ptr = &multiply;  ////��-> multifly
    printf("multiply(10, 20) = %d\n", func_ptr(10, 20));  // �����͸� ���� �Լ� ȣ��   

    return 0;
}
shourts  int  long   long long 
 float double long double
 