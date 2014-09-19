#include "Aluno.h"

Aluno::Aluno(int m, string n)
{
	matricula = m;
	nome = n;
}

void Aluno::setMatricula(int novaMatricula)
{
	matricula = novaMatricula;
}

int Aluno::getMatricula()
{
	return matricula;
}

void Aluno::setNome(string novoNome)
{
	nome = novoNome;
}

string Aluno::getNome()
{
	return nome;
}