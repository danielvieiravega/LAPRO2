#include "Servente.h"


Servente::Servente(void)
{
	adicionalInsulubridade = 0.05;
}

Servente::~Servente(void)
{
}

float Servente::getSalarioLiquido()
{
	float salario = Funcionario::getSalarioLiquido();
	salario = salario * adicionalInsulubridade;
	return salario;
}