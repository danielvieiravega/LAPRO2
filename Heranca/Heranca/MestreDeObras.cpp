#include "MestreDeObras.h"


MestreDeObras::MestreDeObras(void)
{
	qntFuncionarios = 0;
}


MestreDeObras::~MestreDeObras(void)
{
}

void MestreDeObras::setQntFuncionarios(int nro)
{
	if (nro > 0)
		qntFuncionarios = nro;
}

float MestreDeObras::getSalarioLiquido()
{
	float salario = Funcionario::getSalarioBase();
	float multiplicador = qntFuncionarios%10;
	return salario * multiplicador * 0.01;
}