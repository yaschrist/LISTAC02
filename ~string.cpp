#include<iostream>
#include<string.h>
main() {
	char sexo[30];
	printf("Digite MASCULINO/FEMININO: ");
	scanf("%s", &sexo);
	strupr(sexo);
	if (strcmp(sexo, "MASCULINO") == 0) {
		printf("sexo masculino");
	} else {
		printf("Sexo feminino");
	}
}
