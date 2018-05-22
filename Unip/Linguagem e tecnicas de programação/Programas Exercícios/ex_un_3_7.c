#include <stdio.h>

void main(){
	int ano, resto;
	printf("Forneça o ano\n");
	scanf("%d", &ano);
	if (ano%100 ==0)
	{
		if (ano%400 ==0)
		{
			printf("O Ano %d é bissexto\n", ano);
		}else{
			printf("O Ano %d não é bissexto\n", ano);
		}
	} else{
		if (ano%4 ==0)
		{
			printf("O ano %d é bissexto\n", ano);
		}else{
			printf("O Ano %d não é bissexto\n", ano);
		}
	}
}