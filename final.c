#include <stdio.h>

# pragma warning (disable : 4996) //���� �����ϰڴ�.
/*
int main(void) {

	FILE* cfPtr;
	cfPtr = fopen("2024-12-07 plan.txt", "w+");
	if (cfPtr == NULL) {
		printf("%s", "������ ���� ���߽��ϴ�.");
	}
	else {
		int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	

		//���Ͽ� ����
		fprintf(cfPtr, "%s", "���� ��ȹ�� �Ẽ�Կ�.\n");

		fputs("1.������ ����߰�� �ϱ�\n", cfPtr);
		fputs("2.�мǰ� �ǰ� 5,6��° ppt\n", cfPtr);
		fputs("3.c��� ��������� ����\n", cfPtr);
		fputs("4.c��� ����ü ����\n", cfPtr);
		fputs("5.����� ��������\n", cfPtr);
		fputs("6.���м��� ����Ǯ��\n\n", cfPtr);

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
		printf("%s", "������ ���� ���߽��ϴ�.");
	}
	else {
		
		char line[100];
		char line2[100];
		char line3[100];

		//���Ͽ��� �о����
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






