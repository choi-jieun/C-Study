#include <stdio.h>


int main(void) {

    
    //for��
    for (int a = 0; a < 10; ++a) { //for�� �ȿ��� ++a�� a++�� ����!!
        printf("ȭ���� ������ \n");
    }
    puts("");

    for (int a = 0; a < 10; a++) {
        printf("ȭ���� ������ \n");
    }


    //����for��
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        puts("");
    }
    puts("");
    puts("");

    //�Ųٷ� ��
    for (int k = 0; k < 6; k++) { //0,1,2,3,4,5
        for (int j = k; j <= 4; j++) {
            printf("S");
        }
        for (int j = 0; j <= k; j++) {
            printf("*");
        }
        puts("");
    }


    //while
    int a = 0;
    while (a < 5) {
        printf("%s", "�� ����Ⱓ ���� ������ ���ڴ�.\n");
        a++;
    }
    





    
    //do while
    int b = 0;
    do {
        printf("���賡���� ��������� ��\n"); //�ϴ� ���� ����
       b++;
    } while (b < 5);
    

   

    return 0;
}
*/



/*
SSSSS*
SSSS**
SSS***
SS****
S*****
******
*/