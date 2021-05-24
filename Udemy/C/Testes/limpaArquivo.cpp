#include<fstream>
#include<string>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream meuArquivo;

    meuArquivo.open("Texto.txt");

    cout << "";

    meuArquivo.close();

    return 0;
}
