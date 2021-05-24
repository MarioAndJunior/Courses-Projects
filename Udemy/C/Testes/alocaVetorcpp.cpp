#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<new>


int main(int argc, char const *argv[])
{
    int tamanho;
    int *vetor;
    int i;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = new int[tamanho];

    for(i = 0; i < tamanho; i++)
    {
        vetor[i] = i;
    }

    for(i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }

    free(vetor);

    return 0;
}
