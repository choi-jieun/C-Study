#include <stdio.h>
#include <ctype.h>


//isdigit�Լ�
//:Ư�� ���ڰ� ���������� Ȯ���ϴµ� ���
//�־��� ���ڰ� '0'���� '9'������ ������ ��쿡 ��(0�� �ƴ� ��)�� ��ȯ�ϰ�, 
// �׷��� ������ ����(0)�� ��ȯ
/*
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isdigit(ch)) {
        printf("'%c'�� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/


/*
//isalpha�Լ�
//:�־��� ���ڰ� ���ĺ������� Ȯ���ϴµ� ���
//���� ��ҹ���(A-Z, a-z) �� �ϳ��� ��� -->  ���� ��ȯ
//���ڳ� Ư�� ����, ���� ���� ��� --> ������ ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isalpha(ch)) {
        printf("'%c'�� ���ĺ� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ���ĺ� ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/


/*
//isalnum
//:�־��� ���ڰ� ���ĺ��̰ų� �������� ���θ� Ȯ���ϴ� �Լ�
//���� ��ҹ���(A-Z, a-z)�� ����(0-9) �� �ϳ��� ��� --> ��(0�̾ƴѰ�)�� ��ȯ
//Ư�� ���ڳ� ���� ���� ��� --> ����(0)�� ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isalnum(ch)) {
        printf("'%c'�� ���ĺ� ���� �Ǵ� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ���ĺ� ���ڳ� ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/



/*
//isxdigit
//:�־��� ���ڰ� 16���� ���Ŀ� �ش��ϴ� ���ڳ� ����(A-F, a-f, 0-9)���� ���θ� Ȯ���ϴ� �Լ�
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isxdigit(ch)) {
        printf("'%c'�� 16���� ������ �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� 16���� ������ ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/

/*
int main(void)
{
    printf("%s\n%s%s\n%s%s\n\n","According to isdigit: ",
        isdigit('8') ? "'8' is a : " : "'8' is not a ", "digit", //����? ���Ͻý���:�����Ͻý���
        isdigit('#') ? "'#' is a : " : "'#' is not a ", "digit");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalpha: ",
        isalpha('A') ? "'A' is a : " : "'A' is not a ", "letter",
        isalpha('B') ? "'B' is a : " : "'B' is not a ", "letter",
        isalpha('8') ? "'8' is a : " : "'8' is not a ", "letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalnum: ",
        isalnum('A') ? "'A' is a : " : "'A' is not a ", "digit or a letter",
        isalnum('8') ? "'8' is a : " : "'8' is not a ", "digit or a letter",
        isalnum('#') ? "'#' is a : " : "'#' is not a ", "digit or a letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isxdigit: ",
        isxdigit('F') ? "'F' is a : " : "'F' is not a ", "hexadecimal digit",
        isxdigit('1') ? "'1' is a : " : "'1' is not a ", "hexadecimal digit",
        isxdigit('7') ? "'7' is a : " : "'7' is not a ", "hexadecimal digit",
        isxdigit('g') ? "'g' is a : " : "'g' is not a ", "hexadecimal digit");

    return 0;
}
*/











/*
//islower�Լ�
//�־��� ���ڰ� �ҹ������� Ȯ���ϴ� �Լ�
//�Էµ� ���ڰ� ���� �ҹ���(a-z)�� ���� ���� ��ȯ,�빮�ڳ� ����, Ư�� ����, ���� ���� ��쿡�� ������ ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (islower(ch)) {
        printf("'%c'�� �ҹ����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� �ҹ��ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/


/*
//isupper
//�־��� ���ڰ� �빮������ Ȯ���ϴ� �Լ�
//���� �빮��(A-Z)�� ���� ���� ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("'%c'�� �빮���Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� �빮�ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/


/*
//tolower
//C ���� �־��� ���ڸ� �ҹ��ڷ� ��ȯ�ϴ� �Լ�
//���ڰ� �빮��(A-Z)�� ��� �ش� �ҹ���(a-z)�� ��ȯ
//���� �ҹ����̰ų� ���ĺ��� �ƴ� ��쿡�� ���� ���ڸ� �״�� ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    printf("��ȯ�� ����: %c\n", tolower(ch));

    return 0;
}
*/



/*
//toupper
//�־��� ���ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ�
//���ڰ� �ҹ���(a-z)�� ��� �ش� �빮��(A-Z)�� ��ȯ
//���� �빮���̰ų� ���ĺ��� �ƴ� ��쿡�� ���� ���ڸ� �״�� ��ȯ
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    printf("��ȯ�� ����: %c\n", toupper(ch));

    return 0;
}
*/

/*
int main(void)
{
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to islower:",
        islower('p') ? "p is a " : "p is not a ", "lowercase letter",
        islower('P') ? "P is a " : "P is not a ", "lowercase letter",
        islower('5') ? "5 is a " : "5 is not a ", "lowercase letter",
        islower('!') ? "! is a " : "! is not a ", "lowercase letter");
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to isupper:",
        isupper('D') ? "D is a " : "D is not a ", "uppercase letter",
        isupper('d') ? "d is a " : "d is not a ", "uppercase letter",
        isupper('8') ? "8 is a " : "8 is not a ", "uppercase letter",
        isupper('$') ? "$ is a " : "$ is not a ", "uppercase letter");

    printf("%s%c\n%s%c\n%s%c\n%s%c\n",
        "u converted to uppercase is ", toupper('u'),
        "7 converted to uppercase is ", toupper('7'),
        "$ converted to uppercase is ", toupper('$'),
        "L converted to lowercase is ", tolower('L'));

    return 0;
}
*/












/*
//isspace
//�־��� ���ڰ� ���� ����(whitespace)���� Ȯ���ϴ� �Լ�
//���ڰ� ���� ������ ��쿡�� ���� ��ȯ
//���� ���ڿ��� �����̽�(' '), ��('\t'), ����('\n'), ���� ��('\v'), �� �ǵ�('\f'), ĳ���� ����('\r') ���� ����
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isspace(ch)) {
        printf("'%c'�� ���� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ���� ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/



/*
//iscntrl --> ����ڿ��� Ȯ���� �� ����
//�־��� ���ڰ� ���� ����(control character)���� Ȯ���ϴ� �Լ�
//���� ���ڿ��� ȭ�鿡 ǥ�õ��� �ʴ� ASCII ���ڵ��� ����
//ASCII �ڵ� 0���� 31������ 127�� �ش��ϴ� ���ڰ� ���� ���ڿ� �ش�
//���⿡�� �ٹٲ�('\n'), ��('\t'), ĳ���� ����('\r'), ��('\a') ���� ���ڰ� ����
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &ch);

    if (iscntrl(ch)) {
        printf("'%c'�� ���� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ���� ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/



/*
//ispunct
//�־��� ���ڰ� ������ ����(punctuation character)���� Ȯ���ϴ� �Լ�
//������ ���ڿ��� ���� ��ҹ��ڿ� ���ڰ� �ƴ� ��� �μ� ������ ���ڵ��� ���Ե�
//���� ���, !, ", #, $, %, &, ', (, ), *, +, ,, -, ., / ���� Ư�� ���ڰ� �̿� �ش�
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (ispunct(ch)) {
        printf("'%c'�� ������ �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ������ ���ڰ� �ƴմϴ�.\n", ch);
    }

    return 0;
}
*/



/*
//isprint
//�־��� ���ڰ� ��� ������ ����(printable character)���� Ȯ���ϴ� �Լ�
//��� ������ ���ڿ��� ��� ���� ��ҹ���, ����, ������ ����, �׸��� ���� ���ڰ� ����
//ȭ�鿡 ǥ�õ��� �ʴ� ���� ���ڴ� ��� �Ұ����� ���ڷ� ����
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &ch);

    if (isprint(ch)) {
        printf("'%c'�� ��� ������ �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� ��� �Ұ����� �����Դϴ�.\n", ch);
    }

    return 0;
}
*/


/*
//isgraph
//�־��� ���ڰ� ��� ������ ���� �� ������ �ƴ� ����--> ������ȯ
//��� ������ ���ڿ��� ���� ��ҹ���, ����, ������ ���� ���ԵǸ�, �ܼ� ����(' ')�� ����
int main() {
    char ch;

    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%c", &ch);

    if (isgraph(ch)) {
        printf("'%c'�� ��� ������ ������ �ƴ� �����Դϴ�.\n", ch);
    }
    else {
        printf("'%c'�� �����̰ų� ��� �Ұ����� �����Դϴ�.\n", ch);
    }

    return 0;
}
*/

/*
int main(void)
{
    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
        "According to isspace:",
        "Newline", isspace('\n') ? " is a " : " is not a ", "whitespace character",
        "Horizontal tab", isspace('\t') ? " is a " : " is not a ", "whitespace character",
        "%", isspace('%') ? " is a " : " is not a ", "whitespace character");

    printf("%s\n%s%s%s\n%s%s%s\n\n",
        "According to iscntrl:",
        "Newline", iscntrl('\n') ? " is a " : " is not a ", "control character",
        "$", iscntrl('$') ? " is a " : " is not a ", "control character");

    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n\n",
        "According to ispunct:",
        ";", ispunct(';') ? " is a " : " is not a ", "punctuation character",
        "Y", ispunct('Y') ? " is a " : " is not a ", "punctuation character",
        "#", ispunct('#') ? " is a " : " is not a ", "punctuation character");

    printf("%s\n%s%s%s\n%s%s%s\n\n",
        "According to isprint:",
        "$", isprint('$') ? " is a " : " is not a ", "printing character",
        "Alert", isprint('\a') ? " is a " : " is not a ", "printing character");

    printf("%s\n%s%s%s\n%s%s%s\n\n",
        "According to isgraph:",
        "Q", isgraph('Q') ? " is a " : " is not a ", "printing character other than a space",
        "Space", isgraph(' ') ? " is a " : " is not a ", "printing character other than a space");

    return 0;
}
*/