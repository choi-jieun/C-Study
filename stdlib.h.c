#include <stdio.h>
#include <stdlib.h> //standard library


/*
//strtod
//to double의 약자
//문자열을 부동 소수점(double) 숫자로 변환하는 데 사용되는 함수
int main() {
    const char* str = "123.456abc";  // 변환할 문자열을 가르키는 포인터  //str -->123.456abc
    char* endptr;  // 변환이 끝난 후의 위치를 저장할 포인터 
                   //변환이 완료된 후 이 포인터는 숫자 다음의 문자 주소를 가르킨다.
    double value; 

    // 문자열을 double로 변환. 변환할 수 없는 경우, 0.0을 반환.
    value = strtod(str, &endptr); 

    printf("변환된 값: %f\n", value); //기본적으로 %.6f와 같은 형식 지정을 하지 않으면 소수점 이하 6자기까지 출력하도록 설정되어있음.
    printf("변환이 끝난 위치의 문자: '%s'\n", endptr);
    printf("endptr이 가르키는 것: %c\n", *endptr);

    return 0;
}
*/



/*
int main() {
    char str[100];  // 입력 문자열을 저장할 배열
    char* endptr;   // 변환이 끝난 후의 위치를 저장할 포인터
    double value;

    printf("부동 소수점 숫자를 입력하세요: ");
    fgets(str, sizeof(str), stdin);  // 문자열 입력 받기

    // 문자열을 double로 변환
    value = strtod(str, &endptr);

    // 변환된 값 출력
    printf("변환된 값: %f\n", value);

    // 변환이 끝난 위치의 문자 출력
    if (*endptr != '\0') {  // 변환 후 남은 문자가 있을 경우
        printf("변환이 끝난 위치의 문자: '%s'\n", endptr);
    }
    else {
        printf("모든 문자가 변환되었습니다.\n");
    }

    return 0;
}
*/





/*
//strtol
// to long int
//문자열을 long int자료형으로 변환
int main() {
    const char* str = "12345abc";  // 변환할 문자열
    char* endptr;     // 변환이 끝난 후의 위치를 저장할 포인터
    long int value;

    // 10진법으로 변환
    value = strtol(str, &endptr, 0);
    //3번째 argument: 문자열을 어떤 진수로 해석할지.. 
    // 10: 주어진 문자열을 10진수로 해석해서 10진수로 변환
    // 8:  주어진 문자열을 8진수로 해석해서 10진수로 변환
    // 16: 주어진 문자열을 16진수로 해석해서 10진수로 변환
    // 2  :주어진 문자열을 2진수로 해석해서 10진수로 변환 --> 2부터 2진수로 해석할 수 없음
    //0 : 주어진 문자열의 앞부분을 해석해서 알아서 진수를 읽어 해석한다

    printf("변환된 값: %ld\n", value);
    printf("변환이 끝난 위치의 문자: '%s'\n", endptr);
    // endptr이 가르키는 주소부터 시작하는 문자열 전체를 출력함.
    //endptr은 'a'를 가리키고, 출력은 abc가 됨


    //printf("endptr이 가르키는 것: %s\n",* endptr);  //*endptr은 단일문자를 반환하므로 이를 %s로 출력하면 안됨.(에러)
    printf("endprt이 가르키는 것: %c\n", *endptr);
    printf("endprt+1이 가르키는 것: %c\n", *(endptr + 1));
    printf("endprt+2이 가르키는 것: %c\n", *(endptr + 2));
    return 0;
}
*/

/*
예를 들어, 사용자가 문자열 "123.456abc"를 입력했을 때 :

strtod 함수는 "123.456" 부분을 숫자 123.456으로 변환합니다.
변환이 끝난 위치는 'a'라는 문자입니다.
endptr 포인터는 이 'a' 문자의 주소를 가리키게 됩니다

문자열의 끝까지 변환이 완료되었다면, endptr은 문자열의 끝(널 문자 '\0')을 가리킵니다.

*/



/*
//strtoul
//to unsigned long int
int main() {
    const char* str = "12345abc";  // 변환할 문자열
    char* endptr;    // 변환이 끝난 후의 위치를 저장할 포인터
    unsigned long value;

    // 10진수로 변환
    value = strtoul(str, &endptr, 8);

    // 변환된 값 출력
    printf("변환된 값: %lu\n", value);

    // 변환이 끝난 위치 이후의 문자열 출력
    printf("변환이 끝난 위치의 문자: '%s'\n", endptr);

    // endptr이 가리키는 문자 출력
    if (*endptr != '\0') {
        printf("endptr이 가리키는 문자: %c\n", *endptr);
    }
    else {
        printf("endptr이 문자열의 끝을 가리킵니다.\n");
    }

    return 0;
}
*/


/*
int main(void)
{
    const char* string = "1234567abc"; // 변환할 문자열r
    char* remainderPtr; // 변환이 끝난 후의 위치를 저장할 포인터

    unsigned long int x = strtoul(string, &remainderPtr, 0); //0->알아서 주어진 문자열을 10진수로 인식함

    printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
        "The original string is ", string,
        "The converted value is ", x,
        "The remainder of the original string is ", remainderPtr,
        "The converted value minus 567 is ", x - 567); //1234567-567 = 1234000

    return 0;
}
*/

