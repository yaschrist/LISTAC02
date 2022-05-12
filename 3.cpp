#include<iostream>
#include<math.h>
main() {
	float entrada, resultado;
	scanf("%f", &entrada);
	if (entrada>0) resultado = pow(entrada, 0.5);
	else resultado = pow(entrada,2);
	printf("%f", resultado);
}
