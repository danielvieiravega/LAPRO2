#include "ContaComum.h"
#include "Conta.h"
#include <sstream>

ContaComum::ContaComum()
{
    saldo = 0;
}

void ContaComum::deposito(float v)
{
    if(v > 0)
        saldo += v;
}
void ContaComum::retirada(float v)
{
    if(saldo >= v)
        saldo -= v;
}
string ContaComum::extrato()
{
    list<Transacao*>::iterator it;
    it = transacoes.begin();
        ostringstream aux;
	aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Transacoes: ";
	while(it != transacoes.end())
    {
        aux << (*it)->ToString() << endl;
        it++;
    }
	return aux.str();
}
