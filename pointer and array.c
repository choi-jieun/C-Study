#include <stdio.h>


int main(void) {
	
	//�迭 arr�� ����Ű�� ������(pointer) = �迭 arr
	int arr[3] = { 5,10,15 };
	int * pointer = arr;                             // pointer ->  {5,10,15}
	printf("poiter[0]�� %d�Դϴ�\n", pointer[0]);
	printf("poiter[1]�� %d�Դϴ�\n", pointer[1]);
	printf("poiter[2]�� %d�Դϴ�\n", pointer[2]);
	
	//*****arr�� = arr�� �ּ� = arr[0]���ּ� = pointer�� ��.
	printf("arr�迭�� �� ��ü�� %d�Դϴ�\n", arr);
	printf("arr�迭�� �ּҴ� %d�Դϴ�\n", &arr);
	printf("arr[0]�� �ּҴ� %d�Դϴ�\n", &arr[0]);
	printf("pointer�� �� ��ü�� %d�Դϴ�\n", pointer);

	//*****�� �迭�� �ּҴ� 4 ���̰� ���� ���ӵ� ����. (�迭 �ϳ��� ��ҿ� 4����Ʈ �ο�..)
	printf("arr[1]�� �ּҴ� %d�Դϴ�\n", &arr[1]);
	printf("arr[2]�� �ּҴ� %d�Դϴ�\n", &arr[2]);

	

	//*****�����Ͱ� ����Ű�� ���� �迭�� 0��° ��.
	printf("pointer�� ����Ű�� ���� %d�Դϴ�\n", * pointer);


	//&*�� �ƹ��͵� ���� �Ͱ� ���� &�� �ּ��̸�, *�� �� �ּ��� ���̱� ����
	
	return 0;
}








//�迭�� ����Ű�� �����͸� Ȱ���Ͽ� �迭 ���� ���� �ٲٱ�
//++vPtr or vPtr++:�� �� ��� ����Ŵ
//--vPtr or  vPtr-- �� �� ��� ����Ŵ

#include <ctype.h> //toupper�Լ� ��� ����

void convertToUppercase(char *sPtr); //�Լ� ������Ÿ��(����)


int main(void)
{
    char string[] = "cHaRaCters and $32.98"; //string array

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);// �Լ�ȣ��
    printf("\nThe string after conversion is: %s\n", string);

    return 0;
}



void convertToUppercase(char* sPtr) //pass by reference.   //sPtr -> {'c', 'H', 'a', 'R' ,'a', 'C', 't', 'e', 'r', 's' ' '
{
    while (*sPtr != '\0') { //nullĳ���Ͱ� �ƴѵ���.(nullĳ���ʹ� ���� ���� ����)
        *sPtr = toupper(*sPtr); //�빮�ڷ� ��ȯ (Non-const Data�̱� ������ ����) //sPtr�� ù��° ��Ҹ� ����Ŵ. , topper(*sPtr)�� 'C'�� // string[0] = sPrt[0] = "c"
        ++ sPtr; //sPtr�� ����Ű�� ���� ������°�� ��.
    }
}





//void printCharacters(const char* sPtr); // �Լ� ������Ÿ��
//
//int main(void) {
//    // ���� �迭 �ʱ�ȭ
//    char string[] = "print characters of a string";
//
//    puts("The string is:"); // ���ڿ� ���
//    printCharacters(string); // ���ڿ��� �� ���� ���
//
//    return 0;
//}
//
//
//void printCharacters(const char* sPtr) {  //sPtr -> {'p','r','i','n','t',' ',.......}
//    // sPtr�� �б� ���� ������, �����Ͱ� ����Ű�� ���ڸ� ������ �� �����ϴ�.
//    // ���ڿ� ��ü�� ����
//    for (; *sPtr != '\0'; ++sPtr) { // �� ���� ���ڰ� �ƴ� ������ ����
//        //�ʱ�ȭ ���� (* sPtr�� �̹� �Ű������� ���޵� �������̴�.
//        printf("%c\n", *sPtr); // ���� ���ڸ� ���
//    }
//}





//int main() {
//    char a = 'A';  // ���� ����
//    char* p1 = &a; // a�� �ּҸ� ����Ű�� char ������      //p1 -> a
//
//    char str[] = "Hello, World!"; // ���ڿ�
//    char* p2 = str; // ���ڿ��� ����Ű�� char ������       //p2 -> {'H', 'e' ,'l', 'l', 'o', ',', ' ','W', 'o', 'r', 'l', d''}
//
//    // ���� ���ڸ� ����Ű�� ������ ���
//    printf("p1�� ����Ű�� ��: %c\n", *p1);
//
//    // ���ڿ��� ����Ű�� ������ ���
//    printf("p2�� ����Ű�� ���ڿ�: %s\n", p2);
//
//    // �����ͷ� ���ڿ� ���� ����
//    printf("p2�� ����Ű�� ù ��° ����: %c\n", *p2);
//    printf("p2�� ����Ű�� �� ��° ����: %c\n", *(p2 + 1));
//    printf("p2�� ����Ű�� �� ��° ����: %c\n", *(p2 + 2));
//
//    return 0;
//}








////������ ����!!
//int main(void) {
//    int a[] = { 1,2,3,4 };
//    int *aPtr;
//    aPtr = &a; // aPtr -> {1,2,3,4,}
//
//    printf("aPtr�� ���� %d�Դϴ�\n", aPtr); //0��° ����� �ּ�
//    printf("aPtr + 1�� ���� %d�Դϴ�\n", aPtr + 1); //1��° ����� �ּ�
//    printf("aPtr + 2�� ���� %d�Դϴ�\n", aPtr + 2); //2��° ����� �ּ�
//    printf("aPtr + 3�� ���� %d�Դϴ�\n", aPtr + 3); //3��° ����� �ּ�
//    puts("");
//    printf("aPtr�� ����Ű�� ���� %d�Դϴ�\n", *aPtr); //0��° ����� �ּ�
//    printf("aPtr + 1�� ����Ű�� ���� %d�Դϴ�\n", *(aPtr + 1)); //1��° ����� �ּ�
//    printf("aPtr + 2�� ����Ű�� ���� %d�Դϴ�\n", *(aPtr + 2)); //2��° ����� �ּ�
//    printf("aPtr + 3�� ����Ű�� ���� %d�Դϴ�\n", *(aPtr + 3)); //3��° ����� �ּ�
//
//    return 0;
//}








////���η� �迭 �ε��� ����!
//int main(void) {
//    int a[] = { 1,2,3,4 };
//    int* aPtr;
//    aPtr = &a;
//
//    for (int i = 0; i < 4; i++) {
//        printf("aPtr[%d]�� %d�Դϴ�\n", i, aPtr[i]);
//    }
//
//}
