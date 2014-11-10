#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"
#include <list>
#include "Transacao.h"

using namespace std;

class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(int d);
        void deposito(float v);
        void retirada(float v);
        string extrato();

    private:
        int diaAniversario;
                int numeroConta;
        string nomeCorrentista;
        float saldo;
        list<Transacao*> transacoes;
};

#endif // CONTAPOUPANCA_H
