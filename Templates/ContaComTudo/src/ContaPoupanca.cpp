#include "ContaPoupanca.h"
#include "Conta.h"
#include <sstream>

ContaPoupanca::ContaPoupanca(int d, int numero, string nome)
{
    if(numero > 0)
        numeroConta = numero;
    nomeCorrentista = nome;
    diaAniversario = d;
}

void ContaPoupanca::deposito(float v, Transacao t)
{
    if(v > 0)
        saldo += v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
void ContaPoupanca::retirada(float v, Transacao t)
{
    if(saldo >= v)
        saldo -= v;
    t.setValorTransacao(v);
    transacoes.push_back(t);
}
string ContaPoupanca::extrato()
{
    list<Transacao>::iterator it;
    it = transacoes.begin();
        ostringstream aux;
	aux << "Numero da Conta: " << numeroConta << endl << "Nome do Cliente: " << nomeCorrentista << endl << "Aniversaio: "
	<< diaAniversario << endl << "Transacoes: ";
	while(it != transacoes.end())
    {
        aux << it->ToString() << endl;
        it++;
    }
	return aux.str();
}


