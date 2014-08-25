#include <iostream>
#include "Carro.h"

Carro::Carro(float t, float d)
{
	tanque = 0;
	distancia = 0;
	tanque = t;
	distancia = d;
}

void Carro::abastecer(float t)
{
	if (t > 0.1 && t <= 50.0 && tanque < 50.0)
		tanque += t;
}

void Carro::mover(float d)
{
	distancia = d;
	float qntTanque = distancia / 15.0;
	tanque -= qntTanque;
}

float Carro::getCombustivel()
{
	return tanque;
}

float Carro::getDistancia()
{
	return distancia;
}
