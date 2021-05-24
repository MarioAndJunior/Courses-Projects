/*
 * aluno.cpp
 *
 *  Created on: 19 de jun de 2017
 *      Author: Marco
 */

#include "aluno.h"

//Construtor parametrizado
graduacao::Aluno::Aluno(int codigo, string nome) {
	this->setCodigo(codigo);
	this->setNome(nome);

	cout << "objeto criado" << endl;
}

//Construtor de cópida
graduacao::Aluno::Aluno(const Aluno &a) {
	this->codigo = a.codigo;
	this->nome = a.nome;

	cout << "objeto copiado" << endl;
}

//Destrutor da classe
graduacao::Aluno::~Aluno() {
	cout << "objeto destruído" << endl;
}

//GETTERS - accessor methods
int graduacao::Aluno::getCodigo() {
	return codigo;
}

string graduacao::Aluno::getNome() {
	return nome;
}

float *graduacao::Aluno::getNotas() {
	return notas;
}

//SETTERS - mutator methods
void graduacao::Aluno::setCodigo(int codigo) {
	if(codigo < 0) { //Se o valor de código for negativo
		this->codigo = (-1) * codigo; //O valor é convertido para positivo
	}
	else{
		this->codigo = codigo;
	}
}

void graduacao::Aluno::setNome(string nome) {
	this->nome = nome;
}

void graduacao::Aluno::setNotas(float notas[]) {
	this->notas[0] = notas[0];
	this->notas[1] = notas[1];
}

/*************************************************/

float graduacao::Aluno::calculaMedia() {
	float soma = 0.0f;
	int i = 0;

	for(i=0; i <= 1; i++) {
		soma = soma + notas[i];
	}

	return soma/i;
}

