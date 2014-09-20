#include "Turma.h"

Turma::Turma()
{
}

Turma::Turma(int n, int cod)
{
	numero = n;
	disciplina.setCodigo(cod);
}
/*
Turma::Turma(int n, const Disciplina& disc)
{
	numero = n;
	disciplina = disc;
}
*/

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
	if (quantidadeAlunos < 10)
	{
		alunos[quantidadeAlunos] = novo;
		quantidadeAlunos++;
	}
}

int Turma::getQuantidadeAlunosMatriculados()
{
	return quantidadeAlunos;
}

int Turma::getAlunoPorPosicaoNaTurma(Aluno aluno)
{
	for (int i = 0; i < quantidadeAlunos; i++)
	{
		if (alunos[i].getNome() == aluno.getNome())
			return i;
	}
	return -1; //Se o aluno pesquisado não existe
}