#include <stdio.h> 

int main() {

	FILE *fp;

	char ch; //объ€вление символьной переменной ch
	printf("Vvodite lubie simvoly, krome $ \n\n");

	if ((fp = fopen("test.txt", "w")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}

	do{

ch = getchar();
putc(ch, fp);

	} 
while (ch != '0');
	fclose(fp);

return 0;

}
