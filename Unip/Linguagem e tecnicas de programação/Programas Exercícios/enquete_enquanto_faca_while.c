#include <stdio.h>

int main()
{
	char voto, resp;
	int cont_s, cont_n;
	cont_s = 0;
	cont_n = 0;
	resp = 's';

	while(resp == 's'){
		printf("Voce tem computador em casa? s/n \n");
		scanf("%c", &voto);
		fflush(stdin);

		if (voto == 's')
		{
			cont_s = cont_s + 1;
		}else{
			cont_n = cont_n + 1;
		}
	
	printf("Deseja continuar? s/n \n");
	scanf("%c", & resp);
	fflush(stdin);
	}

	printf("Total sim: %d total nao: %d \n",cont_s, cont_n );
	system("pause");
    return 0;
}
