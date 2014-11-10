#include <iostream>
#include "Conta.h"
#include "ContaComum.h"
#include "ContaLimite.h"
#include "ContaPoupanca.h"
#include "Transacao.h"
using namespace std;

int main()
{
    cout << "Banco ABC" << endl;
    Conta* lista[3];
    ContaComum* comum = new ContaComum(1, "Jose Augusto");
    ContaLimite* limite = new ContaLimite(100, 2, "Roberto Moreno");
    ContaPoupanca* poupanca = new ContaPoupanca(25, 3, "Marcos Albuquerque");

    lista[0] = comum;
    lista[1] = limite;
    lista[2] = poupanca;

    lista[0]->deposito(500, *(new Transacao(21, 12, 2014, "Adiantamento Salarial")));
    lista[0]->extrato();
    return 0;
}
