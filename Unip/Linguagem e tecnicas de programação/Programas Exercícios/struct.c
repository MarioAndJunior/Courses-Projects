#include<stdio.h>
#include<string.h>

int main(){
    struct ficha{
           char Nome[30];
           char Sexo;
           int Idade;
           } Aluno;
           struct ficha Professor;
           
           strcpy(Aluno.Nome, "Elomar");
           Aluno.Sexo = 'M';
           Aluno.Idade = 22;
           
           strcpy(Professor.Nome, "Olavo");
           Professor.Sexo = 'M';
           Professor.Idade = 34;
           
           printf("O aluno %s tem %d anos. \n", Aluno.Nome, Aluno.Idade);
           printf("O professor %s tem %d anos \n", Professor.Nome, Professor.Idade);
           system("pause");
           return 0;
           }                       
