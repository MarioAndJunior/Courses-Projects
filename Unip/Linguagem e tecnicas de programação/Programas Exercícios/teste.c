#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a;
    int senha;
    senha = 123;
    a = 12;
    
    printf("Ola mundo e variavel a...%d\n\n\n", a);
    printf("Digite sua senha....\n");
    scanf("%d", &senha);
    if(senha == 123)
             printf("Senha liberada\n");
    else
             printf("Senha invalida\n");
    system("pause");
    return 0;
}
