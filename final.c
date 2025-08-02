#include <stdio.h>

# pragma warning (disable : 4996) //오류 무시하겠다.
/*
int main(void) {

	FILE* cfPtr;
	cfPtr = fopen("2024-12-07 plan.txt", "w+");
	if (cfPtr == NULL) {
		printf("%s", "파일을 열지 못했습니다.");
	}
	else {
		int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	

		//파일에 쓰기
		fprintf(cfPtr, "%s", "내일 계획을 써볼게요.\n");

		fputs("1.스위마 방송중계권 암기\n", cfPtr);
		fputs("2.패션과 건강 5,6번째 ppt\n", cfPtr);
		fputs("3.c언어 파일입출력 예제\n", cfPtr);
		fputs("4.c언어 구조체 예제\n", cfPtr);
		fputs("5.프방론 백지복습\n", cfPtr);
		fputs("6.공학수학 문제풀이\n\n", cfPtr);

		fwrite(array, sizeof(array), 1, cfPtr);

	}
	
	
	return 0;
}
*/



/*
int main(void) {

	FILE* cfPtr;
	cfPtr = fopen("2024-12-07 plan.txt", "r");
	if (cfPtr == NULL) {
		printf("%s", "파일을 열지 못했습니다.");
	}
	else {
		
		char line[100];
		char line2[100];
		char line3[100];

		//파일에서 읽어오기
		fscanf(cfPtr, "%s", line);
		printf("%s", line);

		for (int s = 0; s < 6; s++) {
			fgets(line3, 100, cfPtr);
			printf("%s\n", line3);
		}

		fseek(cfPtr, 0, SEEK_SET);
		fread(line2, sizeof(char), 10, cfPtr);
		printf("%c", line2);


	}
	fclose(cfPtr);

	return 0;
}
*/






