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

	Aluno *a1 = new Aluno(); //O objeto a1 � armazenado na �rea de HEAP em mem�ria.

	a1->codigo = 100; //Note que o acesso ao membro da classe � feito pelo s�mbolo '->'

	Aluno a2; //O objeto a2 � armazenado na �rea de PILHA (STACK) em mem�ria.

	a2.codigo = 200; //Note que o acesso ao membro da classe � feito pelo s�mbolo '.'

	return 0;
}
