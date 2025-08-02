#include <stdio.h>



//gerchar�Լ�
//getchar�� ����ڷκ��� �Է¹��� �� ���ڸ� �а�, �� ���ڸ� ��ȯ��
//getchar�� ȣ���ϸ�, �Լ��� �Է� ���ۿ��� �� ���ھ� �о��

/*
int main() {
    char ch;

    printf("�ϳ��� ���ڸ� �Է��ϼ���: ");
    ch = getchar(); // ����� �Է��� ����

    printf("�Է��� ����: '%c'\n", ch); // �Է��� ���ڸ� ���

    return 0;
}
*/

/*
int main() {
    char ch;

    printf("���� ���ڸ� �Է��ϼ��� (Ctrl+z�� ����):\n");
    while ((ch = getchar()) != EOF) { // EOF (Ctrl+D �Ǵ� Ctrl+Z)�� ����
        printf("�Է��� ����: '%c'\n", ch);
    }

    return 0;
}
*/

//EOF�� end of file�� ����. C ���� EOF�� �����̳� ��Ʈ������ �� �̻� ���� �� �ִ� �����Ͱ� ���ٴ� ���� ��Ÿ����, �Ϲ������� -1�� ����
//getchar�Լ��� ���� �Է� �� �� ���� --> ���ͱ��� �Է����� �ν�

/*
#define SIZE 80

int main(void)
{
    int c; // ����� �Է��� ���� ����
    char sentence[SIZE]; // char �迭 ����
    int i = 0; // ī���� i �ʱ�ȭ

    // ����ڿ��� �ؽ�Ʈ �Է� ��û
    puts("Enter a line of text:");

    // getchar�� �� ���ڸ� �б�
    while ((i < SIZE - 1) && (c = getchar()) != '\n') { 
        sentence[i++] = c; //sentence[0]=c ���� �Ŀ� i�� ++�� ��.
    }

    sentence[i] = '\0'; // ���ڿ� ���� sentence[79]=\0

    // ���� ���
    puts("\nThe line entered was:");
    puts(sentence);

    return 0;
}
*/


//putchar()
/*
int main() {
    putchar('A');  // 'A' ���ڸ� ���
    putchar('\n');  // �ٹٲ��� ���
    return 0;
}
*/

//fgets
//file gets
//�����̳� ������Է����κ��� �� ���� ���ڿ��� �о���� �� ���Ǵ� �Լ�
/*
int main() {
    char buffer[100];  // �Է��� ������ ���۳���

    printf("���ڿ��� �Է��ϼ���: ");

    // ǥ�� �Է����κ��� �ִ� 99���� ���ڸ� ���� (�������� null ����)
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("�Է��� ���ڿ�: %s", buffer);
    }
    else {
        printf("�Է� ���� �߻�!\n");
    }

    return 0;
}
*/

/*
char *fgets(char *str, int n, FILE *stream);
str: ���� ���ڿ��� ������ �迭�� �������Դϴ�.
n: ���� �ִ� ���� ���� �����ϴ� �����Դϴ�. 
   �� ���� ������ ũ�⸦ ��Ÿ���ϴ�. 
   n���� �ϳ� ���� ũ�⸸ŭ�� ���ڸ� �а�, 
   ���������� null ����('\0')�� �ڵ����� �߰��˴ϴ�.
stream: ���ڿ��� �о�� ���� ��Ʈ���Դϴ�. 
   �Ϲ������� stdin�� ����Ͽ� ǥ�� �Է����κ��� ���� �� �ֽ��ϴ�.
*/

/*
#define SIZE 80 //����� �Է½� �ִ� 79�ڱ��� ���� �� ����.

void reverse(const char* const sPtr); // ������Ÿ��

int main(void)
{
    char sentence[SIZE]; // char �迭 ����

    puts("Enter a line of text:"); // ����ڿ��� �Է� ��û

    // fgets�� ����Ͽ� �ؽ�Ʈ �� �б�(sentence �迭�� ����)
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is:"); // ����� �޽���
    reverse(sentence); // ���ڿ��� �������� ���
}

// ���ڿ����� ���ڸ� �������� ����ϴ� ��� �Լ�
void reverse(const char* const sPtr) //sPtr -> sentence
{
 
    if ('\0' == sPtr[0]) {
        // ���ڿ��� ���� ����������
        return; //�Լ�ȣ�� ����
    }
    else { // ���ڿ��� ���� �������� �ʾ��� ���
        reverse(&sPtr[1]); // ��� ȣ�� 
        //�ι�° ������ �ּҸ� �������°�, 
        // �̴� ���ڿ� �ι�° ���ں��� �������� ����Ű�� ���ο� �����Ͱ� ��.
        putchar(sPtr[0]); // ���ڸ� ǥ��
    }
}
*/







//sprintf
//string printf
//���ڿ� �������� �����͸� ����ϱ� ���� ����ϴ� �Լ�. ���ڿ��� �����Ѵ�
/*
int main() {
    char buffer[100];  // ���ڿ��� ������ ����
    int num = 42;
    const char* name = "Alice";

    // ���ۿ� ����ȭ�� ���ڿ��� ����
    sprintf_s(buffer,sizeof(buffer), "�̸�: %s, ����: %d", name, num);
    //sprintf(��°���� ������ ������Ű��������,������Ǽ���,������μ���)

    printf("����� ���ڿ�: %s\n", buffer);

    return 0;
}
*/


/*
int main() {
    char date[100];
    int year = 2024, month = 11, day = 4;

    // ��¥�� "YYYY-MM-DD" �������� ����
    sprintf_s(date,sizeof(date), "%4d-%2d-%2d", year, month, day);

    printf("����� ��¥ ���ڿ�: %s\n", date);

    return 0;
}
*/

/*
#define SIZE 80

int main(void)
{
    int x; // �Էµ� x ��
    double y; // �Էµ� y ��

    puts("Enter an integer and a double:"); // ����� �Է� ��û
    scanf_s("%d%lf", &x, &y); // ������ �Ǽ� �Է�

    char s[SIZE]; // char �迭 ����
    sprintf_s(s,SIZE, "integer:%d\ndouble:%7.2f", x, y); // ����ȭ�� ��� ����

    printf("%s\n", "The formatted output stored in array s is:"); // ��� �޽���
    printf("%s\n", s); // �迭 s�� ���� ���

    return 0;
}
*/








/*
//sscanf
//string scanf
//ǥ���Է��� �ƴ϶� ���ڿ����� �о�´�.
int main() {
    const char* data = "42 Alice";
    int num;
    char name[20];

    // data���� ������ ���ڿ��� ���� num�� name�� ����
    sscanf_s(data,"%d %s", &num, name, sizeof(name));
    //sscanf(�����о�ù��ڿ�����Ű��������,�����·��о����,��������������,ũ��)

    printf("����: %d, �̸�: %s\n", num, name);

    return 0;
}
*/


/*
int main(void)
{
    char s[] = "31298 87.375"; // �迭 s �ʱ�ȭ
    int x; // �Էµ� x ��
    double y; // �Էµ� y ��

    sscanf_s(s, "%d%lf", &x, &y); // ���ڿ����� ������ �Ǽ� �б�
    printf("%s\n%s%d\n%s%8.3f\n",
        "The values stored in character array s are:",
        "integer:", x,
        "double:", y); // �� ���

    return 0;
}
*/


























