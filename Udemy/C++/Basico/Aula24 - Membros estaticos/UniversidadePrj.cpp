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

	Aluno *a1 = new Aluno("João"); //O objeto a1 é armazenado na área de HEAP em memória.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2("Maria"); //O objeto a2 é armazenado na área de PILHA (STACK) em memória.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	graduacao::Aluno::getProxCodigo(); //3
	graduacao::Aluno::getProxCodigo(); //4
	graduacao::Aluno::getProxCodigo(); //5

	graduacao::Aluno z("Pedro"); //6
	cout << z.getCodigo() << " ";
	cout << z.getNome() << endl;

	//Utilizando construtor de cópia para criar uma cópia do objeto a2.
	Aluno x = a2;

	cout << x.getCodigo() << " ";
	cout << x.getNome() << endl;

	//Chamada ao destrutor da classe para desalocar o objeto em memória
	delete a1;

	//Calula média notas de Maria
	float notas_maria[2] = {10.0, 8.5};
	a2.setNotas(notas_maria);

	cout << "Média das notas de Maria é " << a2.calculaMedia() << endl;

	return 0;
}
