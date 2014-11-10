#include "ContaLimite.h"
#include "Conta.h"
#include <sstream>

ContaLimite::ContaLimite(float l, int numero, string nome)
{
    if(numero > 0)
        numeroConta = numero;
    nomeCorrentista = nome;
    limite = l;
    saldo = 0;
}

void ContaLimite::deposito(float v, Transacao t)
{
    if(v > 0)
        saldo += v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
void ContaLimite::retirada(float v, Transacao t)
{
    if(saldo >= saldo + limite)
        saldo -= v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
string ContaLimite::extrato()
{
    list<Transacao>::iterator it;
    it = transacoes.begin();
        ostringstream aux;
	aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Limite: "
	<< limite << endl << "Transacoes: ";
	while(it != transacoes.end())
    {
        aux << it->ToString() << endl;
        it++;
    }
	return aux.str();
}
