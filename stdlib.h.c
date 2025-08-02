#include <stdio.h>
#include <stdlib.h> //standard library


/*
//strtod
//to double�� ����
//���ڿ��� �ε� �Ҽ���(double) ���ڷ� ��ȯ�ϴ� �� ���Ǵ� �Լ�
int main() {
    const char* str = "123.456abc";  // ��ȯ�� ���ڿ��� ����Ű�� ������  //str -->123.456abc
    char* endptr;  // ��ȯ�� ���� ���� ��ġ�� ������ ������ 
                   //��ȯ�� �Ϸ�� �� �� �����ʹ� ���� ������ ���� �ּҸ� ����Ų��.
    double value; 

    // ���ڿ��� double�� ��ȯ. ��ȯ�� �� ���� ���, 0.0�� ��ȯ.
    value = strtod(str, &endptr); 

    printf("��ȯ�� ��: %f\n", value); //�⺻������ %.6f�� ���� ���� ������ ���� ������ �Ҽ��� ���� 6�ڱ���� ����ϵ��� �����Ǿ�����.
    printf("��ȯ�� ���� ��ġ�� ����: '%s'\n", endptr);
    printf("endptr�� ����Ű�� ��: %c\n", *endptr);

    return 0;
}
*/



/*
int main() {
    char str[100];  // �Է� ���ڿ��� ������ �迭
    char* endptr;   // ��ȯ�� ���� ���� ��ġ�� ������ ������
    double value;

    printf("�ε� �Ҽ��� ���ڸ� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);  // ���ڿ� �Է� �ޱ�

    // ���ڿ��� double�� ��ȯ
    value = strtod(str, &endptr);

    // ��ȯ�� �� ���
    printf("��ȯ�� ��: %f\n", value);

    // ��ȯ�� ���� ��ġ�� ���� ���
    if (*endptr != '\0') {  // ��ȯ �� ���� ���ڰ� ���� ���
        printf("��ȯ�� ���� ��ġ�� ����: '%s'\n", endptr);
    }
    else {
        printf("��� ���ڰ� ��ȯ�Ǿ����ϴ�.\n");
    }

    return 0;
}
*/





/*
//strtol
// to long int
//���ڿ��� long int�ڷ������� ��ȯ
int main() {
    const char* str = "12345abc";  // ��ȯ�� ���ڿ�
    char* endptr;     // ��ȯ�� ���� ���� ��ġ�� ������ ������
    long int value;

    // 10�������� ��ȯ
    value = strtol(str, &endptr, 0);
    //3��° argument: ���ڿ��� � ������ �ؼ�����.. 
    // 10: �־��� ���ڿ��� 10������ �ؼ��ؼ� 10������ ��ȯ
    // 8:  �־��� ���ڿ��� 8������ �ؼ��ؼ� 10������ ��ȯ
    // 16: �־��� ���ڿ��� 16������ �ؼ��ؼ� 10������ ��ȯ
    // 2  :�־��� ���ڿ��� 2������ �ؼ��ؼ� 10������ ��ȯ --> 2���� 2������ �ؼ��� �� ����
    //0 : �־��� ���ڿ��� �պκ��� �ؼ��ؼ� �˾Ƽ� ������ �о� �ؼ��Ѵ�

    printf("��ȯ�� ��: %ld\n", value);
    printf("��ȯ�� ���� ��ġ�� ����: '%s'\n", endptr);
    // endptr�� ����Ű�� �ּҺ��� �����ϴ� ���ڿ� ��ü�� �����.
    //endptr�� 'a'�� ����Ű��, ����� abc�� ��


    //printf("endptr�� ����Ű�� ��: %s\n",* endptr);  //*endptr�� ���Ϲ��ڸ� ��ȯ�ϹǷ� �̸� %s�� ����ϸ� �ȵ�.(����)
    printf("endprt�� ����Ű�� ��: %c\n", *endptr);
    printf("endprt+1�� ����Ű�� ��: %c\n", *(endptr + 1));
    printf("endprt+2�� ����Ű�� ��: %c\n", *(endptr + 2));
    return 0;
}
*/

/*
���� ���, ����ڰ� ���ڿ� "123.456abc"�� �Է����� �� :

strtod �Լ��� "123.456" �κ��� ���� 123.456���� ��ȯ�մϴ�.
��ȯ�� ���� ��ġ�� 'a'��� �����Դϴ�.
endptr �����ʹ� �� 'a' ������ �ּҸ� ����Ű�� �˴ϴ�

���ڿ��� ������ ��ȯ�� �Ϸ�Ǿ��ٸ�, endptr�� ���ڿ��� ��(�� ���� '\0')�� ����ŵ�ϴ�.

*/



/*
//strtoul
//to unsigned long int
int main() {
    const char* str = "12345abc";  // ��ȯ�� ���ڿ�
    char* endptr;    // ��ȯ�� ���� ���� ��ġ�� ������ ������
    unsigned long value;

    // 10������ ��ȯ
    value = strtoul(str, &endptr, 8);

    // ��ȯ�� �� ���
    printf("��ȯ�� ��: %lu\n", value);

    // ��ȯ�� ���� ��ġ ������ ���ڿ� ���
    printf("��ȯ�� ���� ��ġ�� ����: '%s'\n", endptr);

    // endptr�� ����Ű�� ���� ���
    if (*endptr != '\0') {
        printf("endptr�� ����Ű�� ����: %c\n", *endptr);
    }
    else {
        printf("endptr�� ���ڿ��� ���� ����ŵ�ϴ�.\n");
    }

    return 0;
}
*/


/*
int main(void)
{
    const char* string = "1234567abc"; // ��ȯ�� ���ڿ�r
    char* remainderPtr; // ��ȯ�� ���� ���� ��ġ�� ������ ������

    unsigned long int x = strtoul(string, &remainderPtr, 0); //0->�˾Ƽ� �־��� ���ڿ��� 10������ �ν���

    printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
        "The original string is ", string,
        "The converted value is ", x,
        "The remainder of the original string is ", remainderPtr,
        "The converted value minus 567 is ", x - 567); //1234567-567 = 1234000

    return 0;
}
*/

