#include<fstream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    ofstream outputFile;

    outputFile.open("Texto.txt", std::ios_base::app);

    outputFile << "Escrito pelo CPP";

    outputFile.close();

    return 0;
}
