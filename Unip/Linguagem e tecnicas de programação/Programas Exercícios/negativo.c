#include <stdio.h>

void main() {

	int numero;

	printf("Entre com um número: ");
	scanf("%d", &numero);
	if(numero<0) {
		printf("Numero negativo\n");
	}
}