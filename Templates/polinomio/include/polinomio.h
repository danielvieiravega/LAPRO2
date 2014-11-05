#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <list>
#include "termo.h"

class polinomio
{
    public:
        polinomio();
        void adicionaTermos(Termo termo);
        float calcula(float x);
    private:
        list<Termo> termos;
};

#endif // POLINOMIO_H
