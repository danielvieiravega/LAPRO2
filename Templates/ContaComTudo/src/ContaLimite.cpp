#include "ContaLimite.h"
#include "Conta.h"
#include <sstream>

ContaLimite::ContaLimite(float l)
{
    limite = l;
    saldo = 0;
}

void ContaLimite::deposito(float v)
{
    if(v > 0)
        saldo += v;
}
void ContaLimite::retirada(float v)
{
    if(saldo >= saldo + limite)
        saldo -= v;
}
string ContaLimite::extrato()
{
    list<Transacao*>::iterator it;
    it = transacoes.begin();
        ostringstream aux;
	aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Limite: "
	<< limite << endl << "Transacoes: ";
	while(it != transacoes.end())
    {
        aux << (*it)->ToString() << endl;
        it++;
    }
	return aux.str();
}
