#include "polinomio.h"

using namespace std;

polinomio::polinomio()
{
    //ctor
}

void polinomio::adicionaTermos(const Termo t)
{
    termos.push_back(t);
}

float polinomio::calcula(float x)
{
    float soma = 0;
    list<Termo>::iterator it;
    for(it->termos.begin(); it!=termos.end(); it++)
    {
        soma += it->calculaTermo(x);
    }

    return soma;
}
