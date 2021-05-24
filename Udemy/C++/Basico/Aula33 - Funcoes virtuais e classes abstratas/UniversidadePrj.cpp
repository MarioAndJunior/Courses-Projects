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

	Aluno *maria = new Aluno("Maria");

	Aluno *joao = new AlunoPesquisador("João");

	maria->imprimeSaudacao();

	//Late binding usando função virtual
	joao->imprimeSaudacao();

	delete maria;

	delete joao;

	return 0;
}
