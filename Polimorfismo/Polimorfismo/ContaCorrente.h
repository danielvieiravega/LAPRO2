#include <string.h>
#include <iostream>

using namespace std;

class ContaCorrente
{
public:
	ContaCorrente(string num, string nom);
	void depositar(float v);
	virtual void sacar(float v);
	virtual string tostring();
private:
	string numero;
	string nome;
	float saldo;
};

