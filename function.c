#include <stdio.h>
#include <math.h>


int maximum(int x, int y, int z); //main�Լ� ���� �Լ� ������Ÿ�� ����
int square(int x);

int main_function(void) {

    //sqrt �Լ�
    double num = 16.0;
    double result = sqrt(num); //sprt�Լ��� ���� �������� ��ȯ��.

    printf("%.2f�� �������� %.2f �̴�.\n", num, result);
 


   num = 9.5;
   result = sqrt(num); //sprt�Լ��� ���� �������� ��ȯ��.

    printf("%.2f�� �������� %.5f �̴�.\n", num, result);


    puts("-------------------------------------------------");


    //������ ���߿� �ִ밪�� �˷��ִ� �Լ�.

    int a = 1;
    int b = 3;
    int c = 7;
    maximum(a, b, c); //�Լ� ȣ�� 
    



    //�Լ��� �䱸�ϴ� �Ű������� Ÿ�԰� ���� Ÿ���� ���� ��� 
    //--> �˾Ƽ� Ÿ���� ���� �䱸�Ǵ� Ÿ������ ��ȯ��Ų��.

    double h = 4.5;
    printf("%d", square(h));// �Լ�ȣ�� //16��ȯ

    return 0;


}


//������ ���߿� �ִ밪�� �˷��ִ� �Լ�
int maximum(int x, int y, int z) { //�����Լ� �ۿ� �Լ� �� �᳻������
    int max = x;

    if (max < y) {
        max = y;
    }
    if (max < z) {
        max = z;
    }
    printf("%d\n", max);
    return max;
    
}


 
//������ ���ִ� �Լ�.
int square(int x){
    
    return x * x;
}










//�츮�� ���� ������� ���� �Լ� ��� �� �� ����.
int main(void) {

    int a = 4;
    printf("%d", jieun(a));// �Լ�ȣ�� //16��ȯ



    return 0;
}
