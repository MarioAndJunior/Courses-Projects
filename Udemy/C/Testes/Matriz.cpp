#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    int matriz[2][2];
    int i;
    int j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;
    
    for(i = 0; i < 2; i++)
    {
        
        for(j = 0; j < 2; j++)
        {
            printf("\nlinha %i x coluna %i = %i", i, j, matriz[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 2; i++)
    {
        
        for(j = 0; j < 2; j++)
        {
            printf("%i", matriz[i][j]);
            printf(" ");
        }

    printf("\n");
    }

    int matriz2[3][3];
    int k;
    int l;

    for(k = 0; k < 3; k++)
    {
        
        for(l = 0; l < 3; l++)
        {
            printf("\nPor favor, preencha a matriz 3 x 3\n");
            scanf("%d", &matriz2[k][l]);
        }
    }

    for(k = 0; k < 3; k++)
    {
        
        for(l = 0; l < 3; l++)
        {
            printf("%i", matriz2[k][l]);
            printf(" ");
        }

    printf("\n");
    }
    
    getchar();
    return 0;
}