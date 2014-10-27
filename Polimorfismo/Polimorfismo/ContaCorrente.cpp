#include "ContaCorrente.h"


ContaCorrente::ContaCorrente(string num, string nom)
{
	numero = num;
	nome = nom;
}
void ContaCorrente::depositar(float v)
{
	if(v > 0)
		saldo += v;
}

void ContaCorrente::sacar(float v)
{
	if( v > 0 && v <= saldo)
		saldo -= v;
}
/*
	string tostring();
*/