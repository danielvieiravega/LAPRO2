#include "Aluno.h"

#ifndef TURMA_H
#define TURMA_H
#pragma once
//int quantidadeAlunos = 0;

class Turma
{
private:
	int numero;
	Disciplina disciplina;
	static Aluno alunos[10];
public:
	Turma();
	Turma(int n, string cod);
	//Turma(int n = 0, const Disciplina& disc=Disciplina(0,""));
	void setNumero(int novoNumero);
	void setCodigoDisciplina(string cod);
	int getNumero();
	string getCodigoDisciplina();
	void adcionaAluno(Aluno novo);
	int getQuantidadeAlunosMatriculados();
	int getAlunoPorPosicaoNaTurma(Aluno aluno);
	Aluno *getAlunosMatriculas();
};

#endif

/*
Uma turma � definida por um n�mero, o c�digo da disciplina e um conjunto de alunos. Deve ser poss�vel realizar as seguintes opera��es:
Construtor, que recebe o n�mero da turma e o c�digo da disciplina;
Alterar o n�mero da turma;
Alterar o c�digo da disciplina;
Obter o n�mero da turma;
Obter o c�digo da disciplina;
Adicionar um aluno � turma;
Obter o total de alunos matriculados na disciplina;
Retornar um aluno pelo sua posi��o na turma (de 0 ao total-1);*/