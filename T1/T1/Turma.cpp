#include "Turma.h"

Turma::Turma(int n, int c)
{
}

void Turma::setNumero(int novoNumero)
{
	if (novoNumero > 0)
		numero = novoNumero;
}

int Turma::getNumero()
{
	return numero;
}

void Turma::setCodigo(int novoCodigo)
{
	if (novoCodigo > 0)
		codigo = novoCodigo;
}

int Turma::getCodigo()
{
	return codigo;
}