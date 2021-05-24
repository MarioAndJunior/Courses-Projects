#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int defineTamanho()
{
    int tamanho;
    printf("\nDigite o tamanho do vetor: ");
    fflush(stdin);
    scanf("%d", &tamanho);
    
    return tamanho;
}

int* alocaVetor(int tamanho)
{
    int *aux;
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

void populaVetor(int *vetor, int tamanho)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        printf("\nDigite o valor para a posicao %d: ", i);
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }
}

void mostraVetor(int *vetor, int tamanho)
{
    int i = 0;
    for(i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

void liberaVetor(int *vetor)
{
    free(vetor);
}


int main(void)
{
    int *vetor;
    int tamanho = 0;
    tamanho = defineTamanho();

    vetor = alocaVetor(tamanho);

    populaVetor(vetor, tamanho);

    mostraVetor(vetor, tamanho);

    liberaVetor(vetor);

    return 0;
}
