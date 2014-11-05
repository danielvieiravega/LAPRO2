#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "Conta.h"

class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(int d);
    private:
        int diaAniversario;
};

#endif // CONTAPOUPANCA_H
