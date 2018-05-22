#include<stdio.h>

int main(){
    int i = 1, valor, soma = 0;
    printf("Digite 10 valores para o programa calcular a soma: \n \n");
    while(i <= 10){
            printf("Digite o valor %d: ", i);
            scanf("%d", &valor);
            soma += valor;
            i++;
            }
    printf("Soma dos valores %d \n", soma);
    system("pause");
    return 0;
}
