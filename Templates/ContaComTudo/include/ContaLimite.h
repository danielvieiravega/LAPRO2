#ifndef CONTALIMITE_H
#define CONTALIMITE_H
#include "Conta.h"
#include <list>
#include "Transacao.h"

using namespace std;

class ContaLimite : public Conta
{
    public:
        ContaLimite(float l);
        void deposito(float v);
        void retirada(float v);
        string extrato();
    private:
        float limite;
        int numeroConta;
        string nomeCorrentista;
        float saldo;
        list<Transacao*> transacoes;
};

#endif // CONTALIMITE_H
