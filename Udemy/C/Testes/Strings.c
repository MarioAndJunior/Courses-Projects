#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    char palavra[255];

    printf("\nDigite uma palavra: ");
    setbuf(stdin, 0);

    fgets(palavra, 255, stdin);

    palavra[strlen(palavra) -1] = '\0';
    printf("%s", palavra);
    return 0;
}
