#include <stdio.h>

void main(){
	int a,b,c;
	int aux;

	printf("Digite tres numeros inteiros: \n");
	scanf("%d %d %d", &a,&b,&c);

	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	if (a>c)
	{
		aux=a;
		a=c;
		c=aux;
	}
	if (b>c)
	{
		aux=b;
		b=c;
		c=aux;
	}
	printf("%d %d %d",a,b,c);
}