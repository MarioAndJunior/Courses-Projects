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

private:
	int codigo;
	string nome;

public:
	//Construtor parametrizado
	Aluno(int codigo, string nome) {
		this->setCodigo(codigo);
		this->setNome(nome);
	}

	//GETTERS - accessor methods
	int getCodigo() {
		return codigo;
	}

	const string getNome() {
		return nome;
	}

	//SETTERS - mutator methods
	void setCodigo(int codigo) {
		if(codigo < 0) { //Se o valor de c�digo for negativo
			this->codigo = (-1) * codigo; //O valor � convertido para positivo
		}
		else{
			this->codigo = codigo;
		}
	}

	void setNome(string nome) {
		this->nome = nome;
	}
};

int main() {

	Aluno *a1 = new Aluno(100, "Jo�o"); //O objeto a1 � armazenado na �rea de HEAP em mem�ria.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2(200, "Maria"); //O objeto a2 � armazenado na �rea de PILHA (STACK) em mem�ria.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	return 0;
}
