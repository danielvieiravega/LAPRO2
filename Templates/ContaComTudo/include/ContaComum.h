#ifndef CONTACOMUM_H
#define CONTACOMUM_H

#include <Conta.h>
#include <list>
#include "Transacao.h"

using namespace std;

class ContaComum : public Conta
{
    public:
        ContaComum();
        void deposito(float v);
        void retirada(float v);
        string extrato();
    private:
                int numeroConta;
        string nomeCorrentista;
        float saldo;
        list<Transacao*> transacoes;
};

#endif // CONTACOMUM_H
