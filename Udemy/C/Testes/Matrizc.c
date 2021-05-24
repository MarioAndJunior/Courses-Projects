#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAMANHO 3

int main(void)
{
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    
    int i = 0;
    
    int j = 0;
    
    for( i = 0; i < TAMANHO; i++)
    {
        
        for(j = 0; j < TAMANHO; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
