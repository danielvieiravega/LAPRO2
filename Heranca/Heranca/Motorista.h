#include "Funcionario.h"

#ifndef MOTORISTA_H
#define MOTORISTA_H
class Motorista : public Funcionario
{
public:
	Motorista(void);
	~Motorista(void);
	void setNumeroroCarteiraMotorista(int numCarteira);
private:
	int numeroCarteiraMotorista;
};
#endif
