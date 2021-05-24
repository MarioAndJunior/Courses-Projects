//============================================================================
// Name        : UniversidadePrj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "aluno.h"
#include "professor.h"
using namespace std;
using namespace graduacao;

int main() {

	Aluno *a1 = new Aluno("Jo�o"); //O objeto a1 � armazenado na �rea de HEAP em mem�ria.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2("Maria"); //O objeto a2 � armazenado na �rea de PILHA (STACK) em mem�ria.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	graduacao::Aluno::getProxCodigo(); //3
	graduacao::Aluno::getProxCodigo(); //4
	graduacao::Aluno::getProxCodigo(); //5

	graduacao::Aluno z("Pedro"); //6
	cout << z.getCodigo() << " ";
	cout << z.getNome() << endl;

	graduacao::AlunoPesquisador x("Jos�"); //7

	cout << x.getCodigo() << " ";
	cout << x.getNome() << endl;

	x.setBolsa(12.5);
	x.setBolsa(4); //int p/ double - type casting

	delete a1;

	return 0;
}
