//============================================================================
// Name        : UniversidadePrj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

	vector<Aluno> meuVetor; //Cria um vetor de alunos
	vector<Aluno>::iterator i; //Cria um iterador de alunos

	Aluno a("Jo�o");
	Aluno b("Maria");
	Aluno c("Jos�");

	meuVetor.push_back(a);
	meuVetor.push_back(b);
	meuVetor.push_back(c);

	for(i = meuVetor.begin(); i != meuVetor.end(); i++){
		cout << (*i).getNome() << endl;
	}

	meuVetor.pop_back();
	meuVetor.pop_back();
	meuVetor.pop_back();

	return 0;
}
