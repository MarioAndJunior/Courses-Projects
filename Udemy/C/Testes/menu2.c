#include <stdio.h>


int main(void)
{
    int opcao;

    while(opcao < 1 || opcao > 3)
    {
        printf("\nPor favor, selecione uma opcao: ");
        printf("\nOpcao 1:");
        printf("\nOpcao 2:");
        printf("\nOpcao 3:\n");
    
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                printf("\nVoce selecionou 1");
                break;

            case 2:
                printf("\nVoce selecionou 2");
                break;

            case 3:
                printf("\nVoce selecionou 3");
                break;            
           
            default:
                printf("\nOpcao invalida");
                break;
        }
    }
    
    return 0;
}
