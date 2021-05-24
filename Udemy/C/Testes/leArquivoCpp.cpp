#include<fstream>
#include<string>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream input("Texto.txt");

    string textoLido;

    for(string line; getline(input, line);)
    {
        textoLido += line;
    }

    cout << textoLido;

    return 0;
}
