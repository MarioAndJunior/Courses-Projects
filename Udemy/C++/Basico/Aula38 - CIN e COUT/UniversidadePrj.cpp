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
#include <algorithm>
#include "aluno.h"
using namespace std;
using namespace graduacao;

int main() {

	string nome;

	cout << "Digite o nome do aluno: " << endl;

	getline(cin, nome);

	Aluno a(nome);

	a.imprimeSaudacao();

	return 0;
}
