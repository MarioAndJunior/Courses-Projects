#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    FILE *file;
    
    int c;
    int contador = 0;
    char conteudoTexto[255];

    file = fopen("Texto.txt", "r");

    if (file) 
    {
        
        while((c = getc(file)) != EOF){
            //printf("%c", c);
            
            conteudoTexto[contador] = c;
            contador++;
        }
        
        fclose(file);
    }
    
    for(contador = 0; contador < strlen(conteudoTexto); contador ++)
    {
        printf("%c", conteudoTexto[contador]);
    }
    return 0;
}
