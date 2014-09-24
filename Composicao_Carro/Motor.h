#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class Motor
{
private:
	float quantidadeCombustivel;
	float potencia;
public:
	Motor(void);
	~Motor(void);
	float getQuantidadeCombustivel();
	void setQuatidadeCombustivel(float q);
	float getPotencia();
	void setPotencia(float p);
	string toString();
};

