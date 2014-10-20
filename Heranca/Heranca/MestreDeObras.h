#include "Servente.h"

#ifndef MESTREDEOBRAS_H
#define MESTREDEOBRAS_H
class MestreDeObras : public Servente
{
public:
	MestreDeObras(void);
	~MestreDeObras(void);
	void setQntFuncionarios(int nro);
	float getSalarioLiquido();
private:
	int qntFuncionarios;
};
#endif
