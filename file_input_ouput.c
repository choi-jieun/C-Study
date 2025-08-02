#include <stdio.h>

#define _CRT_SECURE_NO_WARMIMGS

//fgetc fgets : c/s를 파일로 부터 읽어오기
//fputc fputs : c/s를 파일에 쓰기

//fprintf fscanf

//fread  fwrite

//fseek




//int main(void) {
//	
//	FILE * file = fopen("jieun.txt", "w");
//	//파일이 없으면 새로 생성
//	//파일이 이미 존재하면 기존 내용 삭제
//	if (file == NULL) {
//		printf("파일열기실패");
//		return 1;
//	}
//	else {
//		fputs("fputs를 이용해서 글을 적어볼게요\n", file);
//		fputs("잘 적히는지 확인해주세요\n", file);
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
//	FILE * file = fopen("jieun.txt", "r"); //읽기모드
//	if (file == NULL) {
//		printf("파일열기실패");
//		return 1;
//	}
//	fgets(line, MAX, file);//저장될 곳, 사이즈, 읽어올파일의 포인터
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
//		printf("파일열기실패");
//		return 1;
//	}
//	else {
//		fprintf(file,"%s","fprintf를 이용해서 적어볼게요\n");
//		fprintf(file,"%s", "잘 적히는지 확인해주세요\n");
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
//	FILE* file = fopen("jieun.txt", "r"); //읽기모드
//	if (file == NULL) {
//		printf("파일열기실패");
//		return 1;
//	}
//	else {
//		while (fgets(line, MAX, file) != NULL) {
//			//저장될 곳, 사이즈, 읽어올파일 포인터
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
//# pragma warning (disable : 4996) //오류 무시하겠다.
//
//
//int main(void) {
//	FILE* cfPtr;
//
//	cfPtr = fopen("client.txt", "w");
//	if (cfPtr == NULL) {
//		puts("파일을 열 수 없습니다.");
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
//# pragma warning (disable : 4996) //오류 무시하겠다.
//
//
//
//int main(void) {
//
//	FILE * cfPtr; // cfPtr = clients.txt 파일 포인터
//
//	// fopen으로 파일을 열고, 파일을 열 수 없으면 프로그램 종료
//	cfPtr = fopen("client.txt", "r");
//	if (cfPtr== NULL){
//		puts("파일을 열 수 없습니다.");
//	}
//	else { // 파일에서 계좌, 이름 및 잔액 읽기
//		unsigned int account; // 계좌 번호
//		char name[30]; // 계좌 이름
//		double balance; // 계좌 잔액
//
//		printf("%-10s%-13s%-s\n", "계좌", "이름", "잔액"); // 헤더 출력
//		fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); // 파일에서 첫 번째 레코드 읽기
//
//		// 파일의 끝이 아닐 때까지
//		while (!feof(cfPtr)) {
//			printf("%-10d%-13s%7.2f\n", account, name, balance); // 계좌 정보 출력
//			fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); // 다음 레코드 읽기
//		}
//	}
//
//	fclose(cfPtr); // fclose로 파일 닫기
//}
//
//
//
//
//
//
//# pragma warning (disable : 4996) //오류 무시하겠다.
//
//// 프로그램 실행 시작
//int main(void) {
//	FILE* cfPtr; // clients.txt 파일 포인터
//
//	// fopen으로 파일을 열고, 파일을 열 수 없으면 프로그램 종료
//
//	cfPtr=fopen("client.txt", "r");
//	if (cfPtr== NULL){
//		puts("파일을 열 수 없습니다.");
//	}
//	else {
//		// 요청 옵션 출력
//		printf("%s", "Enter request:\n"
//			"  1 - List accounts with zero balances\n"
//			"  2 - List accounts with credit balances\n"
//			"  3 - List accounts with debit balances\n"
//			"  4 - End of run\n");
//		unsigned int request; // 요청 번호
//		scanf_s("%d", &request);
//
//		// 사용자의 요청 처리
//		while (request != 4) {
//			unsigned int account; // 계좌 번호
//			double balance; // 계좌 잔액
//			char name[30]; // 계좌 이름
//
//			// 파일에서 계좌, 이름 및 잔액 읽기
//			fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//
//			switch (request) {
//			case 1:
//				puts("\nAccounts with zero balances");
//				// 파일 내용을 읽음 (eof까지)
//				while (!feof(cfPtr)) {
//					// 잔액이 0인 경우만 출력
//					if (balance == 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// 파일에서 계좌, 이름 및 잔액 읽기
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//
//			case 2:
//				puts("\nAccounts with credit balances:\n");
//				// 파일 내용을 읽음 (eof까지)
//				while (!feof(cfPtr)) {
//					// 잔액이 0보다 작은 경우만 출력
//					if (balance < 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// 파일에서 계좌, 이름 및 잔액 읽기
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//
//			case 3:
//				puts("\nAccounts with debit balances:\n");
//				// 파일 내용을 읽음 (eof까지)
//				while (!feof(cfPtr)) {
//					// 잔액이 0보다 큰 경우만 출력
//					if (balance > 0) {
//						printf("%-10d%-13s%7.2f\n", account, name, balance);
//					}
//					// 파일에서 계좌, 이름 및 잔액 읽기
//					fscanf_s(cfPtr, "%d%29s%lf", &account, name,30, &balance);
//				}
//				break;
//			}//swithch문 끝
//
//			rewind(cfPtr); // cfPtr을 파일의 시작으로 되돌림
//			printf("%s", "\n? ");
//			scanf_s("%d", &request);
//		}
//
//		puts("End of run.");
//		fclose(cfPtr); // fclose로 파일 닫기
//	}
//}
//
//
//
//
//
//
//# pragma warning (disable : 4996) //오류 무시하겠다.
////scanf : 아예 스캔해서 사라지게 해버림
//
////fwrite( 기록할 데이터의 포인터, 기록할 각각 데이터의 바이트, 기록할 항목의 개수, 파일의포인터) 
//// -> 전체 바이트는 기록할 각각데이터의 바이트 x 기록할 항목의 개수
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
//	if ((cfPtr = fopen("accounts.dat", "wb")) == NULL) { //이진모드로 파일 쓰기 //이진파일은 이진데이터가 직접 저장되어 있어서 파일을 사람이 읽고 바로 이해하기는 힘들다.
//	                                                      //입출력할 때 어떠한 변환도 하지 않아 빠르다.
//		puts("File could not be opened.");
//	}
//	else {
//		struct ClientData blankClient = { 0,"","",0.0 };
//
//		for (unsigned int i = 1; i <= 100; ++i) { //백번 적음.
//			fwrite(&blankClient, sizeof(struct ClientData), 1, cfPtr); //sizeof(struct ClientData): 구조체크기(바이트)= acctNum바이트+ lastName바이트+ firstName바이트+ balance바이트
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
////fseek : 특정 파일 위치를 지정한다. 읽거나 쓰는 함수 아님.
//fseek(파일포인터,기준위치에서 이동할 바이트 수, 기준위치 지정)
//SEEK_SET: 파일의 시작을 기준
//SEEK_CUR: 현재 파일 위치를 기준
//SEEK_END: 파일의 끝을 기준
//*/
//
//
//
//# pragma warning (disable : 4996) //오류 무시하겠다.
//#include <stdio.h>
//
//int main() {
//	FILE* file; //file -> FILE 
//	int numbers[] = { 10, 20, 30, 40, 50 };
//	int newNumber = 99;
//
//	// 1. 파일 쓰기 모드로 열기
//	file = fopen("data.bin", "wb"); //이진(Binary) 모드로 파일 열기 //wb = 이진모드에서 쓰기전용
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	// 2. 배열 데이터를 파일에 기록
//	fwrite(numbers, sizeof(int), 5, file); //number[]배열의 각각 정수 5개를 file에 쓰기 //10 20 30 40 50 써지겠지
//	fclose(file); 
//
//
//
//	// 3. 파일 읽기/쓰기 모드로 열기
//	file = fopen("data.bin", "r+b"); // r+, w+, a+ 는 쓰기&읽기 전용
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	// 4. 세 번째 숫자(30)의 위치로 이동
//	fseek(file, sizeof(int) * 2, SEEK_SET); // 0-based index
//	fwrite(&newNumber, sizeof(int), 1, file); //newnumber에 저장된 데이터를 1개를 file에 쓴다.
//
//	fclose(file);
//
//
//
//	// 5. 파일 읽기: 기록된 데이터 확인
//	file = fopen("data.bin", "rb"); //읽기 모드
//	if (file == NULL) {
//		puts("File could not be opened.");
//		return 1;
//	}
//
//	//파일이 열렸다면
//	printf("Updated Numbers:\n");
//	int temp;
//	for (int i = 0; i < 5; i++) {
//		fread(&temp, sizeof(int), 1, file); //파일에서 sizeof(int)바이트씩 1개를 temp에 저장 
//		                                   //파일 포인터가 파일의 시작 위치 가르키고 첫번째 숫자를 읽어 temp에 저장.
//		                                   //파일 포인터는 첫 번째 숫자 다음 위치로 이동.
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
//		while (!feof(cfPtr)) { //feof(): 파일의 끝이면 True 반환
//			struct ClientData client = { 0,"","",0.0 };
//
//			int result =fread(&client, sizeof(struct ClientData), 1, cfPtr); //fread의 반환값이 1이면 정상적으로 데이터를 읽음
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
