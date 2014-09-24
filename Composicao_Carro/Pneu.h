#pragma once
#include <string.h>
#include <iostream>

using namespace std;

class Pneu
{
private:
	string marca;
	float pressao;
public:
	Pneu(void);
	~Pneu(void);
	string getMarca();
	void setMarca(string m);
	float getPressao();
	void setPressao(float p);
	string toString();
};

