#include <stdio.h>

#define _CRT_SECURE_NO_WARMIMGS

//fgetc fgets : c/s�� ���Ϸ� ���� �о����
//fputc fputs : c/s�� ���Ͽ� ����

//fprintf fscanf

//fread  fwrite

//fseek




//int main(void) {
//	
//	FILE * file = fopen("jieun.txt", "w");
//	//������ ������ ���� ����
//	//������ �̹� �����ϸ� ���� ���� ����
//	if (file == NULL) {
//		printf("���Ͽ������");
//		return 1;
//	}
//	else {
//		fputs("fputs�� �̿��ؼ� ���� ����Կ�\n", file);
//		fputs("�� �������� Ȯ�����ּ���\n", file);
//	}
//	fclose(file);
//	return 0;
//}
//
//
//
//
//#define MAX 1000000
//
//int main(void){
//	char line[MAX];
//	
//	FILE * file = fopen("jieun.txt", "r"); //�б���
//	if (file == NULL) {
//		printf("���Ͽ������");
//		return 1;
//	}
//	fgets(line, MAX, file);//����� ��, ������, �о�������� ������
//	printf("%s", line);
//
//
//	
//	fclose(file);
//
//
//	return 0;
//}
//
//
//
//
//
//int main(void) {
//	FILE* file = fopen("jieun.txt", "w");
//	if (file == NULL) {
//		printf("���Ͽ������");
//		return 1;
//	}
//	else {
//		fprintf(file,"%s","fprintf�� �̿��ؼ� ����Կ�\n");
//		fprintf(file,"%s", "�� �������� Ȯ�����ּ���\n");
//	}
//	fclose(file);
//	return 0;
//}
//
//
//
//
//int main(void) {
//	char line[MAX];
//	FILE* file = fopen("jieun.txt", "r"); //�б���
//	if (file == NULL) {
//		printf("���Ͽ������");
//		return 1;
//	}
//	else {
//		while (fgets(line, MAX, file) != NULL) {
//			//����� ��, ������, �о������ ������
//			printf("%s", line);
//		}
//		fclose(file);
//
//
//		return 0;
//	}
//}
//
//
//
//
//
//
//
//# pragma warning (disable : 4996) //���� �����ϰڴ�.
//
//
//int main(void) {
//	FILE* cfPtr;
//
//	cfPtr = fopen("client.txt", "w");
//	if (cfPtr == NULL) {
//		puts("������ �� �� �����ϴ�.");
//	}
//	else {
//		puts("Enter the account, name, and balace");
//		puts("Enter EOF to end input");
//		printf("%s", "? ");
//
//		unsigned int account;
//		char name[30];
//		double balance;
//
//		scanf_s("%d%29s%lf", &account, name,30, &balance);
//
//		while (!feof(stdin)) {
//			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
//			printf("%s", "? ");
//			scanf_s(" %d%29s%lf", &account, name,30, &balance);
//		}
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//# pragma warning (disable : 4996) //���� �����ϰڴ�.
//
//
//
//int main(void) {
//
//	FILE * cfPtr; // cfPtr = clients.txt ���� ������
//
//	// fopen���� ������ ����, ������ �� �� ������ ���α׷� ����
//	cfPtr = fopen("client.txt", "r");
//	if (cfPtr== NULL){
//		puts("������ �� �� �����ϴ�.");
//	}
//	else { // ���Ͽ��� ����, �̸� �� �ܾ� �б�
//		unsigned int account; // ���� ��ȣ
//		char name[30]; // ���� �̸�
//		double balance; // ���� �ܾ�
//
//		printf("%-10s%-13s%-s\n", "����", "�̸�", "�ܾ�"); // ��� ���
//		fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); // ���Ͽ��� ù ��° ���ڵ� �б�
//
//		// ������ ���� �ƴ� ������
//		while (!feof(cfPtr)) {
//			printf("%-10d%-13s%7.2f\n", account, name, balance); // ���� ���� ���
//			fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); // ���� ���ڵ� �б�
//		}
//	}
//
//	fclose(cfPtr); // fclose�� ���� �ݱ�
//}
//
//
//
//
//
//
//# pragma warning (disable : 4996) //���� �����ϰڴ�.
//
//// ���α׷� ���� ����
//int main(void) {
//	FILE* cfPtr; // clients.txt ���� ������
//
//	// fopen���� ������ ����, ������ �� �� ������ ���α׷� ����
//
//	cfPtr=fopen("client.txt", "r");
//	if (cfPtr== NULL){
//		puts("������ �� �� �����ϴ�.");
//	}
//	else {
//		// ��û �ɼ� ���
//		printf("%s", "Enter request:\n"
//			"  1 - List accounts with zero balances\n"
//			"  2 - List accounts with credit balances\n"
//			"  3 - List accounts with debit balances\n"
//			"  4 - End of run\n");
//		unsigned int request; // ��û ��ȣ
//		scanf_s("%d", &request);
//
//		// ������� ��û ó��
//		while (request != 4) {
//			unsigned int account; // ���� ��ȣ
//			double balance; // ���� �ܾ�
//			char name[30]; // ���� �̸�
//
//			// ���Ͽ��� ����, �̸� �� �ܾ� �б�
//			fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//
//			switch (request) {
//			case 1:
//				puts("\nAccounts with zero balances");
//				// ���� ������ ���� (eof����)
//				while (!feof(cfPtr)) {
//					// �ܾ��� 0�� ��츸 ���
//					if (balance == 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// ���Ͽ��� ����, �̸� �� �ܾ� �б�
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//
//			case 2:
//				puts("\nAccounts with credit balances:\n");
//				// ���� ������ ���� (eof����)
//				while (!feof(cfPtr)) {
//					// �ܾ��� 0���� ���� ��츸 ���
//					if (balance < 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// ���Ͽ��� ����, �̸� �� �ܾ� �б�
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//
//			case 3:
//				puts("\nAccounts with debit balances:\n");
//				// ���� ������ ���� (eof����)
//				while (!feof(cfPtr)) {
//					// �ܾ��� 0���� ū ��츸 ���
//					if (balance > 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// ���Ͽ��� ����, �̸� �� �ܾ� �б�
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//			}//swithch�� ��
//
//			rewind(cfPtr); // cfPtr�� ������ �������� �ǵ���
//			printf("%s", "\n? ");
//			scanf_s("%d", &request);
//		}
//
//		puts("End of run.");
//		fclose(cfPtr); // fclose�� ���� �ݱ�
//	}
//}
//
//
//
//
//
//
//# pragma warning (disable : 4996) //���� �����ϰڴ�.
////scanf : �ƿ� ��ĵ�ؼ� ������� �ع���
//
////fwrite( ����� �������� ������, ����� ���� �������� ����Ʈ, ����� �׸��� ����, ������������) 
//// -> ��ü ����Ʈ�� ����� ������������ ����Ʈ x ����� �׸��� ����
//
//struct ClientData {
//	unsigned int acctNum;
//	char lastName[15];
//	char firstName[10];
//	double balance;
//};
//
//int main(void) {
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("accounts.dat", "wb")) == NULL) { //�������� ���� ���� //���������� ���������Ͱ� ���� ����Ǿ� �־ ������ ����� �а� �ٷ� �����ϱ�� �����.
//	                                                      //������� �� ��� ��ȯ�� ���� �ʾ� ������.
//		puts("File could not be opened.");
//	}
//	else {
//		struct ClientData blankClient = { 0,"","",0.0 };
//
//		for (unsigned int i = 1; i <= 100; ++i) { //��� ����.
//			fwrite(&blankClient, sizeof(struct ClientData), 1, cfPtr); //sizeof(struct ClientData): ����üũ��(����Ʈ)= acctNum����Ʈ+ lastName����Ʈ+ firstName����Ʈ+ balance����Ʈ
//		}
//		
//	}
//	fclose(cfPtr);
//}
//
//
//
//
//struct ClientData {
//	unsigned int acctNum;
//	char lastName[15];
//	char firstName[10];
//	double balance;
//};
//
//int main(void) {
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
//		puts("File could not be opened.");
//	}
//	else {
//		struct ClientData Client = { 0,"","",0.0 };
//
//		printf("%s", "Enter account number ( 1to 100, 0 to end input): ");
//		scanf("%d", &Client.acctNum);
//
//		while (Client.acctNum != 0) {
//			printf("%s", "\nEnter lastname, firstname, balance: ");
//
//			fscanf(stdin, "%14s%9s%lf", Client.lastName, Client.firstName, &Client.balance);
//
//			fseek(cfPtr, (Client.acctNum - 1) * sizeof(struct ClientData), SEEK_SET);
//
//			fwrite(&Client, sizeof(struct ClientData), 1, cfPtr);
//
//			printf("%s", "\nEnter account number: ");
//			scanf("%d", &Client.acctNum);
//		}
//	}
//}
//
//
//
///*
////fseek : Ư�� ���� ��ġ�� �����Ѵ�. �аų� ���� �Լ� �ƴ�.
//fseek(����������,������ġ���� �̵��� ����Ʈ ��, ������ġ ����)
//SEEK_SET: ������ ������ ����
//SEEK_CUR: ���� ���� ��ġ�� ����
//SEEK_END: ������ ���� ����
//*/
//
//
//
//# pragma warning (disable : 4996) //���� �����ϰڴ�.
//#include <stdio.h>
//
//int main() {
//	FILE* file; //file -> FILE 
//	int numbers[] = { 10, 20, 30, 40, 50 };
//	int newNumber = 99;
//
//	// 1. ���� ���� ���� ����
//	file = fopen("data.bin", "wb"); //����(Binary) ���� ���� ���� //wb = ������忡�� ��������
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	// 2. �迭 �����͸� ���Ͽ� ���
//	fwrite(numbers, sizeof(int), 5, file); //number[]�迭�� ���� ���� 5���� file�� ���� //10 20 30 40 50 ��������
//	fclose(file); 
//
//
//
//	// 3. ���� �б�/���� ���� ����
//	file = fopen("data.bin", "r+b"); // r+, w+, a+ �� ����&�б� ����
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	// 4. �� ��° ����(30)�� ��ġ�� �̵�
//	fseek(file, sizeof(int) * 2, SEEK_SET); // 0-based index
//	fwrite(&newNumber, sizeof(int), 1, file); //newnumber�� ����� �����͸� 1���� file�� ����.
//
//	fclose(file);
//
//
//
//	// 5. ���� �б�: ��ϵ� ������ Ȯ��
//	file = fopen("data.bin", "rb"); //�б� ���
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	//������ ���ȴٸ�
//	printf("Updated Numbers:\n");
//	int temp;
//	for (int i = 0; i < 5; i++) {
//		fread(&temp, sizeof(int), 1, file); //���Ͽ��� sizeof(int)����Ʈ�� 1���� temp�� ���� 
//		                                   //���� �����Ͱ� ������ ���� ��ġ ����Ű�� ù��° ���ڸ� �о� temp�� ����.
//		                                   //���� �����ʹ� ù ��° ���� ���� ��ġ�� �̵�.
//		printf("%d ", temp);
//	}
//	printf("\n");
//
//	fclose(file);
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//struct ClientData {
//	unsigned int acctNum;
//	char lastName[15];
//	char firstName[10];
//	double balance;
//};
//
//int main(void) {
//	FILE* cfPtr;
//
//	if ((cfPtr = fopen("client.txt", "r")) == NULL) {
//		puts("File could not be opened.");
//	}
//
//	else {
//		printf("%-6s%-16s%-11s%10s\n","Acct","Last Name","First Name", "Balance");
//
//		while (!feof(cfPtr)) { //feof(): ������ ���̸� True ��ȯ
//			struct ClientData client = { 0,"","",0.0 };
//
//			int result =fread(&client, sizeof(struct ClientData), 1, cfPtr); //fread�� ��ȯ���� 1�̸� ���������� �����͸� ����
//
//			if (result != 0 && client.acctNum != 0) {
//				printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
//			}
//			
//		}
//	}
//	fclose(cfPtr);
//}
//
//
//
//
//
