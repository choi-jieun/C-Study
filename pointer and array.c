#include <stdio.h>


int main(void) {
	
	//배열 arr를 가르키는 포인터(pointer) = 배열 arr
	int arr[3] = { 5,10,15 };
	int * pointer = arr;                             // pointer ->  {5,10,15}
	printf("poiter[0]은 %d입니다\n", pointer[0]);
	printf("poiter[1]은 %d입니다\n", pointer[1]);
	printf("poiter[2]은 %d입니다\n", pointer[2]);
	
	//*****arr값 = arr의 주소 = arr[0]의주소 = pointer의 값.
	printf("arr배열의 값 자체는 %d입니다\n", arr);
	printf("arr배열의 주소는 %d입니다\n", &arr);
	printf("arr[0]의 주소는 %d입니다\n", &arr[0]);
	printf("pointer의 값 자체는 %d입니다\n", pointer);

	//*****각 배열의 주소는 4 차이가 나는 연속된 값임. (배열 하나의 요소에 4바이트 부여..)
	printf("arr[1]의 주소는 %d입니다\n", &arr[1]);
	printf("arr[2]의 주소는 %d입니다\n", &arr[2]);

	

	//*****포인터가 가르키는 것은 배열의 0번째 값.
	printf("pointer가 가르키는 것은 %d입니다\n", * pointer);


	//&*는 아무것도 없는 것과 같다 &는 주소이며, *는 그 주소의 값이기 때문
	
	return 0;
}








//배열을 가르키는 포인터를 활용하여 배열 안의 숫자 바꾸기
//++vPtr or vPtr++:그 뒷 요소 가르킴
//--vPtr or  vPtr-- 그 앞 요소 가르킴

#include <ctype.h> //toupper함수 사용 가능

void convertToUppercase(char *sPtr); //함수 프로토타입(선언)


int main(void)
{
    char string[] = "cHaRaCters and $32.98"; //string array

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);// 함수호출
    printf("\nThe string after conversion is: %s\n", string);

    return 0;
}



void convertToUppercase(char* sPtr) //pass by reference.   //sPtr -> {'c', 'H', 'a', 'R' ,'a', 'C', 't', 'e', 'r', 's' ' '
{
    while (*sPtr != '\0') { //null캐릭터가 아닌동안.(null캐릭터는 문장 끝에 있음)
        *sPtr = toupper(*sPtr); //대문자로 변환 (Non-const Data이기 때문에 가능) //sPtr은 첫번째 요소를 가르킴. , topper(*sPtr)은 'C'임 // string[0] = sPrt[0] = "c"
        ++ sPtr; //sPtr가 가르키는 것이 다음번째가 됨.
    }
}





//void printCharacters(const char* sPtr); // 함수 프로토타입
//
//int main(void) {
//    // 문자 배열 초기화
//    char string[] = "print characters of a string";
//
//    puts("The string is:"); // 문자열 출력
//    printCharacters(string); // 문자열의 각 문자 출력
//
//    return 0;
//}
//
//
//void printCharacters(const char* sPtr) {  //sPtr -> {'p','r','i','n','t',' ',.......}
//    // sPtr은 읽기 전용 포인터, 포인터가 가리키는 문자를 수정할 수 없습니다.
//    // 문자열 전체를 루프
//    for (; *sPtr != '\0'; ++sPtr) { // 널 종료 문자가 아닐 때까지 루프
//        //초기화 생략 (* sPtr은 이미 매개변수로 전달된 포인터이다.
//        printf("%c\n", *sPtr); // 현재 문자를 출력
//    }
//}





//int main() {
//    char a = 'A';  // 단일 문자
//    char* p1 = &a; // a의 주소를 가리키는 char 포인터      //p1 -> a
//
//    char str[] = "Hello, World!"; // 문자열
//    char* p2 = str; // 문자열을 가리키는 char 포인터       //p2 -> {'H', 'e' ,'l', 'l', 'o', ',', ' ','W', 'o', 'r', 'l', d''}
//
//    // 단일 문자를 가리키는 포인터 출력
//    printf("p1이 가리키는 값: %c\n", *p1);
//
//    // 문자열을 가리키는 포인터 출력
//    printf("p2가 가리키는 문자열: %s\n", p2);
//
//    // 포인터로 문자열 순차 접근
//    printf("p2가 가리키는 첫 번째 문자: %c\n", *p2);
//    printf("p2가 가리키는 두 번째 문자: %c\n", *(p2 + 1));
//    printf("p2가 가리키는 세 번째 문자: %c\n", *(p2 + 2));
//
//    return 0;
//}








////포인터 연산!!
//int main(void) {
//    int a[] = { 1,2,3,4 };
//    int *aPtr;
//    aPtr = &a; // aPtr -> {1,2,3,4,}
//
//    printf("aPtr의 값은 %d입니다\n", aPtr); //0번째 요소의 주소
//    printf("aPtr + 1의 값은 %d입니다\n", aPtr + 1); //1번째 요소의 주소
//    printf("aPtr + 2의 값은 %d입니다\n", aPtr + 2); //2번째 요소의 주소
//    printf("aPtr + 3의 값은 %d입니다\n", aPtr + 3); //3번째 요소의 주소
//    puts("");
//    printf("aPtr이 가르키는 것은 %d입니다\n", *aPtr); //0번째 요소의 주소
//    printf("aPtr + 1이 가르키는 것은 %d입니다\n", *(aPtr + 1)); //1번째 요소의 주소
//    printf("aPtr + 2이 가르키는 것은 %d입니다\n", *(aPtr + 2)); //2번째 요소의 주소
//    printf("aPtr + 3이 가르키는 것은 %d입니다\n", *(aPtr + 3)); //3번째 요소의 주소
//
//    return 0;
//}








////포인로 배열 인덱스 가능!
//int main(void) {
//    int a[] = { 1,2,3,4 };
//    int* aPtr;
//    aPtr = &a;
//
//    for (int i = 0; i < 4; i++) {
//        printf("aPtr[%d]는 %d입니다\n", i, aPtr[i]);
//    }
//
//}
