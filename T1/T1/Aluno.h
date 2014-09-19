/*
Um aluno é definido por um número de matrícula e um nome. Deve ser possível realizar as seguintes operações:
Construtor, que recebe o número e o nome;
Alterar o número de matrícula;
Alterar o nome do aluno;
Obter o número de matrícula;
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
