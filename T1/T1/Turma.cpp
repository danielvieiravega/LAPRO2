#include "Turma.h"

int quantidadeAlunos = 0;

Turma::Turma()
{
}

Turma::Turma(int n, string cod)
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

void Turma::setCodigoDisciplina(string cod)
{
	disciplina.setCodigo(cod);
}

int Turma::getNumero()
{
	return numero;
}

string Turma::getCodigoDisciplina()
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

Aluno* Turma::getAlunosMatriculas()
{
	return alunos;
}


