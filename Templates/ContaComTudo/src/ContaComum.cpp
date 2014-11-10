#include "ContaComum.h"
#include "Conta.h"
#include <sstream>

ContaComum::ContaComum(int numero, string nome)
{
    if(numero > 0)
        numeroConta = numero;
    nomeCorrentista = nome;
    saldo = 0;
}

void ContaComum::deposito(float v, Transacao t)
{
    if(v > 0)
        saldo += v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
void ContaComum::retirada(float v,  Transacao t)
{
    if(saldo >= v)
        saldo -= v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
string ContaComum::extrato()
{
    list<Transacao>::iterator it;
    it = transacoes.begin();
    ostringstream aux;
    aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Transacoes: ";
    while(it != transacoes.end())
    {
        aux << it->ToString() << endl;
        it++;
    }
    return aux.str();
}
