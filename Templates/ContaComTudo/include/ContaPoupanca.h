#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"
#include <list>
#include "Transacao.h"

using namespace std;

class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(int d, int numero, string nome);
        void deposito(float v, Transacao t);
        void retirada(float v, Transacao t);
        string extrato();

    private:
        int diaAniversario;
                int numeroConta;
        string nomeCorrentista;
        float saldo;
        list<Transacao> transacoes;
};

#endif // CONTAPOUPANCA_H
