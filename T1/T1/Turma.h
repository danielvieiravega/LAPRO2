#pragma once
#include "Aluno.h"

const int Tam = 10;

/*
Uma turma é definida por um número, o código da disciplina e um conjunto de alunos. Deve ser possível realizar as seguintes operações:
Construtor, que recebe o número da turma e o código da disciplina;
Alterar o número da turma;
Alterar o código da disciplina;
Obter o número da turma;
Obter o código da disciplina;
Adicionar um aluno à turma;
Obter o total de alunos matriculados na disciplina;
Retornar um aluno pelo sua posição na turma (de 0 ao total-1);
Para adicionar um aluno à turma, deverá ser criado um método que receba um objeto Aluno já criado e inicializado externamente, ou seja, não devem ser recebidos os dados do aluno individualmente:
void Turma::adicionaAluno(Aluno novo) { ... }
Para armazenar os alunos, pode ser utilizado um vetor de Aluno, bastando controlar quantos já foram criados - para este trabalho, limitaremos o vetor em 10 alunos.
*/
class Turma
{
private:
	int numero;
	int codigo;
	Aluno alunos[Tam];
public:
	Turma(int n, int c);
	void setNumero(int novoNumero);
	int getNumero();
	void setCodigo(int novoCodigo);
	int getCodigo();
};

