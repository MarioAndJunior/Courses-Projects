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
	//Construtor default
	Aluno() {
		this->codigo = 0;
		this->nome = "";

		cout << "objeto criado" << endl;
	}

	//Construtor parametrizado
	Aluno(int codigo, string nome) {
		this->setCodigo(codigo);
		this->setNome(nome);

		cout << "objeto criado" << endl;
	}

	//Construtor de cópida
	Aluno(const Aluno &a) {
		this->codigo = a.codigo;
		this->nome = a.nome;

		cout << "objeto copiado" << endl;
	}

	//Destrutor da classe
	~Aluno() {
		cout << "objeto destruído" << endl;
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
		if(codigo < 0) { //Se o valor de código for negativo
			this->codigo = (-1) * codigo; //O valor é convertido para positivo
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

	Aluno *a1 = new Aluno(100, "João"); //O objeto a1 é armazenado na área de HEAP em memória.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2(200, "Maria"); //O objeto a2 é armazenado na área de PILHA (STACK) em memória.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	//Utilizando construtor de cópia para criar uma cópia do objeto a2.
	Aluno x = a2;

	cout << x.getCodigo() << " ";
	cout << x.getNome() << endl;

	//Chamada ao destrutor da classe para desalocar o objeto em memória
	delete a1;

	return 0;
}
