#include<stdio.h>

int func(int n){
    if(n == 1){
         return 1;
         }
    else{
         return(n * func(n-1));
         }
}

int main(){
    
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Entrada %d e Saida %d\n", n, func(n));
    system("pause");
    return 0;
}
