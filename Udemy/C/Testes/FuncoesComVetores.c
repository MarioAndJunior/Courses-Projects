#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mostraVetor(int *vetor, int tamanho)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
    
}

void adicionaNoVetor(int *vetor, int tamanho, int valor)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        vetor[i] = vetor[i] + valor;
    }
}

int main(void)
{
    int vetor3[] = {1, 2, 3};

    mostraVetor(vetor3, 3);

    adicionaNoVetor(vetor3, 3, 10);

    mostraVetor(vetor3, 3);

    return 0;
}
