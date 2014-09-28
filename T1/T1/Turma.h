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
Uma turma é definida por um número, o código da disciplina e um conjunto de alunos. Deve ser possível realizar as seguintes operações:
Construtor, que recebe o número da turma e o código da disciplina;
Alterar o número da turma;
Alterar o código da disciplina;
Obter o número da turma;
Obter o código da disciplina;
Adicionar um aluno à turma;
Obter o total de alunos matriculados na disciplina;
Retornar um aluno pelo sua posição na turma (de 0 ao total-1);*/