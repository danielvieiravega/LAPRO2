#ifndef CONTA_H
#define CONTA_H
#include <string>

using namespace std;

class Conta
{
    public:
        virtual void deposito(float v) = 0;
        virtual void retirada(float v) = 0;
        virtual string extrato() = 0;
};

#endif // CONTA_H

