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


class Professor {

private:
	int codigo;
	string nome;

public:
	//Construtor default
	Professor();
	//Construtor parametrizado
	Professor(int codigo, string nome);
	//Construtor de c�pida
	Professor(const Professor &p);
	//Destrutor da classe
	~Professor();

	//GETTERS - accessor methods
	int getCodigo();
	string getNome();

	//SETTERS - mutator methods
	void setCodigo(int codigo);
	void setNome(string nome);
};

//Construtor parametrizado
Professor::Professor(int codigo, string nome) {
	this->setCodigo(codigo);
	this->setNome(nome);

	cout << "objeto criado" << endl;
}

//Construtor de c�pida
Professor::Professor(const Professor &p) {
	this->codigo = p.codigo;
	this->nome = p.nome;

	cout << "objeto copiado" << endl;
}

//Destrutor da classe
Professor::~Professor() {
	cout << "objeto destru�do" << endl;
}

//GETTERS - accessor methods
int Professor::getCodigo() {
	return codigo;
}

string Professor::getNome() {
	return nome;
}

//SETTERS - mutator methods
void Professor::setCodigo(int codigo) {
	if(codigo < 0) { //Se o valor de c�digo for negativo
		this->codigo = (-1) * codigo; //O valor � convertido para positivo
	}
	else{
		this->codigo = codigo;
	}
}

void Professor::setNome(string nome) {
	this->nome = nome;
}

/**************************************************************************************************/
/**************************************************************************************************/

class Aluno {

private:
	int codigo;
	string nome;

	float notas[2] = {0.0, 0.0};

public:
	//Construtor default
	Aluno();
	//Construtor parametrizado
	Aluno(int codigo, string nome);
	//Construtor de c�pida
	Aluno(const Aluno &a);
	//Destrutor da classe
	~Aluno();

	//GETTERS - accessor methods
	int getCodigo();
	string getNome();
	float *getNotas();

	//SETTERS - mutator methods
	void setCodigo(int codigo);
	void setNome(string nome);
	void setNotas(float notas[]);
	float calculaMedia();
};

//Construtor parametrizado
Aluno::Aluno(int codigo, string nome) {
	this->setCodigo(codigo);
	this->setNome(nome);

	cout << "objeto criado" << endl;
}

//Construtor de c�pida
Aluno::Aluno(const Aluno &a) {
	this->codigo = a.codigo;
	this->nome = a.nome;

	cout << "objeto copiado" << endl;
}

//Destrutor da classe
Aluno::~Aluno() {
	cout << "objeto destru�do" << endl;
}

//GETTERS - accessor methods
int Aluno::getCodigo() {
	return codigo;
}

string Aluno::getNome() {
	return nome;
}

float *Aluno::getNotas() {
	return notas;
}

//SETTERS - mutator methods
void Aluno::setCodigo(int codigo) {
	if(codigo < 0) { //Se o valor de c�digo for negativo
		this->codigo = (-1) * codigo; //O valor � convertido para positivo
	}
	else{
		this->codigo = codigo;
	}
}

void Aluno::setNome(string nome) {
	this->nome = nome;
}

void Aluno::setNotas(float notas[]) {
	this->notas[0] = notas[0];
	this->notas[1] = notas[1];
}

/*************************************************/

float Aluno::calculaMedia() {
	float soma = 0.0f;
	int i = 0;

	for(i=0; i <= 1; i++) {
		soma = soma + notas[i];
	}

	return soma/i;
}

/**************************************************************************************************/
/**************************************************************************************************/

int main() {

	Aluno *a1 = new Aluno(100, "Jo�o"); //O objeto a1 � armazenado na �rea de HEAP em mem�ria.

	cout << a1->getCodigo() << " ";
	cout << a1->getNome() << endl;

	Aluno a2(200, "Maria"); //O objeto a2 � armazenado na �rea de PILHA (STACK) em mem�ria.

	cout << a2.getCodigo() << " ";
	cout << a2.getNome() << endl;

	//Utilizando construtor de c�pia para criar uma c�pia do objeto a2.
	Aluno x = a2;

	cout << x.getCodigo() << " ";
	cout << x.getNome() << endl;

	//Chamada ao destrutor da classe para desalocar o objeto em mem�ria
	delete a1;

	//Calula m�dia notas de Maria
	float notas_maria[2] = {10.0, 8.5};
	a2.setNotas(notas_maria);

	cout << "M�dia das notas de Maria � " << a2.calculaMedia() << endl;

	return 0;
}
