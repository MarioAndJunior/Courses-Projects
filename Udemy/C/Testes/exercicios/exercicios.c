#include<stdio.h>
#include<stdlib.h>

void exercicioUspUm()
{
    int numero = 0;
    int quadrado = 0;
    printf("\nCalcula quadrado, entre com um numero: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("\nO quadrado de %d eh %d", numero, quadrado);
}

void exercicioUsp2()
{
    int i = 0;
    int n = 0;
    int soma = 0;

    printf("\n\tCalculo da soma dos n primeiros inteiros positivos\n");

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    
    for(i = 0; i <= n; i++)
    {
        soma = soma + i;
    }

    printf("A soma dos %d primeiros inteiros positivos e' %d\n", n, soma);    
}

void exercicioUsp3()
{
    int i = 0;
    int n = 0;
    int soma = 0;
    
    printf("\n\tMostrando inteiros impares\n");

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    
 
    while(soma < n)
    {
        if((i % 2) == 1)
        {
            printf("\n%d", i);
            soma++;
        }
        i++;
    }
 
}

void exercicioUsp4()
{
    int base = 0;
    int expoente = 0;
    int resultado = 1;

    printf("\nEntre com a base: ");
    scanf("%d", &base);
    printf("\nEntre com o expoente: ");
    scanf("%d", &expoente);

    
    for(int i = 0; i < expoente; i++)
    {
        resultado = base * resultado;
    }

    printf("%d", resultado);
    

}

void exercicioUsp5()
{
    int vendas[30] = {1,2,3,4,5,6,7,8,9,10,21,44,56,75,12,15,57,98,32,16,999,86,45,33,58,19,21,33,54,100};
    int maior = 0;
    int dia;


    
    for(int i = 0; i < 30; i++)
    {
        if(maior < vendas[i])
        {
            maior = vendas[i];
            dia = i;
        }
    }

    printf("\nO dia com maior numero de vendas foi %d e a quantidade vendida foi %d", dia, maior);
}

void exercicioUsp8()
{
    int num = 0;
    int result = 1;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    
    for(int i = num; i > 0; i--)
    {
        result = result * i;
    }
    printf("\nResultado: %i", result);
    
}
void inverte(int *num1, int *num2)
{
    /*if(*num2 < *num1)
    {
        int aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }*/

    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;

}

int somaDobro(int *num1, int *num2)
{
    *num1 = *num1 * 2;
    *num2 = *num2 * 2;

    return *num1 + *num2;

}
void funcPoint()
{
    int num1 = 0;
    int num2 = 0;

    printf("\nDigite o valor para n1: ");
    scanf("%d", &num1);
    printf("\nDigite o valor para n2: ");
    scanf("%d", &num2);

    //inverte(&num1, &num2);
    int result = somaDobro(&num1, &num2);
    
    printf("\nn1 = %d, n2 = %d", num1, num2);
    printf("\n resultado: %d", result);
}

int main(void)
{
    funcPoint();
    return 0;
}
