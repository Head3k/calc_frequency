#include <stdio.h>

int main() {

	char name[20];
	char enter_array; //���������� ���������� ���������� ch
	printf("Vvedite nazvanie faila, soderjimoe kotorogo hotite otkryt`\n");
	scanf("%s", name);

	FILE *enter_text;

	if ((enter_text = fopen(name, "r")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}
	enter_array = getc(enter_text); //������ ������ �������
	
	while (enter_array != EOF) {//���� �� �������� ����� ���������
		putchar(enter_array); //������� �� �����
		enter_array = getc(enter_text);
	}
	fclose(enter_text);
	
	return 0;
}
