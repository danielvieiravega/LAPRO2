#include "Disciplina.h"

Disciplina::Disciplina(int c, string n)
{
	codigo = c;
	nome = n;
}

void Disciplina::setCodigo(int novoCodigo)
{
	if (novoCodigo > 0)
		codigo = novoCodigo;
}

int Disciplina::getCodigo()
{
	return codigo;
}

void Disciplina::setNome(string novoNome)
{
	nome = novoNome;
}

string Disciplina::getNome()
{
	return nome;
}