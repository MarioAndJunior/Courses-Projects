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

	//Aluno Jo�o
	Aluno a("Jo�o");

	//Professor Marco (c�digo 123, nome Marco)
	Professor p(123, "Marco");

	try{
		//Passando nota negativa -50
		p.alteraNotaAlunoGraduacao(a, -50, 1);
	}
	catch(...){
		//Apanha a exce��o gerada e exibe a mensagem abaixo
		cout << "Uma exce��o foi gerada!!!" << endl;
	}

	return 0;
}
