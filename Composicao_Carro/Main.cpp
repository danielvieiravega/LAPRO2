#include "Main.h"
#include "Motor.h"
#include "Pneu.h"
#include "Carro.h"
Main::Main(void)
{
}

Main::~Main(void)
{
}

int main()
{
	Carro c1;
	c1.setMarca("Saveiro");
	c1.setQuilometragemAtual(1000.0);



	return 0;
}
