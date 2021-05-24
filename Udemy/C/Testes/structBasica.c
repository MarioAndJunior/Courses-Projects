#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct Pessoa
{
    int ordem;
    char letra;
    char nome[255];
    Data nascimento;
}Pessoa;



int main(int argc, char const *argv[])
{

    Pessoa mario;

    strcpy(mario.nome, "Mario Andrade da Silva Junior");
    mario.letra = 'M';
    mario.nascimento.dia = 13;
    mario.nascimento.mes = 11;
    mario.nascimento.ano = 1985;

    

    printf("\nNome: %s, Letra: %c, Data Nascimento: %d/%d/%d.", mario.nome, mario.letra, mario.nascimento.dia, mario.nascimento.mes, mario.nascimento.ano);
    return 0;
}
