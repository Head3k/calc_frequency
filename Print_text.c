#include <stdio.h>

int main() {

	char name[20];
	char ch; //���������� ���������� ���������� ch
	printf("Vvedite nazvanie faila, soderjimoe kotorogo hotite otkryt`\n");
	scanf("%s", name);

	FILE *fp;

	if ((fp = fopen(name, "r")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}
	ch = getc(fp); //������ ������ �������
	
	while (ch != EOF) {//���� �� �������� ����� ���������
		putchar(ch); //������� �� �����
		ch = getc(fp);
	}
	fclose(fp);
	
	return 0;
}
