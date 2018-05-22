#include<stdio.h>

int main(){
    int tam;
    char cadeia[256];
    printf("Escreva o seu nome: ");
    gets(cadeia);
    tam = strlen(cadeia);
    printf("Seu nome possui " "%d" " letras \n", tam);
    
    system("pause");
    return 0;
}
