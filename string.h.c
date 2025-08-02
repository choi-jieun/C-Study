#include <stdio.h>
#include <string.h>

/*
//strcpy
//string copy
//문자열을 복사하는 함수
int main() {
    char src[] = "Hello, World!";
    char dest[20];  // 충분한 크기를 가진 배열 선언

    // src 문자열을 dest에 복사
    strcpy_s(dest, sizeof(dest), src);
    //strcpy(복사한 문자열 저장할 곳,그곳의크기전달,복사할 원본 문자열)

    printf("원본 문자열: %s\n", src);
    printf("복사된 문자열: %s\n", dest);

    return 0;
}
*/


/*
//strncpy
//지정한 문자 수개만큼 복사한다
int main() {
    const char* src = "Hello, World!";
    char dest[20];

    // src 문자열을 dest로 최대 5문자만 복사
    strncpy_s(dest, sizeof(dest),src, 5); //str이 n보다 길 경우 자동으로 null문자가 추가되지 않음.--> 직접추가해줘야함

    // null 문자 추가
    dest[5] = '\0';

    printf("원본 문자열: %s\n", src);
    printf("복사된 문자열: %s\n", dest);

    return 0;
}
*/

/*
#define SIZE1 25
#define SIZE2 15

int main(void)
{
    char x[] = "Happy Birthday to You"; // char 배열 x 초기화
    char y[SIZE1]; // char 배열 y 생성
    char z[SIZE2]; // char 배열 z 생성

    // x의 내용을 y로 복사
    strcpy_s(y, SIZE1, x);
    printf("%s%s\n%s%s\n",
           "The string in array x is: ", x,
           "The string in array y is: ", y); // y로 복사

    // x의 처음 14자를 z로 복사. null 문자는 복사하지 않음
    strncpy_s(z,SIZE2, x, SIZE2 - 1);
    z[SIZE2 - 1] = '\0'; // z에서 문자열 종료

    printf("The string in array z is: %s\n", z); // z의 내용 출력

    return 0;
}
*/








/*
//strcat
//string concatencate(이어붙이다)
//문자열을 연결한다.
int main() {
    char dest[50] = "Hello, ";  // 충분한 크기를 가진 배열 선언
    const char* src = "World!";  // 추가할 문자열

    // src 문자열을 dest에 연결
    strcat_s(dest,sizeof(dest), src);

    printf("결과 문자열: %s\n", dest);

    return 0;
}
*/

/*
//strncat
int main() {
    char dest[50] = "Hello, ";  // 충분한 크기를 가진 배열 선언
    const char* src = "World! This is a test.";  // 추가할 문자열

    // src 문자열을 dest에 최대 6문자까지 연결
    strncat_s(dest,sizeof(dest), src, 6);

    printf("결과 문자열: %s\n", dest);

    return 0;
}
*/

/*
int main(void)
{
    char s1[20] = "Happy "; // char 배열 s1 초기화
    char s2[] = "New Year "; // char 배열 s2 초기화
    char s3[40] = ""; // char 배열 s3를 빈 문자열로 초기화

    printf("s1 = %s\ns2 = %s\n", s1, s2); // s1과 s2 출력

    // s2를 s1에 연결
    strcat_s(s1, 20, s2);
    printf("strcat(s1, s2) = %s\n", s1);

    // s1의 처음 6자를 s3에 연결하고, '\0'을 마지막에 위치
    strncat_s(s3, 40, s1, 6);
    printf("strncat(s3, s1, 6) = %s\n", s3);

    // s1을 s3에 연결
    strcat_s(s3, 40, s1);
    printf("strcat(s3, s1) = %s\n", s3);

    return 0;
}
*/








/*
//strcmp
//string compare
//두 문자열이 같은지(->0), 한 문자열이 다른 문자열보다 더 큰지 작은지 비교 
// (큰경우: 0보다 큰값반환, 작은경우: 0보다 작은 값 반환. 같은경우:0반환)
//한 문자열이 더 크다: 아스키값상 더 뒤에 있다.
// 첫번째문자부터 비교. 같다면 그 다음 문자비교로 넘어감
//예시: apple과 banana 비교
//a(65) b(66) 첫글자부터 비교가능--> apple이 banana보다 더 작다 
int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    const char* str3 = "Hello";

    // str1과 str2 비교
    int result1 = strcmp(str1, str2);
    // str1과 str3 비교
    int result2 = strcmp(str1, str3);

    // 결과 출력
    if (result1 < 0) {
        printf("\"%s\"는 \"%s\"보다 작습니다.\n", str1, str2);
    }
    else if (result1 > 0) {
        printf("\"%s\"는 \"%s\"보다 큽니다.\n", str1, str2);
    }
    else {
        printf("\"%s\"는 \"%s\"와 같습니다.\n", str1, str2);
    }

    if (result2 < 0) {
        printf("\"%s\"는 \"%s\"보다 작습니다.\n", str1, str3);
    }
    else if (result2 > 0) {
        printf("\"%s\"는 \"%s\"보다 큽니다.\n", str1, str3);
    }
    else {
        printf("\"%s\"는 \"%s\"와 같습니다.\n", str1, str3);
    }

    return 0;
}
*/



/*
//strncmp
//지정된 길이만큼만 비교
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, everyone!";
    const char* str3 = "Hello, World!";
    const char* str4 = "Hello, World! Have a nice day.";

    // str1과 str2를 처음 5개 문자까지 비교
    int result1 = strncmp(str1, str2, 5); // Hello vs Hello
    // str1과 str3를 처음 13개 문자까지 비교
    int result2 = strncmp(str1, str3, 13); // Hello, World! vs Hello, World!
    // str1과 str4를 처음 10개 문자까지 비교
    int result3 = strncmp(str1, str4, 10); // Hello, World vs Hello, World

    // 결과 출력
    printf("str1 vs str2 (5 chars): %d\n", result1); // 0
    printf("str1 vs str3 (13 chars): %d\n", result2); // 0
    printf("str1 vs str4 (10 chars): %d\n", result3); // 0

    return 0;
}
*/

/*
int main(void)
{
    const char* s1 = "Happy New Year!"; // char 포인터 s1 초기화
    const char* s2 = "Happy New Year!"; // char 포인터 s2 초기화
    const char* s3 = "Happy Holidays"; // char 포인터 s3 초기화

    printf("%s%s\n%s%s\n%s%s\n\n",
        "s1 = ", s1,
        "s2 = ", s2,
        "s3 = ", s3);

    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2)); // s1과 s2 비교 s1= s3
    printf("strcmp(s1, s3) = %d\n", strcmp(s1, s3)); // s1과 s3 비교 s1>s3
    printf("strcmp(s3, s1) = %d\n", strcmp(s3, s1)); // s3와 s1 비교

    printf("%d\n%d\n%d\n",
        strncmp(s1, s3, 6), // s1과 s3의 처음 6자 비교
        strncmp(s1, s3, 7), // s1과 s3의 처음 7자 비교
        strncmp(s3, s1, 7)); // s3와 s1의 처음 7자 비교

    return 0;
}
*/


/*
//strchr
//string character
//strchr(string, c): string에서 첫번째로 등장하는 문자 c의 주소를 반환.
//만약 해당 문자가 문자열에 없다면 NULL을 반환.
int main(void)
{
    const char* string = "This is a test"; // char 포인터 초기화
    char character1 = 'a'; // character1 초기화
    char character2 = 'z'; // character2 초기화

    // character1이 문자열에 있는지 확인
    if (strchr(string, character1) != NULL) { // NULL이 아닌 경우
        printf("'%c' was found in \"%s\".\n", character1, string);
    }
    else { // character1이 없는 경우
        printf("'%c' was not found in \"%s\".\n", character1, string);
    }

    // character2가 문자열에 있는지 확인
    if (strchr(string, character2) != NULL) { // NULL이 아닌 경우
        printf("'%c' was found in \"%s\".\n", character2, string);
    }
    else { // character2가 없는 경우
        printf("'%c' was not found in \"%s\".\n", character2, string);
    }

    return 0;
}
*/


/*
//strcspn
//string character span(범위)
//특정문자를 포함하지 않는 부분의 길이를 반환하는 함수
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = " ,!"; // 찾고자 하는 문자 집합: 공백, 쉼표, 느낌표

    // str1에서 str2의 문자 중 하나가 나타나기 전까지의 길이 계산
    size_t length = strcspn(str1, str2);

    // 결과 출력
    printf("'%s'에서 '%s'의 문자가 나타나기 전까지의 길이: %zu\n", str1, str2, length);

    return 0;
}
*/
/*
int main(void)
{
    // 두 개의 char 포인터 초기화
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
//string span(범위)
//특정문자들로 이루어진 접두사의 길이를 계산하는 함수
int main() {
    const char* str1 = "  Hello,  World!";  // 공백으로 시작하는 문자열
    const char* str2 = " ,H";  // 찾고자 하는 문자 집합: 공백

    // str1의 처음부터 str2의 문자로 이루어진 접두사 길이 계산
    size_t length = strspn(str1, str2);
    //strspn(검사할문자열, 찾고자하는문자집합을포함한 문자열)

    // 결과 출력
    printf("'%s'에서 '%s'의 문자가 포함된 접두사의 길이: %zu\n", str1, str2, length);
    //2 (문자열 처음에 공백 2개있음)

    return 0;
}
*/
/*
int main(void)
{
    // 두 개의 char 포인터 초기화
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
//특정문자의 위치반환
int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = "aeiou"; // 찾고자 하는 문자 집합: 모음

    // str1에서 str2의 문자 중 하나가 나타나는 위치 찾기
    char* result = strpbrk(str1, str2);

    // 결과 출력
    if (result != NULL) {
        printf("'%s'에서 '%s'의 문자 중 하나가 처음으로 나타나는 위치: '%c'\n", str1, str2, *result);
        printf("위치: %ld\n", result- str1); // 문자 위치 계산(두 포인터간의 차)(1-0)
      
    }
    else {
        printf("'%s'에는 '%s'의 문자가 포함되어 있지 않습니다.\n", str1, str2);
    }

    return 0;
}
*/

/*
int main(void)
{
    const char* string1 = "This is a test"; // char 포인터 string1 초기화
    const char* string2 = "beware"; // char 포인터 string2 초기화

    printf("%s\"%s\"\n'%c'%s\n\"%s\"",
        "Of the characters in ", string2,
        * strpbrk(string1, string2),
        " appears earliest in ", string1);

        return 0;
}
*/

/*
//strrchr
//string reverse(역순) character
//특정문자가 마지막으로 나타나는 위치부터 그 이후의 문자열을 반환
int main(void)
{
    // char 포인터 초기화
    const char* string1 = "A zoo has many animals including zebras";
    int c = 'z'; // 검색할 문자

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
//string1에서 string2가 처음으로 나타나는 위치부터 그 이후의 문자열을 출력하는 예제.
int main(void)
{
    const char* string1 = "abcdefabcdef"; // 검색할 문자열
    const char* string2 = "def"; // 검색할 문자열

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
//string token(조각)
//특정 문자열을 기준으로 하나하나 차례차례 가져온다
// 
//주어진 문자열을 공백을 기준으로 분리하여 각 토큰을 출력
int main(void) {
    //배열초기화
    char string[] = "This is a sentence with 7 tokens";

    printf("%s\n%s\n%s\n",
        "The string to be tokenized is:", string,
        "The tokens are:");

    char* nullptr = NULL; // 토큰을 저장할 포인터
    char* tokenPtr = strtok_s(string, " ",&nullptr); // 문자열을 공백으로 분리 시작
    //첫번째 호출에서 문자열 지정하고, 이후 호출에서는 NULL을 지정해서 이전 문자열을 계속 사용.
    //&nullptr :상태정보를 저장할 포인터 사용.
    printf("%s\n", tokenPtr);
    printf("%s\n", nullptr);

    // tokenPtr가 NULL이 될 때까지 계속해서 문자열 토큰화
    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr); // 현재 토큰 출력
        printf("%s\n", nullptr);
        tokenPtr = strtok_s(NULL, " ", &nullptr); // 다음 토큰 가져오기
        
    }

    return 0;
}
*/


/*
//memcpy
//memory copy
//하나의 배열에서 다른 배열로 메모리 블록을 복사하는 함수
int main(void)
{
    char s1[17]; // char 배열 s1 생성
    char s2[] = "Copy this string"; // char 배열 s2 초기화

    memcpy(s1, s2, 17); // s2의 내용을 s1으로 복사
    printf("%s\n%s\"%s\"\n",
        "After s2 is copied into s1 with memcpy,",
        "s1 contains ", s1);

    return 0;
}
*/

/*
//memmove
//memmory move
//특정 위치부터 특정 바이트 길이를 처음 위치로 이동시킴. 이동후에 나머지는 그대로 출력됨.
int main(void)
{
    char x[] = "Home Sweet *ome"; // 문자 배열 x 초기화

    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array x after memmove is: ",
        (char *)memmove(x, &x[5], 10));
              //x[5]위치에서 시작하는 10바이트를 x의 시작 위치로 이동시킴
              //영어 한 글자에 1바이트이므로 "Sweet Home"이 x배열의 시작부분에 복사됨.
               

    return 0;
}
*/

/*
int main(void) {
    char str[] = "Hello, World!";

    // memmove 사용: "World!" 부분을 배열의 처음으로 이동
    memmove(str, str + 7, 6);  // 7위치부터 6바이트를 처음위치로 이동시킴("World!"의 길이인 6바이트 복사
    str[6] = '\0';  // 문자열의 끝에 null 문자 추가

    printf("After memmove: %s\n", str);
    return 0;
}
*/



/*
//memcmp
//memory compare
int main(void)
{
    char s1[] = "ABCDEFG"; // 문자 배열 s1 초기화
    char s2[] = "ABCDXYZ"; // 문자 배열 s2 초기화

    printf("%s%s\n%s%s\n\n%s%d\n%s%d\n%s%d\n",
        "s1 = ", s1, "s2 = ", s2,
        "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4), //s1과 s2의 처음 4바이트를 비교: 동일-> 0
        "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7), //s1과 s2의 처음 7바이트를 비교: E<X -> -1
        "memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7));//그반대 --> 1

    return 0;
}
*/


/*
//memchr
//memory character
//주어진 메로리 영역에서 특정 문자를 찾는 함수.
int main(void)
{
    const char* s = "This is a string"; // char 포인터 s 초기화 //읽기전용

    printf("%s%c%s\"%s\"\n",
        "The remainder of s after character '",   'r',
        "' is found is ", memchr(s, 'r', 16)); 
         //s에서 16바이트까지만 검색하여 r를 찾아 찾은 위치의 포인터 반환
         //%s로 출력하니까 'ring' 출력
    return 0;
}
*/

/*
//memset
//memory set
int main(void)
{
    char string1[15] = "BBBBBBBBBBBBB"; // string1 초기화

    printf("string1 = %s\n", string1);
    printf("string1 after memset = %s\n",
        memset(string1, 'b', 7)); // string1의 처음 7개 문자를 'b'로 설정

    return 0;
}
*/


/*
//strerror
//string error
int main(void) {
    char buffer[256]; //오류 메세지를 저장할 버퍼
    strerror_s(buffer,sizeof(buffer),2); //2에해당하는 오류 메세지를 버퍼에 저장.
    printf("%s\n", buffer );
    //2라는 오류 번호에 해당하는 오류문자열을 반환 -> No such file or directory
}
*/

/*
//strlen
//string length
//길이를 알려주는 함수,
int main(void)
{
    // 3개의 char 포인터 초기화
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
