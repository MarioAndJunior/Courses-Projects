/*
 * professor.cpp
 *
 *  Created on: 19 de jun de 2017
 *      Author: Marco
 */

#include "professor.h"

//Construtor parametrizado
Professor::Professor(int codigo, string nome) {
	this->setCodigo(codigo);
	this->setNome(nome);

	cout << "objeto criado" << endl;
}

//Construtor de cópida
Professor::Professor(const Professor &p) {
	this->codigo = p.codigo;
	this->nome = p.nome;

	cout << "objeto copiado" << endl;
}

//Destrutor da classe
Professor::~Professor() {
	cout << "objeto destruído" << endl;
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
	if(codigo < 0) { //Se o valor de código for negativo
		this->codigo = (-1) * codigo; //O valor é convertido para positivo
	}
	else{
		this->codigo = codigo;
	}
}

void Professor::setNome(string nome) {
	this->nome = nome;
}

void Professor::alteraNotaAlunoGraduacao(graduacao::Aluno &a, float n1, float n2) {
	a.notas[0] = n1;
	a.notas[1] = n2;
}
