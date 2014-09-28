#include "Disciplina.h"

Disciplina::Disciplina()
{
}

Disciplina::Disciplina(string cod, string n)
{
	codigo = cod;
	nome = n;
}

void Disciplina::setCodigo(string novoCodigo)
{
	codigo = novoCodigo;
}

string Disciplina::getCodigo()
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