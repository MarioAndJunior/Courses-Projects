#include <stdio.h>

int main() {
	char voto,resp;
	int cont_s, cont_n;
	cont_s = 0;
	cont_n = 0;

	do{
		printf("\n Voce tem computador em casa? s/n ");
		scanf("%c", &voto);
		fflush(stdin);
		if(voto == 's'){
			cont_s++;
		}else{
			cont_n++;
		}
		printf("\nDeseja continuar? s/n");
		scanf("%c", &resp);
		fflush(stdin);
	}while(resp == 's');

printf("\n total sim: %d total nao: %d", cont_s, cont_n);
system("pause");
return 0;
}
