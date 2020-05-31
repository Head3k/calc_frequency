#include <stdio.h> 

int main() {

	FILE *print_array;

	char print_text; //объ€вление символьной переменной ch
	printf("Vvodite lubie simvoly, krome $ \n\n");

	if ((print_array = fopen("test.txt", "w")) == NULL) {
		printf("Oshibka pri otkrytii faila!\n");
	}

	do{

print_text = getchar();
putc(print_text, print_array);

	} 
while (print_text != '0');
	fclose(print_array);

return 0;

}
