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
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

	vector<Aluno> meuVetor; //Cria um vetor de alunos

	Aluno a("João");
	Aluno b("Maria");
	Aluno c("José");

	meuVetor.push_back(a);
	meuVetor.push_back(b);
	meuVetor.push_back(c);

	for(int i = 0; i < meuVetor.size(); i++) {
		cout << meuVetor[i].getNome() << endl;
	}

	meuVetor.pop_back();
	meuVetor.pop_back();
	meuVetor.pop_back();

	return 0;
}
