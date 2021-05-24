//============================================================================
// Name        : UniversidadePrj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Aluno {

public:
	int codigo;
	string nome;

};

int main() {

	Aluno *a1 = new Aluno(); //O objeto a1 é armazenado na área de HEAP em memória.

	a1->codigo = 100; //Note que o acesso ao membro da classe é feito pelo símbolo '->'

	Aluno a2; //O objeto a2 é armazenado na área de PILHA (STACK) em memória.

	a2.codigo = 200; //Note que o acesso ao membro da classe é feito pelo símbolo '.'

	return 0;
}
