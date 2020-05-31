#include <stdio.h>

int main() {

	char name[20];
	char enter_array; //объ€вление символьной переменной ch
	printf("Vvedite nazvanie faila, soderjimoe kotorogo hotite otkryt`\n");
	scanf("%s", name);

	FILE *enter_text;

	if ((enter_text = fopen(name, "r")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}
	enter_array = getc(enter_text); //чтение одного символа
	
	while (enter_array != EOF) {//пока не достигли конца документа
		putchar(enter_array); //выводим на экран
		enter_array = getc(enter_text);
	}
	fclose(enter_text);
	
	return 0;
}
