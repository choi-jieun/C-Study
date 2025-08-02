#include <stdio.h>
#include <stdlib.h>

/*
//srand�� rand�Լ� �� ���ؼ� �˾ƺ���
int main() {
    
   
    srand(67); //seed�� ������ �Ź� ���� ���� ���� ����
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1���� 6������ ���� ����
    }
    puts("");

    srand(89);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1���� 6������ ���� ����
    }
    puts("");


    srand(67);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand() % 6 + 1); // 1���� 6������ ���� ����
    }

    return 0;
} 
*/





/*
//������ ��� ����

enum status { continue_game, won, lost }; 
//status: ������ �̸�, continue_game, won, lost: ���������� ���ǵ� ����� (���� 0,1,2�� ���� ����)

int main() {
    enum status game_status; //������ ��� 
    //game_status�� ������ ������ continue_game, won, lost �� �ϳ��� ���� ����.

    game_status = continue_game; // ���¸� continue_game���� ����

    if (game_status == continue_game) {
        printf("������ ����մϴ�.\n");
    }
    else if (game_status == won) {
        printf("���ӿ��� �̰���ϴ�!\n");
    }
    else if (game_status == lost) {
        printf("���ӿ��� �����ϴ�.\n");
    }

    return 0;
}
*/








/*
//������ �������� ���õ� ���� �ڵ� ( ��������? ��������?  static��������?)
// ��������: Ư�� ����̳� �Լ� �������� ��ȿ�ϸ�, ����� ����� �޸𸮿��� ������
// static �������� : Ư�� �Լ� �������� ��ȿ������, �Լ� ȣ���� ������ ���� ������

// �Լ� ���� ����
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;  // ���� ����

int main(void)
{
    int x = 5;  // main �Լ��� ���� ����

    printf("local x in outer scope of main is %d\n", x);

    { // ���ο� ������ ����
        int x = 7;  // ���ο� �������� ���� ����
        printf("local x in inner scope of main is %d\n", x);
    } // ������ ��

    printf("local x in outer scope of main is %d\n", x);

    // �Լ� ȣ��
    useLocal();        // ���� ���� ���         
    useStaticLocal();  // static ���� ���� ���
    useGlobal();       // ���� ���� ���

    useLocal();        // ���� ���� ���ʱ�ȭ
    useStaticLocal();  // static ���� ���� �� ����
    useGlobal();       // ���� ���� �� ����

    printf("\nlocal x in main is %d\n", x);

    return 0;
}

void useLocal(void)
{
    int x = 25;  // ���� ���� (�Լ� ȣ�� �ø��� �ʱ�ȭ)
    printf("\nuseLocal�Լ� �ȿ� �ִ� ��������x�� %d�Դϴ�. after entering useLocal\n", x); //25
    ++x;
    printf("useLocal�Լ� �ȿ� �ִ� ��������x�� %d�Դϴ�. before exiting useLocal\n", x); //26
}

void useStaticLocal(void)
{
    static int x = 50;  // static ���� ���� (ó�� �� ���� �ʱ�ȭ)
    printf("\nuseStaticLocal�Լ� �ȿ� �ִ� static���� ������ %d�Դϴ�. on entering useStaticLocal\n", x);
    ++x;
    printf("useStaticLocal�Լ� �ȿ� �ִ� static���� ������ %d�Դϴ�. on exiting useStaticLocal\n", x);
}

void useGlobal(void)
{   //���� ���� ����
    printf("\nglobal x �� %d�Դϴ�. on entering useGlobal\n", x);
    x *= 10;
    printf("global x �� %d�Դϴ�. on exiting useGlobal\n", x);
}
*/










/*
// ���丮���� ����ϴ� ��� �Լ� ����
unsigned long long int factorial(unsigned int number);

int main(void)
{
    // 0���� 21������ ������ ���丮���� ����Ͽ� ���
    for (unsigned int i = 0; i <= 21; ++i) {
        printf("%u! = %llu\n", i, factorial(i));
        //%llu�� unsigned long long int���� ����ϱ� ���� ���� ������.
    }

    return 0;
}

// ���丮�� ��� �Լ�
unsigned long long int factorial(unsigned int number)  
//long long int: �Ϲ����� int���� �� ū ������ ������ ������ �� �ִ� �ڷ���, ����Ʈ �� ���� �Ҵ�
//ll�� long long�� �ǹ�
{
    // �⺻ ����: number�� 0 �Ǵ� 1�� ���� 1�� ��ȯ
    if (number <= 1) {
        return 1;
    }
    // ��� ȣ��: number * (number - 1)!�� ��ȯ
    else {
        return number * factorial(number - 1);
    }
}
*/







/*
//����ڰ� ������ �Է��ϸ� �Ǻ���ġ ������ �� ������° ���� �˷��ִ� ���α׷�.  
//�Ǻ���ġ ����:
//ù ��° ���� 0�̰�, �� ��° ���� 1�Դϴ�. 
// �� ������ ���� ���� �� ���� ������ �����˴ϴ�.

// 0 1 2 3 5 8 

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int number;  // ����ڰ� �Է��� ��

    // ����ڷκ��� ���� �Է� �ޱ�
    printf("Enter an integer: ");
    scanf_s("%u", &number);

    // �Ǻ���ġ �� ���
    unsigned long long int result = fibonacci(number);

    // ��� ���
    printf("Fibonacci(%u) = %llu\n", number, result);

    return 0;
}

// �Ǻ���ġ ���� ����ϴ� ��� �Լ� ����
unsigned long long int fibonacci(unsigned int n)
{
    // �⺻ ����: n�� 0 �Ǵ� 1�̸� n�� ��ȯ
    if (n == 0 || n == 1) {
        return n;
    }
    // ��� ȣ��: F(n) = F(n-1) + F(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
*/
