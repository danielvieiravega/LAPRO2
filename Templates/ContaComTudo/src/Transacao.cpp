#include "Transacao.h"
#include <sstream>

Transacao::Transacao(int d, int m, int a, float v)
{
    dia = d;
    mes = m;
    ano = a;
    valorTransacao = v;
    if(v >= 0)
        descricao = "Credito";
    else
        descricao = "Debito";
}

string Transacao::ToString()
{
    ostringstream aux;
	aux << "Data: " << dia << "/" << mes << "/" << ano << endl <<
	"Valor: " << valorTransacao << endl <<
	"Descricao: " << descricao;
	return aux.str();

}
