#include <stdio.h>
#include <ctype.h>


//isdigit함수
//:특정 문자가 숫자인지를 확인하는데 사용
//주어진 문자가 '0'부터 '9'까지의 숫자일 경우에 참(0이 아닌 값)을 반환하고, 
// 그렇지 않으면 거짓(0)을 반환
/*
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isdigit(ch)) {
        printf("'%c'는 숫자입니다.\n", ch);
    }
    else {
        printf("'%c'는 숫자가 아닙니다.\n", ch);
    }

    return 0;
}
*/


/*
//isalpha함수
//:주어진 문자가 알파벳인지를 확인하는데 사용
//영문 대소문자(A-Z, a-z) 중 하나인 경우 -->  참을 반환
//숫자나 특수 문자, 공백 등의 경우 --> 거짓을 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isalpha(ch)) {
        printf("'%c'는 알파벳 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 알파벳 문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/


/*
//isalnum
//:주어진 문자가 알파벳이거나 숫자인지 여부를 확인하는 함수
//영문 대소문자(A-Z, a-z)나 숫자(0-9) 중 하나인 경우 --> 참(0이아닌값)을 반환
//특수 문자나 공백 등의 경우 --> 거짓(0)을 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isalnum(ch)) {
        printf("'%c'는 알파벳 문자 또는 숫자입니다.\n", ch);
    }
    else {
        printf("'%c'는 알파벳 문자나 숫자가 아닙니다.\n", ch);
    }

    return 0;
}
*/



/*
//isxdigit
//:주어진 문자가 16진수 형식에 해당하는 숫자나 문자(A-F, a-f, 0-9)인지 여부를 확인하는 함수
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isxdigit(ch)) {
        printf("'%c'는 16진수 형식의 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 16진수 형식의 문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/

/*
int main(void)
{
    printf("%s\n%s%s\n%s%s\n\n","According to isdigit: ",
        isdigit('8') ? "'8' is a : " : "'8' is not a ", "digit", //조건? 참일시실행:거짓일시실행
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
//islower함수
//주어진 문자가 소문자인지 확인하는 함수
//입력된 문자가 영문 소문자(a-z)일 때만 참을 반환,대문자나 숫자, 특수 문자, 공백 등의 경우에는 거짓을 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (islower(ch)) {
        printf("'%c'는 소문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 소문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/


/*
//isupper
//주어진 문자가 대문자인지 확인하는 함수
//영문 대문자(A-Z)일 때만 참을 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("'%c'는 대문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 대문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/


/*
//tolower
//C 언어에서 주어진 문자를 소문자로 변환하는 함수
//문자가 대문자(A-Z)일 경우 해당 소문자(a-z)를 반환
//만약 소문자이거나 알파벳이 아닌 경우에는 원래 문자를 그대로 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    printf("변환된 문자: %c\n", tolower(ch));

    return 0;
}
*/



/*
//toupper
//주어진 문자를 대문자로 변환하는 함수
//문자가 소문자(a-z)일 경우 해당 대문자(A-Z)를 반환
//만약 대문자이거나 알파벳이 아닌 경우에는 원래 문자를 그대로 반환
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    printf("변환된 문자: %c\n", toupper(ch));

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
//주어진 문자가 공백 문자(whitespace)인지 확인하는 함수
//문자가 공백 문자일 경우에만 참을 반환
//공백 문자에는 스페이스(' '), 탭('\t'), 개행('\n'), 수직 탭('\v'), 폼 피드('\f'), 캐리지 리턴('\r') 등이 포함
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isspace(ch)) {
        printf("'%c'는 공백 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 공백 문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/



/*
//iscntrl --> 제어문자여부 확인할 수 있음
//주어진 문자가 제어 문자(control character)인지 확인하는 함수
//제어 문자에는 화면에 표시되지 않는 ASCII 문자들이 포함
//ASCII 코드 0에서 31까지와 127에 해당하는 문자가 제어 문자에 해당
//여기에는 줄바꿈('\n'), 탭('\t'), 캐리지 리턴('\r'), 벨('\a') 등의 문자가 포함
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf("%c", &ch);

    if (iscntrl(ch)) {
        printf("'%c'는 제어 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 제어 문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/



/*
//ispunct
//주어진 문자가 구두점 문자(punctuation character)인지 확인하는 함수
//구두점 문자에는 영문 대소문자와 숫자가 아닌 모든 인쇄 가능한 문자들이 포함됨
//예를 들어, !, ", #, $, %, &, ', (, ), *, +, ,, -, ., / 등의 특수 문자가 이에 해당
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (ispunct(ch)) {
        printf("'%c'는 구두점 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 구두점 문자가 아닙니다.\n", ch);
    }

    return 0;
}
*/



/*
//isprint
//주어진 문자가 출력 가능한 문자(printable character)인지 확인하는 함수
//출력 가능한 문자에는 모든 영문 대소문자, 숫자, 구두점 문자, 그리고 공백 문자가 포함
//화면에 표시되지 않는 제어 문자는 출력 불가능한 문자로 간주
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf("%c", &ch);

    if (isprint(ch)) {
        printf("'%c'는 출력 가능한 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 출력 불가능한 문자입니다.\n", ch);
    }

    return 0;
}
*/


/*
//isgraph
//주어진 문자가 출력 가능한 문자 중 공백이 아닌 문자--> 참을반환
//출력 가능한 문자에는 영문 대소문자, 숫자, 구두점 등이 포함되며, 단순 공백(' ')은 제외
int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf_s("%c", &ch);

    if (isgraph(ch)) {
        printf("'%c'는 출력 가능한 공백이 아닌 문자입니다.\n", ch);
    }
    else {
        printf("'%c'는 공백이거나 출력 불가능한 문자입니다.\n", ch);
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