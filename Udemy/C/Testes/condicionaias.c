#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int selected = 1;

void verificaParImpar()
{
    printf("\nPor favor escolha um numero: ");

    fflush(stdin);
    scanf("%i", &selected);

    if(selected % 2 == 0)
    {
        printf("\nO numero selecionado eh par");
    }
    else
    {
        printf("\nO numero selecionado eh impar");
    }
}

void booleano()
{
  bool b = true;

  if(!b)
  {
      printf("Bool eh falso");
  }
  else
  {
      printf("Bool eh true");
  }
}

void comparandoChar()
{
    char letra = 'd';

    printf("\n O codigo da letra 'd' eh %d", letra);

    if(letra == 100)
    {
        printf("\ntrue");
    }
}

void condicionaisMultiplas()
{
    int num = 4;

    if((num > 5 && num < 15) || num == 20)
    {
        printf("Num esta entre 5 e 15, ou vale 20");
    }
}

void condicionaisSwitch()
{
  int selecionado = 1;
    fflush(stdin);
    printf("\nSelecione um numero | 1 a 10 |\n");

    scanf("%d", &selecionado);

    switch(selecionado)
    {
        case 1:
            printf("O numero selecionado foi 1");
            break;
        case 2:
            printf("O numero selecionado foi 2");
            break;
        case 3:
            printf("O numero selecionado foi 3");
            break; 
        default:
            printf("O numero selecionado foi invalido");
            break;
    }
}

void verificaPrimo()
{

}

void randomNumber()
{
     //Para conseguir um numero aleatorio usa-se o resto da divisao do rand, o resto será o range do numero aleatorio
     srand((unsigned) time(NULL));

     int random = (rand() % 10) + 1;

    printf("%d", random); 
}

void testaWhile()
{
       int a = 1;
    int b = 10;

   while(a < b)
    {
        printf("\n%d", a);

        a++; 
    }    
    while(b >= 1)
    {
        printf("\n%d", b);

        b--;

    }
}

void testaDoWhile()
{
    int a = 10;
 
    do
    {
        printf("%d", a);

        a++;
        
    } while (a < 10);
}

void tabuada()
{
    int i;
    int multiplicador = 5;

    for(i = 0; i <= 10; i++)
    {
        printf("\n %d x %d = %d", multiplicador , i, multiplicador * i);
    }
 
}

void vetores()
{

}

int main(void)
{
    int vetor[3];
    int i = 0;
    vetor[0] = 5;
    vetor[1] = 15;
    vetor[2] = 25;

  /* for(i = 0; i < 3; i++)
    {
        vetor[i] = vetor[i] + 1;
    }*/

   for(i = 0; i < 3; i++)
    {
        printf("\nEntre com o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0; i < 3; i++)
    {
        printf("\nPosicao %d: valor: %d", i, vetor[i]);
    }
        

    getchar();

    return 0;
}