#ifndef CONTACOMUM_H
#define CONTACOMUM_H

#include <Conta.h>
#include <list>
#include "Transacao.h"

using namespace std;

class ContaComum : public Conta
{
    public:
        ContaComum(int numero, string nome);
        void deposito(float v, Transacao t);
        void retirada(float v, Transacao t);
        string extrato();
    private:
        int numeroConta;
        string nomeCorrentista;
        float saldo;
        list<Transacao> transacoes;
};

#endif // CONTACOMUM_H
