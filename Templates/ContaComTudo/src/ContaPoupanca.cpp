#include "ContaPoupanca.h"
#include "Conta.h"
#include <sstream>

void ContaPoupanca::deposito(float v)
{
    if(v > 0)
        saldo += v;
}
void ContaPoupanca::retirada(float v)
{
    if(saldo >= v)
        saldo -= v;
}
string ContaPoupanca::extrato()
{
    list<Transacao*>::iterator it;
    it = transacoes.begin();
        ostringstream aux;
	aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Aniversaio: "
	<< diaAniversario << endl << "Transacoes: ";
	while(it != transacoes.end())
    {
        aux << (*it)->ToString() << endl;
        it++;
    }
	return aux.str();
}

ContaPoupanca::ContaPoupanca(int d)
{
    diaAniversario = d;
}
