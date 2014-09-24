#include "Motor.h"
#include <sstream>
#include <iomanip>

Motor::Motor(void)
{
}


Motor::~Motor(void)
{
}

float Motor::getQuantidadeCombustivel()
{
	return quantidadeCombustivel;
}

void Motor::setQuatidadeCombustivel(float q)
{
	quantidadeCombustivel = q;
}

float Motor::getPotencia()
{
	return potencia;
}

void Motor::setPotencia(float p)
{
	potencia = p;
}

string Motor::toString()
{
	ostringstream aux;
	aux.fill('0');
	aux << "Quantidade de combustivel: " << setw(2) 
		<< quantidadeCombustivel
        << "Potencia: "
        << setw(2) << potencia;

    return aux.str();
}