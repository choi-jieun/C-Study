#include <stdio.h> //--> printf(),scanf(),puts()    //standard input output //ǥ�� �����
#include <stdlib.h> //--> rand()�Լ�, srand()�Լ�
#include <time.h> //--> time()�Լ�


int main(void) { //��ȯ��: ���� ���ް�: ����.

	
	//�迭 = ����ö

	int subway_array[7] = { 1,2,3,4 }; //����  //������ 7���� ������ �迭��
	                     //������  //{ 1,2,3,4,0,0,0} �ǹ�
	printf("%d", subway_array[0]);
	printf("%d", subway_array[1]);
	printf("%d", subway_array[2]);
	printf("%d", subway_array[3]);
	printf("%d", subway_array[4]);
	printf("%d", subway_array[5]);
	printf("%d\n", subway_array[6]);

	int zero_array[7] = {0}; //����  //������ 7���� ������ �迭��
	                    //������
	printf("%d", zero_array[0]);
	printf("%d", zero_array[1]);
	printf("%d", zero_array[2]);
	printf("%d", zero_array[3]);
	printf("%d", zero_array[4]);
	printf("%d", zero_array[5]);
	printf("%d\n", subway_array[6]);


	char name[7] = { 'j','i','e','u','n' }; //���� //����(character)�� 7���� ������ �迭��
	                                //������   //{ 'j','i','e','u','n','\0','\0'} �ǹ�
	printf("%c\n", name[0]);
	printf("%d\n", name[0]); //������ �ƽ�Ű�ڵ���� 
	
	printf("%c\n", name[5]); //�������
	printf("%d\n", name[5]); //������ �ƽ�Ű�ڵ����  //\0�� �ƽ�Ű�ڵ�� 0 
	

	char feature[] = "pretty"; // = char feature[7] = "pretty"; // char feature[7] = {'p','r','e','t','t','y','\0'}
	printf("%c\n", feature[0]);
	printf("%c\n", feature[6]);
	printf("%c\n", feature[7]); //?��� (�������� ����)
	printf("%s\n", feature); //���ڿ��� �迭 ��� ����


	char lovesinger[5] = "honne"; //�̻���!!
	printf("%s\n", lovesinger); //honne����������������������??? (�̻��� �� ���)
	printf("%c\n", lovesinger[0]);
	printf("%c\n", lovesinger[1]);
	printf("%c\n", lovesinger[2]);
	printf("%c\n", lovesinger[3]);
	printf("%c\n", lovesinger[4]);
	printf("%c\n", lovesinger[5]); //?��� (�������� ����)

	return 0; // 0�����ǹ� + �Լ��� �����ڴ� �ǹ� 
}








//�迭�� �ε����� ���� ���̺� ���·� ����ϴ� ���α׷�
int main(void)
{
	int n[5]; // n�� 5���� ������ ������ �� �ִ� �迭

	// �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ
	 //size_t�� ��ȣ�� ���� �������� ��Ÿ���� �ڷ���.(-> 0�̻��� ���� ����.)
	 //���� �޸� ũ�⳪ �迭 �ε������� ũ�� �ٷ� �� ���.
	for (size_t i = 0; i < 5; ++i) {   
		n[i] = 0; // n[i] ��ġ�� 0�� ����
	}

	printf("%s%13s\n", "Element", "Value");

	// �迭�� �� ��Ҹ� ���
	for (size_t i = 0; i < 5; ++i) {
		printf("%7lu%13d\n", i, n[i]);
	}


	return 0;
}







#define SIZE 10  // �迭 ũ�⸦ ����� ����

int main(void)
{
	int s[SIZE];  // �迭 s�� ũ�Ⱑ SIZE�� �迭�� ����

	// �迭�� �� ��Ҹ� 2, 4, 6, 8, 10���� �ʱ�ȭ
	for (size_t j = 0; j < SIZE; ++j) {
		s[j] = 2 + 2 * j;  // s[j]�� 2�� �����ϴ� ¦���� ����
	}

	printf("%s%13s\n", "Element", "Value");  // ǥ�� ��� ���

	// �迭�� �� ��Ҹ� ǥ �������� ���
	for (size_t j = 0; j < SIZE; ++j) {
		printf("%7u%13d\n", j, s[j]);  // �ε����� ���� ���
	}

	return 0;
}






//�迭 a�� ��ҵ��� �ջ��Ͽ� total������ ������ ��, �� ����� ����ϴ� �Լ�.
#define SIZE 12 // �迭�� ũ�� ���� (SIZE�� 12�̻� ����.)

int main(void) {
	// �迭 �ʱ�ȭ
	int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int total = 0; // �迭�� ���� ������ ����

	// �迭 a�� ���� �ջ�
	for (size_t i = 0; i < SIZE; ++i) {
		total += a[i]; // �迭�� �� ��Ҹ� total�� ����
	}

	printf("Total of array element values is %d\n", total); // ��� ���

	return 0;
}







//�� �ڵ�� ���������� ������ ������� �� ����(raiting)�� ��(frequency)�� ����ϰ�, �� ����� ����ϴ� ���α׷�
#define RESPONSES_SIZE 40 // �迭 ũ�� ����
#define FREQUENCY_SIZE 11 // �� �迭 ũ�� ���� Frequency[0] ~ Frequency[10]

int main(void) {
	// �� ī���͸� 0���� �ʱ�ȭ
	int frequency[FREQUENCY_SIZE] = { 0 };

	// ���� ������ responses �迭�� ����
	int responses[RESPONSES_SIZE] = { 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 8, 10,
									   5, 6, 7, 5, 6, 4, 8, 6, 8, 10 }; //0~10���� (11��)

	// �� ���信 ����, responses �迭�� ��� ���� ����Ͽ� frequency �迭�� �ε����� ����
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) { //answer�� 0~39
		++frequency[responses[answer]]; // �� ����  
		// responses�迭�� �� �ε����� ��(value)�� �ε������ϴ� frequency �迭 �� �����Ϸ�
	}

	// ��� ���
	printf("%-17s %s\n", "Rating", "Frequency");

	// �󵵼��� ǥ �������� ���
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
		printf("%6d%17d\n", rating, frequency[rating]);
	}

	return 0;
}






//�ֻ����� ���� ����� �迭�� �����ϰ�, �� ���� �󵵸� ����Ͽ� ����ϴ� ���α׷�
#define SIZE 7 // �ֻ��� ���� �� (1~6, 0�� ������� ����)

int main(void) {

	unsigned int frequency[SIZE] = { 0 }; // �� ī���� �ʱ�ȭ //{0,0,0,0,0,0,0}

	srand(time(NULL)); // ���� ������ �ʱ�ȭ

	// 60,000,000�� �ֻ����� ���� (6õ����)
	for (unsigned int roll = 1; roll <= 60000000; ++roll) { 
		size_t face = 1 + rand() % 6; // 1���� 6������ ���� ���� rand() %5 = 0~5
		++frequency[face]; // �ش� ���� �� ����
	}

	printf("%s%17s\n", "Face", "Frequency"); // ��� ���

	// �󵵼��� ǥ �������� ���
	for (size_t face = 1; face < SIZE; ++face) {
		printf("%4d%17d\n", face, frequency[face]);
	}

	return 0;
}



//����.....
//����ڷκ��� string1 ���ڿ��� �Է¹ް�  �� ���ڿ��� ����ϰ�,
//�Էµ� ���ڿ��� �� ���ڸ� ���������� ����ϴ� ���α׷�
#define SIZE 20 // �迭 ũ�� ����

int main(void) {

	char string1[SIZE]; // 20���� �迭�� �����մϴ�.
	char string2[] = "string literal"; // 15���� �迭�� ����ϴ�.

	// ����ڷκ��� string1 �迭�� ���ڿ��� �о�ɴϴ�.
	printf("%s", "Enter a string (no longer than 19 characters): ");
	scanf("%19s", string1); // 19�� ������ ���ڿ� �Է� //%19s: �ִ� �Է¹��� �� �ִ� ���ڼ��� 19���̴�.

	// ���ڿ� ���
	printf("string1 is: %s\nstring2 is: %s\n"
		"string1 with spaces between characters is:\n", string1, string2);

	// �� ���ڰ� ���� ������ ���ڸ� ����մϴ�.
	for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
		printf("%c ", string1[i]);
	}

	puts(""); // �ٹٲ�

	return 0;
}








//���� �迭(array1)�� �ڵ� �迭(array2)�� �ʱ�ȭ �� ����� �����ָ�, 
// �� �迭�� ���¸� �Լ� ȣ�� ���ķ� ���

// �Լ� ������Ÿ��
void staticArrayInit(void);
void automaticArrayInit(void);

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	puts("First call to each function:");
	staticArrayInit(); // ���� �迭 �ʱ�ȭ �Լ� ȣ��
	automaticArrayInit(); // �ڵ� �迭 �ʱ�ȭ �Լ� ȣ��

	puts("\n\nSecond call to each function:");
	staticArrayInit(); // ���� �迭 �ʱ�ȭ �Լ� ȣ��
	automaticArrayInit(); // �ڵ� �迭 �ʱ�ȭ �Լ� ȣ��

	return 0;
}

// ���� ���� �迭�� �����ִ� �Լ�
void staticArrayInit(void) {
	// �Լ��� ȣ��� �� ��Ҹ� 0���� �ʱ�ȭ****
	static int array1[3]; // ���� �迭

	puts("\nValues on entering staticArrayInit:");

	// �迭�� ���� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i]);  
	}//%zu�� printf�Լ����� ����ϴ� ���� ������. //�ַ� size_tŸ���� ������ ����� �� ���.

	puts("\nValues on exiting staticArrayInit:");

	// �迭�� ������ �����ϰ� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i] += 5);
	}
}

// �ڵ� ���� �迭�� �����ִ� �Լ�
void automaticArrayInit(void) {
	// �Լ��� ȣ��� ������ ��Ҹ� �ʱ�ȭ
	int array2[3] = { 1, 2, 3 }; // �ڵ� �迭

	puts("\nValues on entering automaticArrayInit:");

	// �迭�� ���� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i]); 
	}

	puts("\nValues on exiting automaticArrayInit:");

	// �迭�� ������ �����ϰ� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu = %d ", i, array2[i] += 5);
	}
}









// �Լ� ������Ÿ��
void staticArrayInit(void);
void automaticArrayInit(void);

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	puts("First call to each function:");
	staticArrayInit(); // ���� �迭 �ʱ�ȭ �Լ� ȣ��
	automaticArrayInit(); // �ڵ� �迭 �ʱ�ȭ �Լ� ȣ��

	puts("\nSecond call to each function:");
	staticArrayInit(); // ���� �迭 �ʱ�ȭ �Լ� ȣ��
	automaticArrayInit(); // �ڵ� �迭 �ʱ�ȭ �Լ� ȣ��

	return 0;
}

// ���� ���� �迭�� �����ִ� �Լ�
void staticArrayInit(void) {
	// �Լ��� ȣ��� �� ��Ҹ� 0���� �ʱ�ȭ
	static int array1[3]; // ���� �迭

	puts("\nValues on entering staticArrayInit:");

	// �迭�� ���� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	// �迭�� ������ �����ϰ� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array1[%zu] = %d ", i, array1[i] += 5);
	}
}

// �ڵ� ���� �迭�� �����ִ� �Լ�
void automaticArrayInit(void) {
	// �Լ��� ȣ��� ������ ��Ҹ� �ʱ�ȭ
	int array2[3] = { 1, 2, 3 }; // �ڵ� �迭

	puts("\nValues on entering automaticArrayInit:");

	// �迭�� ���� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i]);
	}

	puts("\nValues on exiting automaticArrayInit:");

	// �迭�� ������ �����ϰ� ���
	for (size_t i = 0; i < 3; ++i) {
		printf("array2[%zu] = %d ", i, array2[i] += 5);
	}
}









//�� �ڵ�� �迭 ��ü�� ������ �����ϰ�, �迭�� ��Ҹ� ������ �����ϴ� ����� �����ݴϴ�.
//modifyArray �Լ��� �迭�� �����ϰ�, modifyElement �Լ��� �迭 ����� ���� ���������� 
//���� �迭���� ������ ���� �ʽ��ϴ�.

#define SIZE 5 // �迭 ũ�� ����

// �Լ� ������Ÿ��
void modifyArray(int b[], size_t size);
void modifyElement(int e); // �迭 ��Ҹ� �����ϴ� �Լ�

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	int a[SIZE] = { 0, 1, 2, 3, 4 }; // �迭 �ʱ�ȭ

	puts("Effects of passing entire array by reference:\nThe values of the original array are:");

	// ���� �迭 ���
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	puts(""); // �ٹٲ�

	modifyArray(a, SIZE); // �迭�� �Լ��� �����Ͽ� ����
	puts("The values of the modified array are:");

	// ������ �迭 ���
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}

	// �迭 ����� �� ���
	printf("\n\nEffects of passing array element by value:\n");
	printf("The value of a[3] is %d\n", a[3]);
	modifyElement(a[3]); // �迭 ��Ҹ� ������ ����
	printf("The value of a[3] is %d\n", a[3]);

	return 0;
}

// modifyArray �Լ� ����
// "b"�� ���� �迭 "a"�� ����ŵ�ϴ�.
void modifyArray(int b[], size_t size) {  //c���� �ڵ������� �Լ��� �迭�� �ּҰ����� �����Ѵ�.
	// �迭�� �� ��Ҹ� 2��� ����
	for (size_t j = 0; j < size; ++j) {
		b[j] *= 2; // ���� �迭�� ������ ����
	}
}

// modifyElement �Լ� ����
// "e"�� �迭 ����� ���� ���纻�Դϴ�.
void modifyElement(int e) {
	e *= 2; // �Ű����� ����
	printf("Value in modifyElement is %d\n", e);
}






//�� �ڵ�� �־��� �迭�� ���� ���� �˰����� ����Ͽ� ������������ �����ϰ�, 
// ���� �迭�� ���ĵ� �迭�� ����մϴ�.

#define SIZE 10 // �迭 ũ�� ����

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	// �迭 �ʱ�ȭ
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Data items(value) in original order:"); // ���� �迭 ���

	// ���� �迭 ���
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	// ���� ����
	// �н� ���� �����ϴ� ����
	for (unsigned int pass = 1; pass < SIZE; ++pass) {
		// �� �н��� �� ���� �����ϴ� ����
		for (size_t i = 0; i < SIZE - 1; ++i) {
			// ������ ��Ҹ� ���ϰ� �ʿ� �� ��ȯ
			if (a[i] > a[i + 1]) {
				int hold = a[i]; // ���� �ӽ÷� ����
				a[i] = a[i + 1]; // ��ȯ
				a[i + 1] = hold; // ��ȯ
			}
		}
	}

	puts("\nData items(value) in ascending order:"); // ���ĵ� �迭 ���

	// ���ĵ� �迭 ���
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts(""); // �ٹٲ�


	return 0;
}





//searching - ���� Ž��
//�� �ڵ�� ����ڰ� �Է��� ������ �迭���� ���� �˻��� ���� ã��, �� ����� ���
// linearSearch �Լ��� �迭�� ��ȸ�ϸ� Ű�� ã�� �ش� �ε����� ��ȯ. 
// Ű�� ã�� ���� ��� -1�� ��ȯ�մϴ�.

#define SIZE 100 // �迭 ũ�� ����

// �Լ� ������Ÿ��
size_t linearSearch(const int array[], int key, size_t size);

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	int a[SIZE]; // �迭 ����

	// ������ ����
	for (size_t x = 0; x < SIZE; ++x) {
		a[x] = 2 * x; // �迭�� �� �Ҵ�  //{0,2,4,6,8,10,12 ...}
	}

	printf("Enter integer search key: ");
	int searchKey; // �迭���� ã�� ��
	scanf_s("%d", &searchKey); // ����ڷκ��� �Է� �ޱ�

	// �迭 a���� searchKey�� ã�� �õ�
	size_t index = linearSearch(a, searchKey, SIZE);

	// ��� ǥ��
	if (index != -1) {
		printf("Found value at index %zu\n", index); // ���� �߰ߵ� �ε��� ���
	}
	else { //-1�ΰ��
		puts("Value not found"); // ���� �߰ߵ��� ����
	}

	return 0;
}

// �迭���� ���� �˻��� �����ϴ� �Լ�
size_t linearSearch(const int array[], int key, size_t size) {
	// �迭�� ��ȸ
	for (size_t n = 0; n < size; ++n) {
		if (array[n] == key) {
			return n; // Ű�� �ε��� ��ȯ
		}
	}
	return -1; // Ű�� ã�� ���� ���
}






//�ڵ��̻�.!
#define SIZE 15 // �迭 ũ�� ����

// �Լ� ������Ÿ��
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// �Լ� main�� ���α׷� ������ �����մϴ�.
int main(void) {
	int a[SIZE]; // �迭 ����

	// ������ ����
	for (size_t i = 0; i < SIZE; i++) {
		a[i] = 2 * i; // �迭�� �� �Ҵ� {0,2,4,6,8,...}
	}

	printf("%s", "Enter a number between 0 and 28: "); // ����� �Է� ��û
	int key; // �迭���� ã�� ��
	scanf_s("%d", &key); // ����ڷκ��� �Է� �ޱ�

	printHeader(); // ��� ���

	// �迭���� Ű �˻�
	size_t result = binarySearch(a, key, 0, SIZE - 1);

	// ��� ǥ��
	if (result != (size_t)-1) {
		printf("Value found at index %zu\n", result); // ã�� ���� �ε��� ���
	}
	else {
		printf("%d not found\n", key); // ���� �߰ߵ��� ����
	}

	return 0;
}



// �迭���� ���� �˻��� �����ϴ� �Լ�
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {
	// low �ε����� high �ε������� �۰ų� ���� ������ ����
	while (low <= high) {
		// �˻� ���� ����迭�� �߰� ��� ����
		size_t middle = (low + high) / 2;

		// ���� �ݺ����� ���Ǵ� ����迭 ǥ��
		printRow(b, low, middle, high);

		// searchKey�� �߰� ��ҿ� ��ġ�ϸ� �߰� ��ȯ
		if (searchKey == b[middle]) {
			return middle;
		}
		// searchKey�� �߰� ��Һ��� ������ high ����
		else if (searchKey < b[middle]) {
			high = middle - 1; // ����迭�� ���� �� ����
		}
		// searchKey�� �߰� ��Һ��� ũ�� low ����
		else {
			low = middle + 1; // ����迭�� ���� �� ����
		}
	}

	return (size_t)-1; // searchKey�� ã�� ���� ��� //-1�� size_t������ ��ȯ.=> 32��Ʈ�ý��ۿ����� 4294967295���� ��ȯ..
	//size_t�� �迭�� ũ�⳪ �޸𸮺���� ũ�⸦ ��Ÿ���µ� ���
}



// ��� ���(header:���� ���� �ִ� ��..)�� �μ��ϴ� �Լ�
void printHeader(void) {
	puts("\nIndices:"); // �ε��� ��� ǥ��

	// �� ��� ���
	for (unsigned int i = 0; i < SIZE; ++i) {
		printf("%3u ", i);
	}

	puts(""); // �ٹٲ�

	// '-' ������ �� ���
	for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
		printf("%s", "-");
	}

	puts(""); // �ٹٲ�
}




// ���� ó�� ���� �迭�� �� ���� �μ��ϴ� �Լ�
void printRow(const int b[], size_t low, size_t mid, size_t high) {
	// ��ü �迭�� ����
	for (size_t i = 0; i < SIZE; ++i) {
		// ���� ����迭 ���� �ܺ��� ��� ���� ǥ��
		if (i < low || i > high) {
			printf("%s", "  ");
		}
		// �߰� ��� ǥ��
		else if (i == mid) {
			printf("%3d*", b[i]); // �߰� �� ǥ��
		}
		// ����迭�� �ٸ� ��� ǥ��
		else {
			printf("%3d ", b[i]);
		}
	}

	puts(""); // �ٹٲ�
}






