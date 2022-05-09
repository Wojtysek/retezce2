#include <stdio.h>

int main(void) {

	char text[13] = "nazdar svete";
	printf("%s\n", text);
	printf("%s\n", text + 5);

	char* ukazatel;
	ukazatel = text;
	printf("%s\n", ukazatel);

	for (int i = 0; i < 14; i++) { //opicarny protoze 14 XDD
		printf("%s\n", ukazatel + i);
	}
	char drobky[6] = {'d','u','h','a','\0','a'};
	printf("%s\n", drobky);
	char nevim[] = "slunce sviti";
	printf("%s\n", nevim);

	//char chyba[5];
	//chyba = "duha";
	const char* konst = "bazar";
	const char konstanta[] = "Bazar";

	nevim[3] = 'X';
	printf("%s\n", nevim);
}