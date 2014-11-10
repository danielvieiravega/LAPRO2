#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "Transacao.h"
using namespace std;

class Conta
{
    public:
        virtual void deposito(float v, Transacao t) = 0;
        virtual void retirada(float v, Transacao t) = 0;
        virtual string extrato() = 0;
};
#endif // CONTA_H

