#include <stdio.h>



//gerchar함수
//getchar는 사용자로부터 입력받은 한 문자를 읽고, 그 문자를 반환함
//getchar를 호출하면, 함수는 입력 버퍼에서 한 문자씩 읽어옴

/*
int main() {
    char ch;

    printf("하나의 문자를 입력하세요: ");
    ch = getchar(); // 사용자 입력을 받음

    printf("입력한 문자: '%c'\n", ch); // 입력한 문자를 출력

    return 0;
}
*/

/*
int main() {
    char ch;

    printf("여러 문자를 입력하세요 (Ctrl+z로 종료):\n");
    while ((ch = getchar()) != EOF) { // EOF (Ctrl+D 또는 Ctrl+Z)로 종료
        printf("입력한 문자: '%c'\n", ch);
    }

    return 0;
}
*/

//EOF은 end of file의 약자. C 언어에서 EOF는 파일이나 스트림에서 더 이상 읽을 수 있는 데이터가 없다는 것을 나타내며, 일반적으로 -1로 정의
//getchar함수는 엔터 입력 후 에 읽음 --> 엔터까지 입력으로 인식

/*
#define SIZE 80

int main(void)
{
    int c; // 사용자 입력을 받을 변수
    char sentence[SIZE]; // char 배열 생성
    int i = 0; // 카운터 i 초기화

    // 사용자에게 텍스트 입력 요청
    puts("Enter a line of text:");

    // getchar로 각 문자를 읽기
    while ((i < SIZE - 1) && (c = getchar()) != '\n') { 
        sentence[i++] = c; //sentence[0]=c 배정 후에 i에 ++를 함.
    }

    sentence[i] = '\0'; // 문자열 종료 sentence[79]=\0

    // 문장 출력
    puts("\nThe line entered was:");
    puts(sentence);

    return 0;
}
*/


//putchar()
/*
int main() {
    putchar('A');  // 'A' 문자를 출력
    putchar('\n');  // 줄바꿈을 출력
    return 0;
}
*/

//fgets
//file gets
//파일이나 사용자입력으로부터 한 줄의 문자열을 읽어오는 데 사용되는 함수
/*
int main() {
    char buffer[100];  // 입력을 저장할 버퍼나열

    printf("문자열을 입력하세요: ");

    // 표준 입력으로부터 최대 99개의 문자를 읽음 (마지막은 null 문자)
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("입력한 문자열: %s", buffer);
    }
    else {
        printf("입력 오류 발생!\n");
    }

    return 0;
}
*/

/*
char *fgets(char *str, int n, FILE *stream);
str: 읽은 문자열을 저장할 배열의 포인터입니다.
n: 읽을 최대 문자 수를 지정하는 정수입니다. 
   이 값은 버퍼의 크기를 나타냅니다. 
   n보다 하나 작은 크기만큼의 문자를 읽고, 
   마지막에는 null 문자('\0')가 자동으로 추가됩니다.
stream: 문자열을 읽어올 파일 스트림입니다. 
   일반적으로 stdin을 사용하여 표준 입력으로부터 읽을 수 있습니다.
*/

/*
#define SIZE 80 //사용자 입력시 최대 79자까지 받을 수 있음.

void reverse(const char* const sPtr); // 프로토타입

int main(void)
{
    char sentence[SIZE]; // char 배열 생성

    puts("Enter a line of text:"); // 사용자에게 입력 요청

    // fgets를 사용하여 텍스트 줄 읽기(sentence 배열에 저장)
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is:"); // 출력할 메시지
    reverse(sentence); // 문자열을 역순으로 출력
}

// 문자열에서 문자를 역순으로 출력하는 재귀 함수
void reverse(const char* const sPtr) //sPtr -> sentence
{
 
    if ('\0' == sPtr[0]) {
        // 문자열의 끝에 도달했으면
        return; //함수호출 종료
    }
    else { // 문자열의 끝에 도달하지 않았을 경우
        reverse(&sPtr[1]); // 재귀 호출 
        //두번째 문자의 주소를 가져오는것, 
        // 이는 문자열 두번째 문자부터 끝까지를 가르키는 새로운 포인터가 됨.
        putchar(sPtr[0]); // 문자를 표시
    }
}
*/







//sprintf
//string printf
//문자열 형식으로 데이터를 출력하기 위해 사용하는 함수. 문자열을 저장한다
/*
int main() {
    char buffer[100];  // 문자열을 저장할 버퍼
    int num = 42;
    const char* name = "Alice";

    // 버퍼에 형식화된 문자열을 저장
    sprintf_s(buffer,sizeof(buffer), "이름: %s, 나이: %d", name, num);
    //sprintf(출력결과를 저장할 곳가르키는포인터,출력형실설정,출력할인수들)

    printf("저장된 문자열: %s\n", buffer);

    return 0;
}
*/


/*
int main() {
    char date[100];
    int year = 2024, month = 11, day = 4;

    // 날짜를 "YYYY-MM-DD" 형식으로 저장
    sprintf_s(date,sizeof(date), "%4d-%2d-%2d", year, month, day);

    printf("저장된 날짜 문자열: %s\n", date);

    return 0;
}
*/

/*
#define SIZE 80

int main(void)
{
    int x; // 입력될 x 값
    double y; // 입력될 y 값

    puts("Enter an integer and a double:"); // 사용자 입력 요청
    scanf_s("%d%lf", &x, &y); // 정수와 실수 입력

    char s[SIZE]; // char 배열 생성
    sprintf_s(s,SIZE, "integer:%d\ndouble:%7.2f", x, y); // 형식화된 출력 저장

    printf("%s\n", "The formatted output stored in array s is:"); // 출력 메시지
    printf("%s\n", s); // 배열 s의 내용 출력

    return 0;
}
*/








/*
//sscanf
//string scanf
//표준입력이 아니라 문자열에서 읽어온다.
int main() {
    const char* data = "42 Alice";
    int num;
    char name[20];

    // data에서 정수와 문자열을 각각 num과 name에 저장
    sscanf_s(data,"%d %s", &num, name, sizeof(name));
    //sscanf(값을읽어올문자열가르키는포인터,이형태로읽어오기,각각변수에저장,크기)

    printf("숫자: %d, 이름: %s\n", num, name);

    return 0;
}
*/


/*
int main(void)
{
    char s[] = "31298 87.375"; // 배열 s 초기화
    int x; // 입력될 x 값
    double y; // 입력될 y 값

    sscanf_s(s, "%d%lf", &x, &y); // 문자열에서 정수와 실수 읽기
    printf("%s\n%s%d\n%s%8.3f\n",
        "The values stored in character array s are:",
        "integer:", x,
        "double:", y); // 값 출력

    return 0;
}
*/


























