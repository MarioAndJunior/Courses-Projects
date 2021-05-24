#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int defineQuantidadeLinhas()
{
    int linhas = 0;
    printf("\nDigite o numero de linhas: ");
    fflush(stdin);
    scanf("%d", &linhas);
    return linhas;
}

int defineQuantidadeColunas()
{
    int colunas = 0;
    printf("\nDigite o tamanho das colunas: ");
    fflush(stdin);
    scanf("%d", &colunas);
    return colunas;
}

int** alocaMatriz(int linhas, int colunas)
{
    int i = 0;
    int **matriz = 0;

    matriz = (int**) malloc(linhas * sizeof(int*));

    for(i = 0; i < linhas; i++)
    {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }
    
    return matriz;
}

void populaMatriz(int **matriz, int linhas, int colunas)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++)
        {
            printf("\nDigite o valor da Matriz para a posicao[%d][%d]", i, j);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
        }
    }

}

void mostraMatriz(int **matriz, int linhas, int colunas)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("%d ",matriz[i][j]);
        }

        printf("\n");
    }
}

void limpaMatriz(int **matriz, int linhas)
{
    int i = 0;
        for(i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int main(void)
{
    int linhas = 0;
    int colunas = 0;
    int **matriz = 0;

    linhas = defineQuantidadeLinhas();
    colunas = defineQuantidadeColunas();
    matriz = alocaMatriz(linhas, colunas);
    populaMatriz(matriz, linhas, colunas);
    mostraMatriz(matriz, linhas, colunas);
    limpaMatriz(matriz, linhas);
    
    return 0;
}
