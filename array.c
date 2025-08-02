#include <stdio.h> //--> printf(),scanf(),puts()    //standard input output //표준 입출력
#include <stdlib.h> //--> rand()함수, srand()함수
#include <time.h> //--> time()함수


int main(void) { //반환값: 정수 전달값: 없음.

	
	//배열 = 지하철

	int subway_array[7] = { 1,2,3,4 }; //선언  //정수값 7개를 가지는 배열임
	                     //값설정  //{ 1,2,3,4,0,0,0} 의미
	printf("%d", subway_array[0]);
	printf("%d", subway_array[1]);
	printf("%d", subway_array[2]);
	printf("%d", subway_array[3]);
	printf("%d", subway_array[4]);
	printf("%d", subway_array[5]);
	printf("%d\n", subway_array[6]);

	int zero_array[7] = {0}; //선언  //정수값 7개를 가지는 배열임
	                    //값설정
	printf("%d", zero_array[0]);
	printf("%d", zero_array[1]);
	printf("%d", zero_array[2]);
	printf("%d", zero_array[3]);
	printf("%d", zero_array[4]);
	printf("%d", zero_array[5]);
	printf("%d\n", subway_array[6]);


	char name[7] = { 'j','i','e','u','n' }; //선언 //문자(character)값 7개를 가지는 배열임
	                                //값설정   //{ 'j','i','e','u','n','\0','\0'} 의미
	printf("%c\n", name[0]);
	printf("%d\n", name[0]); //문자의 아스키코드출력 
	
	printf("%c\n", name[5]); //빈문자출력
	printf("%d\n", name[5]); //문자의 아스키코드출력  //\0의 아스키코드는 0 
	

	char feature[] = "pretty"; // = char feature[7] = "pretty"; // char feature[7] = {'p','r','e','t','t','y','\0'}
	printf("%c\n", feature[0]);
	printf("%c\n", feature[6]);
	printf("%c\n", feature[7]); //?출력 (존재하지 않음)
	printf("%s\n", feature); //문자열로 배열 출력 가능


	char lovesinger[5] = "honne"; //이상해!!
	printf("%s\n", lovesinger); //honne儆儆儆儆儆儆儆儆儆儆儆??? (이상한 값 출력)
	printf("%c\n", lovesinger[0]);
	printf("%c\n", lovesinger[1]);
	printf("%c\n", lovesinger[2]);
	printf("%c\n", lovesinger[3]);
	printf("%c\n", lovesinger[4]);
	printf("%c\n", lovesinger[5]); //?출력 (존재하지 않음)

	return 0; // 0전달의미 + 함수를 끝내겠다 의미 
}








//배열의 인덱스와 값을 테이블 형태로 출력하는 프로그램
int main(void)
{
	int n[5]; // n은 5개의 정수를 저장할 수 있는 배열

	// 배열의 모든 요소를 0으로 초기화
	 //size_t는 부호가 없는 정수형을 나타내는 자료형.(-> 0이상의 값을 가짐.)
	 //보통 메모리 크기나 배열 인덱스같은 크기 다룰 때 사용.
	for (size_t i = 0; i < 5; ++i) {   
		n[i] = 0; // n[i] 위치에 0을 설정
	}

	printf("%s%13s\n", "Element", "Value");

	// 배열의 각 요소를 출력
	for (size_t i = 0; i < 5; ++i) {
		printf("%7lu%13d\n", i, n[i]);
	}


	return 0;
}







#define SIZE 10  // 배열 크기를 상수로 정의

int main(void)
{
	int s[SIZE];  // 배열 s를 크기가 SIZE인 배열로 선언

	// 배열의 각 요소를 2, 4, 6, 8, 10으로 초기화
	for (size_t j = 0; j < SIZE; ++j) {
		s[j] = 2 + 2 * j;  // s[j]에 2씩 증가하는 짝수를 저장
	}

	printf("%s%13s\n", "Element", "Value");  // 표의 헤더 출력

	// 배열의 각 요소를 표 형식으로 출력
	for (size_t j = 0; j < SIZE; ++j) {
		printf("%7u%13d\n", j, s[j]);  // 인덱스와 값을 출력
	}

	return 0;
}






//배열 a의 요소들을 합산하여 total변수에 저장한 후, 그 결과를 출력하는 함수.
#define SIZE 12 // 배열의 크기 정의 (SIZE는 12이상 가능.)

int main(void) {
	// 배열 초기화
	int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int total = 0; // 배열의 합을 저장할 변수

	// 배열 a의 내용 합산
	for (size_t i = 0; i < SIZE; ++i) {
		total += a[i]; // 배열의 각 요소를 total에 더함
	}

	printf("Total of array element values is %d\n", total); // 결과 출력

	return 0;
}







//이 코드는 설문조사의 응답을 기반으로 각 평점(raiting)의 빈도(frequency)를 계산하고, 그 결과를 출력하는 프로그램
#define RESPONSES_SIZE 40 // 배열 크기 정의
#define FREQUENCY_SIZE 11 // 빈도 배열 크기 정의 Frequency[0] ~ Frequency[10]

int main(void) {
	// 빈도 카운터를 0으로 초기화
	int frequency[FREQUENCY_SIZE] = { 0 };

	// 설문 응답을 responses 배열에 저장
	int responses[RESPONSES_SIZE] = { 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 8, 10,
									   5, 6, 7, 5, 6, 4, 8, 6, 8, 10 }; //0~10가능 (11개)

	// 각 응답에 대해, responses 배열의 요소 값을 사용하여 frequency 배열의 인덱스를 결정
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) { //answer은 0~39
		++frequency[responses[answer]]; // 빈도 증가  
		// responses배열의 각 인덱스의 값(value)을 인덱스로하는 frequency 배열 값 생성완료
	}

	// 결과 출력
	printf("%-17s %s\n", "Rating", "Frequency");

	// 빈도수를 표 형식으로 출력
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
		printf("%6d%17d\n", rating, frequency[rating]);
	}

	return 0;
}






//주사위를 굴린 결과를 배열에 저장하고, 각 면의 빈도를 계산하여 출력하는 프로그램
#define SIZE 7 // 주사위 면의 수 (1~6, 0은 사용하지 않음)

int main(void) {

	unsigned int frequency[SIZE] = { 0 }; // 빈도 카운터 초기화 //{0,0,0,0,0,0,0}

	srand(time(NULL)); // 난수 생성기 초기화

	// 60,000,000번 주사위를 굴림 (6천만번)
	for (unsigned int roll = 1; roll <= 60000000; ++roll) { 
		size_t face = 1 + rand() % 6; // 1에서 6까지의 난수 생성 rand() %5 = 0~5
		++frequency[face]; // 해당 면의 빈도 증가
	}

	printf("%s%17s\n", "Face", "Frequency"); // 헤더 출력

	// 빈도수를 표 형식으로 출력
	for (size_t face = 1; face < SIZE; ++face) {
		printf("%4d%17d\n", face, frequency[face]);
	}

	return 0;
}



//질문.....
//사용자로부터 string1 문자열을 입력받고  두 문자열을 출력하고,
//입력된 문자열의 각 문자를 개별적으로 출력하는 프로그램
#define SIZE 20 // 배열 크기 정의

int main(void) {

	char string1[SIZE]; // 20자의 배열을 예약합니다.
	char string2[] = "string literal"; // 15자의 배열을 만듭니다.

	// 사용자로부터 string1 배열에 문자열을 읽어옵니다.
	printf("%s", "Enter a string (no longer than 19 characters): ");
	scanf("%19s", string1); // 19자 이하의 문자열 입력 //%19s: 최대 입력받을 수 있는 문자수가 19개이다.

	// 문자열 출력
	printf("string1 is: %s\nstring2 is: %s\n"
		"string1 with spaces between characters is:\n", string1, string2);

	// 널 문자가 나올 때까지 문자를 출력합니다.
	for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
		printf("%c ", string1[i]);
	}

	puts(""); // 줄바꿈

	return 0;
}








//정적 배열(array1)과 자동 배열(array2)의 초기화 및 사용을 보여주며, 
// 각 배열의 상태를 함수 호출 전후로 출력

// 함수 프로토타입
void staticArrayInit(void);
void automaticArrayInit(void);

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	puts("First call to each function:");
	staticArrayInit(); // 정적 배열 초기화 함수 호출
	automaticArrayInit(); // 자동 배열 초기화 함수 호출

	puts("\n\nSecond call to each function:");
	staticArrayInit(); // 정적 배열 초기화 함수 호출
	automaticArrayInit(); // 자동 배열 초기화 함수 호출

	return 0;
}

// 정적 지역 배열을 보여주는 함수
void staticArrayInit(void) {
	// 함수가 호출될 때 요소를 0으로 초기화****
	static int array1[3]; // 정적 배열

	puts("\nValues on entering staticArrayInit:");

	// 배열의 내용 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i]);  
	}//%zu는 printf함수에서 사용하는 형식 지정자. //주로 size_t타입의 변수를 출력할 때 사용.

	puts("\nValues on exiting staticArrayInit:");

	// 배열의 내용을 수정하고 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i] += 5);
	}
}

// 자동 지역 배열을 보여주는 함수
void automaticArrayInit(void) {
	// 함수가 호출될 때마다 요소를 초기화
	int array2[3] = { 1, 2, 3 }; // 자동 배열

	puts("\nValues on entering automaticArrayInit:");

	// 배열의 내용 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i]); 
	}

	puts("\nValues on exiting automaticArrayInit:");

	// 배열의 내용을 수정하고 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu = %d ", i, array2[i] += 5);
	}
}









// 함수 프로토타입
void staticArrayInit(void);
void automaticArrayInit(void);

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	puts("First call to each function:");
	staticArrayInit(); // 정적 배열 초기화 함수 호출
	automaticArrayInit(); // 자동 배열 초기화 함수 호출

	puts("\nSecond call to each function:");
	staticArrayInit(); // 정적 배열 초기화 함수 호출
	automaticArrayInit(); // 자동 배열 초기화 함수 호출

	return 0;
}

// 정적 지역 배열을 보여주는 함수
void staticArrayInit(void) {
	// 함수가 호출될 때 요소를 0으로 초기화
	static int array1[3]; // 정적 배열

	puts("\nValues on entering staticArrayInit:");

	// 배열의 내용 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	// 배열의 내용을 수정하고 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i] += 5);
	}
}

// 자동 지역 배열을 보여주는 함수
void automaticArrayInit(void) {
	// 함수가 호출될 때마다 요소를 초기화
	int array2[3] = { 1, 2, 3 }; // 자동 배열

	puts("\nValues on entering automaticArrayInit:");

	// 배열의 내용 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i]);
	}

	puts("\nValues on exiting automaticArrayInit:");

	// 배열의 내용을 수정하고 출력
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i] += 5);
	}
}









//이 코드는 배열 전체를 참조로 전달하고, 배열의 요소를 값으로 전달하는 방법을 보여줍니다.
//modifyArray 함수는 배열을 수정하고, modifyElement 함수는 배열 요소의 값을 수정하지만 
//원본 배열에는 영향을 주지 않습니다.

#define SIZE 5 // 배열 크기 정의

// 함수 프로토타입
void modifyArray(int b[], size_t size);
void modifyElement(int e); // 배열 요소를 수정하는 함수

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	int a[SIZE] = { 0, 1, 2, 3, 4 }; // 배열 초기화

	puts("Effects of passing entire array by reference:\nThe values of the original array are:");

	// 원본 배열 출력
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	puts(""); // 줄바꿈

	modifyArray(a, SIZE); // 배열을 함수에 전달하여 수정
	puts("The values of the modified array are:");

	// 수정된 배열 출력
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	// 배열 요소의 값 출력
	printf("\n\nEffects of passing array element by value:\n");
	printf("The value of a[3] is %d\n", a[3]);
	modifyElement(a[3]); // 배열 요소를 값으로 전달
	printf("The value of a[3] is %d\n", a[3]);

	return 0;
}

// modifyArray 함수 정의
// "b"는 원본 배열 "a"를 가리킵니다.
void modifyArray(int b[], size_t size) {  //c언어는 자동적으로 함수에 배열을 주소값으로 전달한다.
	// 배열의 각 요소를 2배로 수정
	for (size_t j = 0; j < size; ++j) {
		b[j] *= 2; // 원본 배열을 실제로 수정
	}
}

// modifyElement 함수 정의
// "e"는 배열 요소의 로컬 복사본입니다.
void modifyElement(int e) {
	e *= 2; // 매개변수 수정
	printf("Value in modifyElement is %d\n", e);
}






//이 코드는 주어진 배열을 버블 정렬 알고리즘을 사용하여 오름차순으로 정렬하고, 
// 원본 배열과 정렬된 배열을 출력합니다.

#define SIZE 10 // 배열 크기 정의

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	// 배열 초기화
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Data items(value) in original order:"); // 원본 배열 출력

	// 원본 배열 출력
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	// 버블 정렬
	// 패스 수를 제어하는 루프
	for (unsigned int pass = 1; pass < SIZE; ++pass) {
		// 각 패스당 비교 수를 제어하는 루프
		for (size_t i = 0; i < SIZE - 1; ++i) {
			// 인접한 요소를 비교하고 필요 시 교환
			if (a[i] > a[i + 1]) {
				int hold = a[i]; // 값을 임시로 저장
				a[i] = a[i + 1]; // 교환
				a[i + 1] = hold; // 교환
			}
		}
	}

	puts("\nData items(value) in ascending order:"); // 정렬된 배열 출력

	// 정렬된 배열 출력
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts(""); // 줄바꿈


	return 0;
}





//searching - 선형 탐색
//이 코드는 사용자가 입력한 정수를 배열에서 선형 검색을 통해 찾고, 그 결과를 출력
// linearSearch 함수는 배열을 순회하며 키를 찾아 해당 인덱스를 반환. 
// 키를 찾지 못한 경우 -1을 반환합니다.

#define SIZE 100 // 배열 크기 정의

// 함수 프로토타입
size_t linearSearch(const int array[], int key, size_t size);

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	int a[SIZE]; // 배열 생성

	// 데이터 생성
	for (size_t x = 0; x < SIZE; ++x) {
		a[x] = 2 * x; // 배열에 값 할당  //{0,2,4,6,8,10,12 ...}
	}

	printf("Enter integer search key: ");
	int searchKey; // 배열에서 찾을 값
	scanf_s("%d", &searchKey); // 사용자로부터 입력 받기

	// 배열 a에서 searchKey를 찾기 시도
	size_t index = linearSearch(a, searchKey, SIZE);

	// 결과 표시
	if (index != -1) {
		printf("Found value at index %zu\n", index); // 값이 발견된 인덱스 출력
	}
	else { //-1인경우
		puts("Value not found"); // 값이 발견되지 않음
	}

	return 0;
}

// 배열에서 선형 검색을 수행하는 함수
size_t linearSearch(const int array[], int key, size_t size) {
	// 배열을 순회
	for (size_t n = 0; n < size; ++n) {
		if (array[n] == key) {
			return n; // 키의 인덱스 반환
		}
	}
	return -1; // 키를 찾지 못한 경우
}






//코드이상.!
#define SIZE 15 // 배열 크기 정의

// 함수 프로토타입
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// 함수 main이 프로그램 실행을 시작합니다.
int main(void) {
	int a[SIZE]; // 배열 생성

	// 데이터 생성
	for (size_t i = 0; i < SIZE; i++) {
		a[i] = 2 * i; // 배열에 값 할당 {0,2,4,6,8,...}
	}

	printf("%s", "Enter a number between 0 and 28: "); // 사용자 입력 요청
	int key; // 배열에서 찾을 값
	scanf_s("%d", &key); // 사용자로부터 입력 받기

	printHeader(); // 헤더 출력

	// 배열에서 키 검색
	size_t result = binarySearch(a, key, 0, SIZE - 1);

	// 결과 표시
	if (result != (size_t)-1) {
		printf("Value found at index %zu\n", result); // 찾은 값의 인덱스 출력
	}
	else {
		printf("%d not found\n", key); // 값이 발견되지 않음
	}

	return 0;
}



// 배열에서 이진 검색을 수행하는 함수
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {
	// low 인덱스가 high 인덱스보다 작거나 같을 때까지 루프
	while (low <= high) {
		// 검색 중인 서브배열의 중간 요소 결정
		size_t middle = (low + high) / 2;

		// 현재 반복에서 사용되는 서브배열 표시
		printRow(b, low, middle, high);

		// searchKey가 중간 요소와 일치하면 중간 반환
		if (searchKey == b[middle]) {
			return middle;
		}
		// searchKey가 중간 요소보다 작으면 high 조정
		else if (searchKey < b[middle]) {
			high = middle - 1; // 서브배열의 낮은 끝 조정
		}
		// searchKey가 중간 요소보다 크면 low 조정
		else {
			low = middle + 1; // 서브배열의 높은 끝 조정
		}
	}

	return (size_t)-1; // searchKey를 찾지 못한 경우 //-1을 size_t형으로 변환.=> 32비트시스템에서는 4294967295으로 변환..
	//size_t는 배열의 크기나 메모리블록의 크기를 나타내는데 사용
}



// 출력 헤더(header:가장 위에 있는 거..)를 인쇄하는 함수
void printHeader(void) {
	puts("\nIndices:"); // 인덱스 헤더 표시

	// 열 헤드 출력
	for (unsigned int i = 0; i < SIZE; ++i) {
		printf("%3u ", i);
	}

	puts(""); // 줄바꿈

	// '-' 문자의 줄 출력
	for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
		printf("%s", "-");
	}

	puts(""); // 줄바꿈
}




// 현재 처리 중인 배열의 한 줄을 인쇄하는 함수
void printRow(const int b[], size_t low, size_t mid, size_t high) {
	// 전체 배열을 루프
	for (size_t i = 0; i < SIZE; ++i) {
		// 현재 서브배열 범위 외부일 경우 공백 표시
		if (i < low || i > high) {
			printf("%s", "  ");
		}
		// 중간 요소 표시
		else if (i == mid) {
			printf("%3d*", b[i]); // 중간 값 표시
		}
		// 서브배열의 다른 요소 표시
		else {
			printf("%3d ", b[i]);
		}
	}

	puts(""); // 줄바꿈
}






