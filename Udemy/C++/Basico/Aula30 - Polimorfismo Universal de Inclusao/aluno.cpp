/*
 * aluno.cpp
 *
 *  Created on: 19 de jun de 2017
 *      Author: Marco
 */

#include "aluno.h"

int graduacao::Aluno::proxCodigo = 1;

//Construtor parametrizado
graduacao::Aluno::Aluno(string nome) {
	this->codigo = getProxCodigo();
	this->setNome(nome);
	this->valorMensalidade = 0.0;

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

/*************************************************/

int graduacao::Aluno::getProxCodigo() {
	return proxCodigo++;
}

/*************************************************/

double graduacao::Aluno::calculaValorMensalidade() {
	return valorMensalidade;
}

/*************************************************/
/*************************************************/
/*************************************************/


//Construtor
graduacao::AlunoPesquisador::AlunoPesquisador(string nome) : Aluno(nome) {

}

//Destrutor
graduacao::AlunoPesquisador::~AlunoPesquisador(){

}

//Getters
double graduacao::AlunoPesquisador::getBolsa() {
	return bolsa;
}

string graduacao::AlunoPesquisador::getLinha() {
	return linha;
}

string graduacao::AlunoPesquisador::getOrientador() {
	return orientador;
}

//Setters
void graduacao::AlunoPesquisador::setBolsa(double bolsa) {
	this->bolsa = bolsa;
}

void graduacao::AlunoPesquisador::setLinha(string linha) {
	this->linha = linha;
}

void graduacao::AlunoPesquisador::setOrientador(string orientador) {
	this->orientador = orientador;
}

//SOBREPOSIÇÃO DE MÉTODOS
double graduacao::AlunoPesquisador::calculaValorMensalidade() {
	//valorMensalidade é um membro marcado como protegido na classe base (Aluno)
	return (valorMensalidade - (valorMensalidade * bolsa/100));
}
