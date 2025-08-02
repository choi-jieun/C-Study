#include <stdio.h>
#include <string.h>

/*
//strcpy
//string copy
//���ڿ��� �����ϴ� �Լ�
int main() {
    char src[] = "Hello, World!";
    char dest[20];  // ����� ũ�⸦ ���� �迭 ����

    // src ���ڿ��� dest�� ����
    strcpy_s(dest, sizeof(dest), src);
    //strcpy(������ ���ڿ� ������ ��,�װ���ũ������,������ ���� ���ڿ�)

    printf("���� ���ڿ�: %s\n", src);
    printf("����� ���ڿ�: %s\n", dest);

    return 0;
}
*/


/*
//strncpy
//������ ���� ������ŭ �����Ѵ�
int main() {
    const char* src = "Hello, World!";
    char dest[20];

    // src ���ڿ��� dest�� �ִ� 5���ڸ� ����
    strncpy_s(dest, sizeof(dest),src, 5); //str�� n���� �� ��� �ڵ����� null���ڰ� �߰����� ����.--> �����߰��������

    // null ���� �߰�
    dest[5] = '\0';

    printf("���� ���ڿ�: %s\n", src);
    printf("����� ���ڿ�: %s\n", dest);

    return 0;
}
*/

/*
#define SIZE1 25
#define SIZE2 15

int main(void)
{
    char x[] = "Happy Birthday to You"; // char �迭 x �ʱ�ȭ
    char y[SIZE1]; // char �迭 y ����
    char z[SIZE2]; // char �迭 z ����

    // x�� ������ y�� ����
    strcpy_s(y, SIZE1, x);
    printf("%s%s\n%s%s\n",
           "The string in array x is: ", x,
           "The string in array y is: ", y); // y�� ����

    // x�� ó�� 14�ڸ� z�� ����. null ���ڴ� �������� ����
    strncpy_s(z,SIZE2, x, SIZE2 - 1);
    z[SIZE2 - 1] = '\0'; // z���� ���ڿ� ����

    printf("The string in array z is: %s\n", z); // z�� ���� ���

    return 0;
}
*/








/*
//strcat
//string concatencate(�̾���̴�)
//���ڿ��� �����Ѵ�.
int main() {
    char dest[50] = "Hello, ";  // ����� ũ�⸦ ���� �迭 ����
    const char* src = "World!";  // �߰��� ���ڿ�

    // src ���ڿ��� dest�� ����
    strcat_s(dest,sizeof(dest), src);

    printf("��� ���ڿ�: %s\n", dest);

    return 0;
}
*/

/*
//strncat
int main() {
    char dest[50] = "Hello, ";  // ����� ũ�⸦ ���� �迭 ����
    const char* src = "World! This is a test.";  // �߰��� ���ڿ�

    // src ���ڿ��� dest�� �ִ� 6���ڱ��� ����
    strncat_s(dest,sizeof(dest), src, 6);

    printf("��� ���ڿ�: %s\n", dest);

    return 0;
}
*/

/*
int main(void)
{
    char s1[20] = "Happy "; // char �迭 s1 �ʱ�ȭ
    char s2[] = "New Year "; // char �迭 s2 �ʱ�ȭ
    char s3[40] = ""; // char �迭 s3�� �� ���ڿ��� �ʱ�ȭ

    printf("s1 = %s\ns2 = %s\n", s1, s2); // s1�� s2 ���

    // s2�� s1�� ����
    strcat_s(s1, 20, s2);
    printf("strcat(s1, s2) = %s\n", s1);

    // s1�� ó�� 6�ڸ� s3�� �����ϰ�, '\0'�� �������� ��ġ
    strncat_s(s3, 40, s1, 6);
    printf("strncat(s3, s1, 6) = %s\n", s3);

    // s1�� s3�� ����
    strcat_s(s3, 40, s1);
    printf("strcat(s3, s1) = %s\n", s3);

    return 0;
}
*/








/*
//strcmp
//string compare
//�� ���ڿ��� ������(->0), �� ���ڿ��� �ٸ� ���ڿ����� �� ū�� ������ �� 
// (ū���: 0���� ū����ȯ, �������: 0���� ���� �� ��ȯ. �������:0��ȯ)
//�� ���ڿ��� �� ũ��: �ƽ�Ű���� �� �ڿ� �ִ�.
// ù��°���ں��� ��. ���ٸ� �� ���� ���ں񱳷� �Ѿ
//����: apple�� banana ��
//a(65) b(66) ù���ں��� �񱳰���--> apple�� banana���� �� �۴� 
int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    const char* str3 = "Hello";

    // str1�� str2 ��
    int result1 = strcmp(str1, str2);
    // str1�� str3 ��
    int result2 = strcmp(str1, str3);

    // ��� ���
    if (result1 < 0) {
        printf("\"%s\"�� \"%s\"���� �۽��ϴ�.\n", str1, str2);
    }
    else if (result1 > 0) {
        printf("\"%s\"�� \"%s\"���� Ů�ϴ�.\n", str1, str2);
    }
    else {
        printf("\"%s\"�� \"%s\"�� �����ϴ�.\n", str1, str2);
    }

    if (result2 < 0) {
        printf("\"%s\"�� \"%s\"���� �۽��ϴ�.\n", str1, str3);
    }
    else if (result2 > 0) {
        printf("\"%s\"�� \"%s\"���� Ů�ϴ�.\n", str1, str3);
    }
    else {
        printf("\"%s\"�� \"%s\"�� �����ϴ�.\n", str1, str3);
    }

    return 0;
}
*/



/*
//strncmp
//������ ���̸�ŭ�� ��
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, everyone!";
    const char* str3 = "Hello, World!";
    const char* str4 = "Hello, World! Have a nice day.";

    // str1�� str2�� ó�� 5�� ���ڱ��� ��
    int result1 = strncmp(str1, str2, 5); // Hello vs Hello
    // str1�� str3�� ó�� 13�� ���ڱ��� ��
    int result2 = strncmp(str1, str3, 13); // Hello, World! vs Hello, World!
    // str1�� str4�� ó�� 10�� ���ڱ��� ��
    int result3 = strncmp(str1, str4, 10); // Hello, World vs Hello, World

    // ��� ���
    printf("str1 vs str2 (5 chars): %d\n", result1); // 0
    printf("str1 vs str3 (13 chars): %d\n", result2); // 0
    printf("str1 vs str4 (10 chars): %d\n", result3); // 0

    return 0;
}
*/

/*
int main(void)
{
    const char* s1 = "Happy New Year!"; // char ������ s1 �ʱ�ȭ
    const char* s2 = "Happy New Year!"; // char ������ s2 �ʱ�ȭ
    const char* s3 = "Happy Holidays"; // char ������ s3 �ʱ�ȭ

    printf("%s%s\n%s%s\n%s%s\n\n",
        "s1 = ", s1,
        "s2 = ", s2,
        "s3 = ", s3);

    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2)); // s1�� s2 �� s1= s3
    printf("strcmp(s1, s3) = %d\n", strcmp(s1, s3)); // s1�� s3 �� s1>s3
    printf("strcmp(s3, s1) = %d\n", strcmp(s3, s1)); // s3�� s1 ��

    printf("%d\n%d\n%d\n",
        strncmp(s1, s3, 6), // s1�� s3�� ó�� 6�� ��
        strncmp(s1, s3, 7), // s1�� s3�� ó�� 7�� ��
        strncmp(s3, s1, 7)); // s3�� s1�� ó�� 7�� ��

    return 0;
}
*/


/*
//strchr
//string character
//strchr(string, c): string���� ù��°�� �����ϴ� ���� c�� �ּҸ� ��ȯ.
//���� �ش� ���ڰ� ���ڿ��� ���ٸ� NULL�� ��ȯ.
int main(void)
{
    const char* string = "This is a test"; // char ������ �ʱ�ȭ
    char character1 = 'a'; // character1 �ʱ�ȭ
    char character2 = 'z'; // character2 �ʱ�ȭ

    // character1�� ���ڿ��� �ִ��� Ȯ��
    if (strchr(string, character1) != NULL) { // NULL�� �ƴ� ���
        printf("'%c' was found in \"%s\".\n", character1, string);
    }
    else { // character1�� ���� ���
        printf("'%c' was not found in \"%s\".\n", character1, string);
    }

    // character2�� ���ڿ��� �ִ��� Ȯ��
    if (strchr(string, character2) != NULL) { // NULL�� �ƴ� ���
        printf("'%c' was found in \"%s\".\n", character2, string);
    }
    else { // character2�� ���� ���
        printf("'%c' was not found in \"%s\".\n", character2, string);
    }

    return 0;
}
*/


/*
//strcspn
//string character span(����)
//Ư�����ڸ� �������� �ʴ� �κ��� ���̸� ��ȯ�ϴ� �Լ�
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = " ,!"; // ã���� �ϴ� ���� ����: ����, ��ǥ, ����ǥ

    // str1���� str2�� ���� �� �ϳ��� ��Ÿ���� �������� ���� ���
    size_t length = strcspn(str1, str2);

    // ��� ���
    printf("'%s'���� '%s'�� ���ڰ� ��Ÿ���� �������� ����: %zu\n", str1, str2, length);

    return 0;
}
*/
/*
int main(void)
{
    // �� ���� char ������ �ʱ�ȭ
    const char* string1 = "The value is 3.14159";
    const char* string2 = "1234567890";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n",
        "string1 = ", string1,
        "string2 = ", string2,
        "The length of the initial segment of string1 ",
        "containing no characters from string2 = ",
        strcspn(string1, string2));

    return 0;
}
*/


/*
//strspn
//string span(����)
//Ư�����ڵ�� �̷���� ���λ��� ���̸� ����ϴ� �Լ�
int main() {
    const char* str1 = "  Hello,  World!";  // �������� �����ϴ� ���ڿ�
    const char* str2 = " ,H";  // ã���� �ϴ� ���� ����: ����

    // str1�� ó������ str2�� ���ڷ� �̷���� ���λ� ���� ���
    size_t length = strspn(str1, str2);
    //strspn(�˻��ҹ��ڿ�, ã�����ϴ¹��������������� ���ڿ�)

    // ��� ���
    printf("'%s'���� '%s'�� ���ڰ� ���Ե� ���λ��� ����: %zu\n", str1, str2, length);
    //2 (���ڿ� ó���� ���� 2������)

    return 0;
}
*/
/*
int main(void)
{
    // �� ���� char ������ �ʱ�ȭ
    const char* string1 = "The value is 3.14159";
    const char* string2 = "aehi lsTuv";

    printf("%s%s\n%s%s\n%s\n%s%u\n",
        "string1 = ", string1,
        "string2 = ", string2,
        "The length of the initial segment of string1 ",
        "containing only characters from string2 = ",
        strspn(string1, string2));

    return 0;
}
*/





/*
//strpbrk
//string pick break
//Ư�������� ��ġ��ȯ
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = "aeiou"; // ã���� �ϴ� ���� ����: ����

    // str1���� str2�� ���� �� �ϳ��� ��Ÿ���� ��ġ ã��
    char* result = strpbrk(str1, str2);

    // ��� ���
    if (result != NULL) {
        printf("'%s'���� '%s'�� ���� �� �ϳ��� ó������ ��Ÿ���� ��ġ: '%c'\n", str1, str2, *result);
        printf("��ġ: %ld\n", result- str1); // ���� ��ġ ���(�� �����Ͱ��� ��)(1-0)
      
    }
    else {
        printf("'%s'���� '%s'�� ���ڰ� ���ԵǾ� ���� �ʽ��ϴ�.\n", str1, str2);
    }

    return 0;
}
*/

/*
int main(void)
{
    const char* string1 = "This is a test"; // char ������ string1 �ʱ�ȭ
    const char* string2 = "beware"; // char ������ string2 �ʱ�ȭ

    printf("%s\"%s\"\n'%c'%s\n\"%s\"",
        "Of the characters in ", string2,
        * strpbrk(string1, string2),
        " appears earliest in ", string1);

        return 0;
}
*/

/*
//strrchr
//string reverse(����) character
//Ư�����ڰ� ���������� ��Ÿ���� ��ġ���� �� ������ ���ڿ��� ��ȯ
int main(void)
{
    // char ������ �ʱ�ȭ
    const char* string1 = "A zoo has many animals including zebras";
    int c = 'z'; // �˻��� ����

    printf("%s\n%s'%c'%s%s\n",
        "The remainder of string1 beginning with the",
        "last occurrence of character ", c,
        "is: ", strrchr(string1, c));

    return 0;
}
*/


/*
//strstr
//string string
//string1���� string2�� ó������ ��Ÿ���� ��ġ���� �� ������ ���ڿ��� ����ϴ� ����.
int main(void)
{
    const char* string1 = "abcdefabcdef"; // �˻��� ���ڿ�
    const char* string2 = "def"; // �˻��� ���ڿ�

    printf("%s%s\n%s%s\n%s\n%s%s\n",
        "string1 = ", string1,
        "string2 = ", string2,
        "The remainder of string1 beginning with the",
        "first occurrence of string2 is: ",
        strstr(string1, string2));

    return 0;
}
*/





/*
//strtok
//string token(����)
//Ư�� ���ڿ��� �������� �ϳ��ϳ� �������� �����´�
// 
//�־��� ���ڿ��� ������ �������� �и��Ͽ� �� ��ū�� ���
int main(void) {
    //�迭�ʱ�ȭ
    char string[] = "This is a sentence with 7 tokens";

    printf("%s\n%s\n%s\n",
        "The string to be tokenized is:", string,
        "The tokens are:");

    char* nullptr = NULL; // ��ū�� ������ ������
    char* tokenPtr = strtok_s(string, " ",&nullptr); // ���ڿ��� �������� �и� ����
    //ù��° ȣ�⿡�� ���ڿ� �����ϰ�, ���� ȣ�⿡���� NULL�� �����ؼ� ���� ���ڿ��� ��� ���.
    //&nullptr :���������� ������ ������ ���.
    printf("%s\n", tokenPtr);
    printf("%s\n", nullptr);

    // tokenPtr�� NULL�� �� ������ ����ؼ� ���ڿ� ��ūȭ
    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr); // ���� ��ū ���
        printf("%s\n", nullptr);
        tokenPtr = strtok_s(NULL, " ", &nullptr); // ���� ��ū ��������
        
    }

    return 0;
}
*/


/*
//memcpy
//memory copy
//�ϳ��� �迭���� �ٸ� �迭�� �޸� ����� �����ϴ� �Լ�
int main(void)
{
    char s1[17]; // char �迭 s1 ����
    char s2[] = "Copy this string"; // char �迭 s2 �ʱ�ȭ

    memcpy(s1, s2, 17); // s2�� ������ s1���� ����
    printf("%s\n%s\"%s\"\n",
        "After s2 is copied into s1 with memcpy,",
        "s1 contains ", s1);

    return 0;
}
*/

/*
//memmove
//memmory move
//Ư�� ��ġ���� Ư�� ����Ʈ ���̸� ó�� ��ġ�� �̵���Ŵ. �̵��Ŀ� �������� �״�� ��µ�.
int main(void)
{
    char x[] = "Home Sweet *ome"; // ���� �迭 x �ʱ�ȭ

    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array x after memmove is: ",
        (char *)memmove(x, &x[5], 10));
              //x[5]��ġ���� �����ϴ� 10����Ʈ�� x�� ���� ��ġ�� �̵���Ŵ
              //���� �� ���ڿ� 1����Ʈ�̹Ƿ� "Sweet Home"�� x�迭�� ���ۺκп� �����.
               

    return 0;
}
*/

/*
int main(void) {
    char str[] = "Hello, World!";

    // memmove ���: "World!" �κ��� �迭�� ó������ �̵�
    memmove(str, str + 7, 6);  // 7��ġ���� 6����Ʈ�� ó����ġ�� �̵���Ŵ("World!"�� ������ 6����Ʈ ����
    str[6] = '\0';  // ���ڿ��� ���� null ���� �߰�

    printf("After memmove: %s\n", str);
    return 0;
}
*/



/*
//memcmp
//memory compare
int main(void)
{
    char s1[] = "ABCDEFG"; // ���� �迭 s1 �ʱ�ȭ
    char s2[] = "ABCDXYZ"; // ���� �迭 s2 �ʱ�ȭ

    printf("%s%s\n%s%s\n\n%s%d\n%s%d\n%s%d\n",
        "s1 = ", s1, "s2 = ", s2,
        "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4), //s1�� s2�� ó�� 4����Ʈ�� ��: ����-> 0
        "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7), //s1�� s2�� ó�� 7����Ʈ�� ��: E<X -> -1
        "memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7));//�׹ݴ� --> 1

    return 0;
}
*/


/*
//memchr
//memory character
//�־��� �޷θ� �������� Ư�� ���ڸ� ã�� �Լ�.
int main(void)
{
    const char* s = "This is a string"; // char ������ s �ʱ�ȭ //�б�����

    printf("%s%c%s\"%s\"\n",
        "The remainder of s after character '",   'r',
        "' is found is ", memchr(s, 'r', 16)); 
         //s���� 16����Ʈ������ �˻��Ͽ� r�� ã�� ã�� ��ġ�� ������ ��ȯ
         //%s�� ����ϴϱ� 'ring' ���
    return 0;
}
*/

/*
//memset
//memory set
int main(void)
{
    char string1[15] = "BBBBBBBBBBBBB"; // string1 �ʱ�ȭ

    printf("string1 = %s\n", string1);
    printf("string1 after memset = %s\n",
        memset(string1, 'b', 7)); // string1�� ó�� 7�� ���ڸ� 'b'�� ����

    return 0;
}
*/


/*
//strerror
//string error
int main(void) {
    char buffer[256]; //���� �޼����� ������ ����
    strerror_s(buffer,sizeof(buffer),2); //2���ش��ϴ� ���� �޼����� ���ۿ� ����.
    printf("%s\n", buffer );
    //2��� ���� ��ȣ�� �ش��ϴ� �������ڿ��� ��ȯ -> No such file or directory
}
*/

/*
//strlen
//string length
//���̸� �˷��ִ� �Լ�,
int main(void)
{
    // 3���� char ������ �ʱ�ȭ
    const char* string1 = "abcdefghijklmnopqrstuvwxyz";
    const char* string2 = "four";
    const char* string3 = "Boston";

    printf("%s%s \"%s\" %u\n%s%s \"%s\" %u\n%s%s \"%s\" %u\n",
        "The length of ", string1, " is ", strlen(string1),
        "The length of ", string2, " is ", strlen(string2),
        "The length of ", string3, " is ", strlen(string3));

    return 0;
}
*/
