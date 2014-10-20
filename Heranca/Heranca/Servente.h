#include "Funcionario.h"
#ifndef SERVENTE_H
#define SERVENTE_H
class Servente : public Funcionario 
{
public:
	Servente();
	float getSalarioLiquido();
private:
	float adicionalInsulubridade;
};
#endif
