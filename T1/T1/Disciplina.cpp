#include "Disciplina.h"

Disciplina::Disciplina()
{
}

Disciplina::Disciplina(int cod, string n)
{
	codigo = cod;
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