#include "Transacao.h"
#include <sstream>

Transacao::Transacao(int d, int m, int a, string descr)
{
    dia = d;
    mes = m;
    ano = a;
    if(valorTransacao >= 0)
        descricao = "Credito: " + descr;
    else
        descricao = "Debito" + descr;
}
void Transacao::setValorTransacao(float v)
{
    valorTransacao = v;
}

string Transacao::ToString()
{
    ostringstream aux;
	aux << "=====================================================" << endl <<
	"Data: " << dia << "/" << mes << "/" << ano << endl <<
	"Valor: " << valorTransacao << endl <<
	"Descricao: " << descricao;
	return aux.str();

}
