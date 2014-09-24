#include "Aluno.h"

#ifndef TURMA_H
#define TURMA_H
#pragma once
int quantidadeAlunos = 0;

class Turma
{
private:
	int numero;
	Disciplina disciplina;
	Aluno alunos[10];
	Turma();
public:
	Turma(int n, int cod);
	//Turma(int n = 0, const Disciplina& disc=Disciplina(0,""));
	void setNumero(int novoNumero);
	void setCodigoDisciplina(int cod);
	int getNumero();
	int getCodigoDisciplina();
	void adcionaAluno(Aluno novo);
	int getQuantidadeAlunosMatriculados();
	int getAlunoPorPosicaoNaTurma(Aluno aluno);
};

#endif