/*
 * aluno.h
 *
 *  Created on: 19 de jun de 2017
 *      Author: Marco
 */

#ifndef ALUNO_H_
#define ALUNO_H_

#include <iostream>
#include <string>
#include "professor.h"
using namespace std;

namespace posgraduacao {

	class Aluno {

	};
}

/***********************************************/

namespace graduacao {

	class Aluno {

	private:
		int codigo;
		string nome;

		float notas[2] = {0.0, 0.0};

		static int proxCodigo;

	protected:
		double valorMensalidade;

	public:
		//Construtor parametrizado
		Aluno(string nome);
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
		void setValorMensalidade(double valorMensalidade);
		void setNotas(float notas[]);
		float calculaMedia();

		//Fun��o amiga declarada na classe Professor
		friend void Professor::alteraNotaAlunoGraduacao(Aluno &a, float n1, float n2);

		//Fun��o est�tica
		static int getProxCodigo();

		double calculaValorMensalidade();

		//Fun��o virtual
		virtual void imprimeSaudacao();
	};

	class AlunoPesquisador : public Aluno {

	private:
		string orientador;
		string linha;
		double bolsa;

	public:
		//Construtor
		AlunoPesquisador(string nome);
		//Destrutor
		~AlunoPesquisador();

		//Getters
		double getBolsa();
		string getLinha();
		string getOrientador();

		//Setters
		void setBolsa(double bolsa);
		void setLinha(string linha);
		void setOrientador(string orientador);

		//SOBREPOSI��O DE M�TODOS
		void imprimeSaudacao();

		//SOBREPOSI��O DE M�TODOS
		double calculaValorMensalidade();

		//SOBRECARGA DE M�TODO
		double calculaValorMensalidade(double bonus);
	};

}

#endif /* ALUNO_H_ */
