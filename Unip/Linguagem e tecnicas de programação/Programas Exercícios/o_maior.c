#include <stdio.h>
void main() {

	int n1, n2, n3;

	printf("Entre com três numeros inteiros \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1>n2)
		if (n1>n3)
			printf("O maior é %d \n", n1);
		
		else
			printf("O maior é %d \n", n3);
		
	else
		if (n2>n3)
			printf("O maior é %d \n", n2);
		
		else
			printf("O maior é %d \n", n3);
		
	
}