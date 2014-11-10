#include <string>
#ifndef TRANSACAO_H
#define TRANSACAO_H

using namespace std;

class Transacao
{
    public:
        Transacao(int d, int m, int a, string descr);
        string ToString();
        void setValorTransacao(float v);
    private:
        int dia;
        int mes;
        int ano;
        float valorTransacao;
        string descricao;
};

#endif // TRANSACAO_H
