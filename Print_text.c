#include <stdio.h>

int main() {

	char name[20];
	char ch; //объ€вление символьной переменной ch
	printf("Vvedite nazvanie faila, soderjimoe kotorogo hotite otkryt`\n");
	scanf("%s", name);

	FILE *fp;

	if ((fp = fopen(name, "r")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}
	ch = getc(fp); //чтение одного символа
	
	while (ch != EOF) {//пока не достигли конца документа
		putchar(ch); //выводим на экран
		ch = getc(fp);
	}
	fclose(fp);
	
	return 0;
}
