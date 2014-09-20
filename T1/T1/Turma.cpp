#include "Turma.h"

Turma::Turma(int n, int cod)
{
	numero = n;
	disciplina.setCodigo(cod);
}

void Turma::setNumero(int novoNumero)
{
	if (novoNumero > 0)
		numero = novoNumero;
}

void Turma::setCodigoDisciplina(int cod)
{
	if (cod > 0)
		disciplina.setCodigo(cod);
}

int Turma::getNumero()
{
	return numero;
}

int Turma::getCodigoDisciplina()
{
	return disciplina.getCodigo();
}

void Turma::adcionaAluno(Aluno novo)
{

}

int Turma::contagemAlunos()
{

}