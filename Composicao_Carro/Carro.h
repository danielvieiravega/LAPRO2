#pragma once
#include <string.h>
#include <iostream>
#include "Motor.h"
#include "Pneu.h"

using namespace std;

class Carro
{
private:
	string marca;
	float quilometragemAtual;
	Motor motor;
	Pneu pneu;
public:
	Carro(const Motor& meuMotor, const Pneu& meusPneus);
	Carro(void);
	~Carro(void);
	void setMarca(string m);
	string getMarca();
	void setQuilometragemAtual(float q);
	float getQuilometragemAtual();
	string toString();
	Pneu& getPneu();
	Motor& getMotor();
};

