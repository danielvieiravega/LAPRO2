/*
Um aluno � definido por um n�mero de matr�cula e um nome. Deve ser poss�vel realizar as seguintes opera��es:
Construtor, que recebe o n�mero e o nome;
Alterar o n�mero de matr�cula;
Alterar o nome do aluno;
Obter o n�mero de matr�cula;
Obter o nome do aluno;
Obs: cada aluno pode estar matriculado em uma ou mais turmas.
*/
#include <string>
#include "Disciplina.h"
using namespace std;

#pragma once
class Aluno
{
private:
	int matricula;
	string nome;
	Disciplina disciplina;
public:
	Aluno(int m, string n);
	void setMatricula(int novaMatricula);
	int getMatricula();
	void setNome(string novoNome);
	string getNome();
};
