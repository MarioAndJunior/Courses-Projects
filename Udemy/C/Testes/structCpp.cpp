#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<new>
#include<string>
#include<iostream>

using namespace std;

struct Fruta
{
    string nome;
    string cor;
};

int main(int argc, char const *argv[])
{
    Fruta *maca = new Fruta;

    maca->cor = "Vermelha";
    maca->nome = "Maca";

    cout << "Fruta: " << maca->nome << " ,cor: " << maca->cor;

    Fruta saladaDeFrutas[2];

    saladaDeFrutas[0].nome = "Banana";
    saladaDeFrutas[0].cor = "Amarela";
    saladaDeFrutas[1].nome = "Morango";
    saladaDeFrutas[1].cor = "Vermelha";

    int i = 0;
    for(i = 0; i < 2; i++)
    {
        cout << "\nSalada de frutas com: " << saladaDeFrutas[i].nome << " com a cor: " << saladaDeFrutas[i].cor;
    } 

    return 0;
}
