#include <stdio.h> //�������

int main_printf_scanf_puts(void) {

	//printf : ����Լ�
	//scanf  : �Է��ռ�
	int a, b;
	printf("ù ��° ������ �Է��ϼ���:\n");
	scanf_s("%d", &a);
	printf("a�� %d\n", a);

	printf("�� ��° ������ �Է��ϼ���: ");
	scanf_s("%d", &b);
	printf("b�� %d\n", b);

	int c, d; //���� ���� �Է� ����
	printf("2���� ������ �Է��ϼ��� : "); //�ΰ��� ������ �����̳� ������ �����Ѵ�.
	scanf_s("%d%d", &c, &d); //2���� ������ �Է¹ޱ�
	printf("c�� %d, d�� %d\n", c, d);


	//printf�� �̿��� ���̺� ���� ����� //�ΰ� �̻� ���� ����� �� ����!
	printf("%4s%25s  ", "year", "the years deposit");




	//puts : �˾Ƽ� \n ����!
	puts("jieun\n"); //puts�� ���� ���ڿ��� �����. �ٹٲޱ��� ����.
	puts("jieun");


	puts("-------------------------------------");

	int score;
	printf("what's your score?\n");
	scanf_s("%d", &score);

	if (score >= 60) {
		puts("Passed");
	}
	else {
		puts("Failed");
		puts("Try again");
	}
	puts(score >= 60 ? "Passed" : "Failed"); //���� �ǹ� ( ����? ���϶� ������ �� : ������ �� ������ ��)

	






	return 0;
}




//printf
//�Ҽ��� ���ڸ� ������ ǥ�� ����
//������ ���� or ���� ���İ���
//���ϴ� ��ġ�� ��� ����
//e��� ǥ���� ����
//8����,16���� ǥ���� ����



//����(����)������
//printf("conversion specification", argument1)

//%d, %i = ���� 
//%u = unsigned int  // -455 --> 4294966841�� ��µ�. 
//%o = 8���� octal
//%x = 16���� (�ҹ��ڷ� ǥ�� hexadecimal
//%X = 16���� (�빮�ڷ� ǥ��
//%hd = ª�� ���� �ڷ���
//%ld = long ����
//%lld = long long ����


int main(void)
{ //������ �ٷ��
    printf("%d\n", 455); // ���� ���
    printf("%d\n", +455); // ��� ��ȣ�� ��µ��� ����
    printf("%d\n", -455); // ���� ��ȣ ���
    printf("%i\n\n", 455); // ���� ��� (d�� ����)

    printf("%u\n", 455); // ��ȣ ���� ���� ���
    printf("%u\n\n", -455); //1����Ʈ�� 32��Ʈ�϶� 2�Ǻ����� 10����ǥ������ ��Ÿ�� ��

    printf("%hd\n", 32000); // short�� ���� ���
    printf("%ld\n\n", 2000000000L); // L ���̻�� ���ͷ��� long ���̶�� ��������� �����ϴ� ����.

    printf("%o\n", 455); // 8������ �ٲ㼭 ���
    printf("%x\n", 455); // 16������ �ٲ㼭 (�ҹ���) ���
    printf("%X\n", 455); // 16������ �ٲ㼭 (�빮��) ���

    return 0;
}















//�Ҽ��� �ٷ��

int main(void)

{
    printf("%f\n", 1234567.89); //����Ʈ�� �Ҽ��� 6�ڸ��� ǥ��(7�ڸ����� �ݿø�)
    printf("%F\n\n", 1234567.89); //����Ʈ�� �Ҽ��� 6�ڸ��� ǥ��(7�ڸ����� �ݿø�)


    //e��� ǥ��: exponential notation ������ ǥ���.


    //��.xxxxxx ������.
    //������ ������������ ǥ��
    //�Ҽ��� 6�ڸ����� ǥ��(7�ڸ����� �ݿø�)
    printf("%e\n", 0.123456789); // ���� �������� ��� //e+06= x 10�� 6����
    printf("%e\n", +1234567.89); // ��� ��ȣ�� ��µ��� ����
    printf("%e\n", -1234567.89); // ���� ��ȣ ���
    printf("%E\n\n", 1234567.89); // ���� ���� (�빮�� E)�� ���




    //%g�� ������ ũ�⿡ ���� ����ǥ���� or �Ϲ�ǥ����� �ڵ����� ����
    // e+06 �̻�.. e-05����... �̸� ������������ ���  --> = %e
    // �ƴϸ� �״�� �Ϲ� ǥ������� ���    --> = %f
    //���ʿ��� 0�� �����Ѵ�.
     //�Ҽ������� ���� ���� �ؼ� 6��

    printf("%g\n", 1234567.89);
    printf("%G\n\n", 1234567.89);

    double a = 123.456;
    double b = 0.0001234;
    double c = 1230000.0;

    printf("%g\n", a);  // �Ϲ� ǥ��� 
    printf("%g\n", b);  // �Ϲ� ǥ��� ???
    printf("%g\n", c);  // ���� ǥ��� 

    return 0;
}







//%c
//%s

int main(void)
{
    char character = 'A'; // char �ʱ�ȭ
    printf("%c\n", character); // ���� ���

    printf("%s\n", "This is a string"); // ���ڿ� ���

    char string[] = "This is a string"; // char �迭 �ʱ�ȭ
    printf("%s\n", string); // �迭 ���� ���

    const char* stringPtr = "This is also a string"; // char ������ �ʱ�ȭ
    printf("%s\n", stringPtr); // �����Ͱ� ����Ű�� ���ڿ� ���

    return 0;
}









//%p: �ּҰ��� ����ϱ� ���� ���
//%% : %�� ����ϱ� ����

int main(void)
{
    int x = 12345; // int x �ʱ�ȭ
    int* ptr = &x; // x�� �ּҸ� ptr�� �Ҵ�   //ptr--> x

    printf("The value of ptr is %p\n", ptr); // ptr�� �� ���
    printf("The address of x is %p\n\n", &x); // x�� �ּ� ���

    printf("Printing a %% in a format control string\n"); // ���� ���� ���ڿ����� %% ���

    return 0;
}





//field widths
//����������, ��������
//���ϴ� ��ġ�� ��°���

int main(void)
{
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n", 12345); //�ʰ��� �׳� ���

    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234); //�ʰ��� �׳� ���
    printf("%4d\n", -12345); //�ʰ��� �׳� ���

    return 0;
}







//precision ���е�
//%.4d : 4�ڸ��� ������
//%.4f : �Ҽ��� �ڸ����� 4��
//%.3e : �Ҽ��� �ڸ����� 3���� ǥ��
//%.3g : �Ҽ��� ���� ���� �����ؼ� 3�ڸ��� ǥ��
//%.11s: ���ڿ� 11���� ���


//precision + field widths
//%9.3f: 9ĭ����, �Ҽ��� 3�ڸ������� ǥ��(4�ڸ����� �ݿø�)


//printf("%*.*f",7,2,98.736) �̷� ǥ���� ���� --> ����98.74���

int main(void)
{
    puts("Using precision for integers"); // ������ ���� ���е� ���
    int i = 873; // int i �ʱ�ȭ
    printf("\t%.4d\n\t%.9d\n\n", i, i); // ���� ��� (���е� ����)

    puts("Using precision for floating-point numbers"); // �ε� �Ҽ��� ���ڿ� ���� ���е� ���
    double f = 123.94536; // double f �ʱ�ȭ
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f); // �ε� �Ҽ��� ��� (���е� ����)

    puts("Using precision for strings"); // ���ڿ��� ���� ���е� ���
    char s[] = "Happy Birthday"; // char �迭 s �ʱ�ȭ
    printf("%.11s\n", s); // ���ڿ� ��� (���е� ����)

    return 0;
}










//flag
// - : ���� ����
int main(void) {
    printf("%-10d", 123);
}


// + : +���� ��ü���
//selfreview
int main(void) {
    printf("%10s%10s\n", "Fahrenheit", "Celsius");

    for (int i = 0; i <= 212; i++) {
        double Celsius = 5.0 / 9.0 * (i - 32);
        printf("%10d%+10.3f\n", i, Celsius); // + : +���� ��ü���
    }
}



//' ': ����϶� ' ' �״�� ���� ���
int main(void) {
    printf("% d\n% d\n", 547, -547);
}



// # : ���������� �˼��ֵ���! 8���� ��°��� 0�� �̸� ����, 16���� ��°��� 0x or 0X ����
//g�� ���� ���̸� �Ҽ��� 0�� ǥ���� �� �ִ�.
int main(void) {
    int c = 1427;
    printf("%#o\n",c);
    printf("%#x\n", c);
    printf("%#X\n\n", c);

    double p = 1427.0;
    printf("%g\n", p); //���ʿ��� 0 ����
    printf("%#g\n", p); //�Ҽ��� ǥ���ϱ� ���ؼ�
}


// 0 : ������ �� ������ 0�� ä��� //%09d 9�ڸ� ����, ���� �ڸ����� 0 ä�� �ֱ�



// �齽����(\) ���ؼ� escape����. 







//scanf
//d: ����
//i: ���� + 8���� + 16���� , 0�� OX�� �տ� �Ἥ ����,8����,16������ �����Ѵ�.


int main(void) {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    puts("Enter seven integers: ");
    scanf_s("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f,&g);

    puts("\nThe input displayed as decimal integers is");
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g); //10������ �ٲ㼭 �����.

}



int main(void)
{

    
    double a; // double ���� a ����
    double b; // double ���� b ����
    double c; // double ���� c ����

    puts("Enter three floating-point numbers:"); // ����� �Է� ��û
    scanf_s("%le%lf%lg", &a, &b, &c); // �� ���� �ε� �Ҽ��� ���� �Է�

    printf("\nHere are the numbers entered in plain:"); // �Է��� ���� ���
    puts("floating-point notation:\n");
    printf("%f\n%f\n%f\n", a, b, c); // �Է��� ���� ���
    

    printf("%2d\n", 1458);
    printf("%.2g", 12.34);

    return 0;
}



//char x;
// char y[9];
//scanf(%c%8s",&x,y)//�Է��� ���� sunday�϶� x�� s, y�� unday�����. �и����尡��

//scan sets
//scanf("%8[aeiou]",&a ): ���������� ��ĵ
//scanf("%8[^aeiou]",&a) : ������ �ƴѰ� ������ ��ĵ 8:���� �ִ��� ����.
//scanf("%d-%d-%d", &day,&month,&year)//Ư�� ����(-) �����ϰ� ��ĵ����
//scanf("%d*c%d*c%d", &day,&month,&year)//� �����̵��� �����ϰ� ��ĵ����
