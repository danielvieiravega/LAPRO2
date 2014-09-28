#include "Aluno.h"
#include <vector>
#ifndef TURMA_H
#define TURMA_H
#pragma once
//int quantidadeAlunos = 0;

class Turma
{
private:
	int numero;
	Disciplina disciplina;
	//Aluno alunos[10];
	size_t size = 10;

	std::vector<Aluno> alunos(size_t);
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
	/*
	std::vector<int> test() {
	std::vector<int> vector(10);
	return vector;
	}
	Now you don't have to call delete[], since it will be handled by the object, and you can safely iterate it with:

	std::vector<int> v = test();
	std::vector<int>::iterator it = v.begin();
	for (; it != v.end(); ++it) {
	// do your things
	}*/
	std::vector<Aluno> getAlunosNaTurma();
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