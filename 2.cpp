#include<iostream>
#include <math.h>
main() {
	float entrada, resultado;
	scanf("%f", &entrada);
	if (entrada>0) {
		resultado = pow(entrada,0.5);
		printf("a raiz quadrada desse numero eh: %.2f", resultado);
	} else printf("Numero invalido");
}
