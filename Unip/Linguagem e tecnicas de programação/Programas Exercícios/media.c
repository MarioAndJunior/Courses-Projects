#include <stdio.h>
void main() {
	double nota1, nota2, media;
	printf("Entre com a Nota 1 e a Nota 2");
	scanf("%lf %lf", &nota1, &nota2);
	media = (nota1 + nota2) / 2;
	printf("A média entre %4.1f e %4.1f é %4.1f \n", nota1, nota2, media);}
