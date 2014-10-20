#include "Motorista.h"


Motorista::Motorista(void)
{
}

Motorista::~Motorista(void)
{
}

void Motorista::setNumeroroCarteiraMotorista(int numCarteira)
{
	if(numCarteira > 0)
		numeroCarteiraMotorista = numCarteira;
}
