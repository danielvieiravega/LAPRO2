#include "Carro.h"
#include <sstream>
#include <iomanip>

Carro::Carro(void)
{
}

Carro::~Carro(void)
{
}

void Carro::setMarca(string m)
{
	marca = m;
}

string Carro::getMarca()
{
	return marca;
}

void Carro::setQuilometragemAtual(float q)
{
	quilometragemAtual = q;
}

string Carro::toString()
{
	ostringstream aux;
	aux.fill('0');
	aux << setw(2) << marca
        << "Quilometragem Atual: "
		<< setw(2) << quilometragemAtual;

    return aux.str();
}

Motor& Carro::getPotencia()
{
	return potencia;
}