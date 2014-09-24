#include "Pneu.h"
#include <sstream>
#include <iomanip>

Pneu::Pneu(void)
{
}

Pneu::~Pneu(void)
{
}

string Pneu::getMarca()
{
	return marca;
}

void Pneu::setMarca(string m)
{
	marca = m;
}

float Pneu::getPressao()
{
	return pressao;
}

void Pneu::setPressao(float p)
{
	pressao = p;
}

string Pneu::toString()
{
	ostringstream aux;
	aux.fill('0');
	aux << setw(2) << marca
        << "Pressao: "
        << setw(2) << pressao;

    return aux.str();
}