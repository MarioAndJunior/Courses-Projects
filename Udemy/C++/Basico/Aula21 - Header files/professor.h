/*
 * professor.h
 *
 *  Created on: 19 de jun de 2017
 *      Author: Marco
 */

#ifndef PROFESSOR_H_
#define PROFESSOR_H_

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
	//Construtor de cópida
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


#endif /* PROFESSOR_H_ */
