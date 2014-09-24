#ifndef ALUNO_H
#define ALUNO_H
#pragma once
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

class Aluno
{
private:
	int matricula;
	string nome;
	//Disciplina disciplina;
public:
	Aluno();
	Aluno(int m, string n);
	void setMatricula(int novaMatricula);
	void setNome(string novoNome);
	int getMatricula();
	string getNome();
};

#endif