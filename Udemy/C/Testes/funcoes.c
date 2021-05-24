#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mostraSucessor();
int retornaAntecessor();

int main(void)
{
    int numEscolhido = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &numEscolhido);

    mostraSucessor(numEscolhido);
    printf("O antecessor de %d eh: %d ", numEscolhido, retornaAntecessor(numEscolhido));
    return 0;
}

void mostraSucessor(int num)
{
    printf("\nO sucessor de %d eh: %d\n",num,  num + 1);
}

int retornaAntecessor(int num)
{
    return num - 1;
}