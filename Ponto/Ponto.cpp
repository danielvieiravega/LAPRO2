#include "Ponto.h"
#include <math.h>  

Ponto::Ponto()
{
	x = 0.0;
	y = 0.0;
}

Ponto::~Ponto(void)
{
}

void Ponto::setX(float valor)
{
	x = valor;
}

void Ponto::setY(float valor)
{
	y = valor;
}

float Ponto::getX()
{
	return x;
}

float Ponto::getY()
{
	return y;
}

float Ponto::calculaDistanciaXY(Ponto p)
{
	return sqrt(pow((p.getX() - x), 2) + pow((p.getY() - y),2));
}