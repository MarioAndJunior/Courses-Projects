#include <stdio.h>
int main(){
	int num, resto;
	printf("Digite um número: \n");
	scanf("%d", &num);
	resto = num % 2;
	if(resto == 1){
		printf("O numero %d = impar\n", num );
	} else{
		printf("O numero %d = par\n", num );
	}

return 0;
}
