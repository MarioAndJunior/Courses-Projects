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

	float notas[2] = {0.0, 0.0};

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

	string getNome() {
		return nome;
	}

	float *getNotas() {
		return notas;
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

	void setNotas(float notas[]) {
		this->notas[0] = notas[0];
		this->notas[1] = notas[1];
	}

	/*************************************************/

	float calculaMedia() {
		float soma = 0.0f;
		int i = 0;

		for(i=0; i <= 1; i++) {
			soma = soma + notas[i];
		}

		return soma/i;
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

	//Calula média notas de Maria
	float notas_maria[2] = {10.0, 8.5};
	a2.setNotas(notas_maria);

	cout << "Média das notas de Maria é " << a2.calculaMedia() << endl;

	return 0;
}
