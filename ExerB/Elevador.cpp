#include "Elevador.h"
#include <iostream>
/*
Implemente um controle de elevador. O elevador armazena o número do andar onde está parado. Devem existir métodos para:
Deslocar o elevador um andar para cima;
Deslocar o elevador um andar para baixo;
Retornar o andar onde o elevador está no momento.
No programa principal, crie 2 elevadores e faça alguns movimentos (subir e/ou descer) com ambos. Exiba o andar final de cada um.
*/
using namespace std;

int main()
{
	Elevador e1, e2;

	cout << "O elevador 1 esta no andar: " << e1.GetAndar() << endl;
	e1.Subir();
	e1.Subir();
	e1.Subir();
	cout << "O elevador 1 esta no andar: " << e1.GetAndar() << endl;
	e1.Subir();
	e1.Descer();
	e1.Descer();
	e1.Descer();
	e1.Descer();
	e1.Descer();
	e1.Descer();
	cout << "O elevador 1 esta no andar: " << e1.GetAndar() << endl;

	cout << "O elevador 2 esta no andar: " << e2.GetAndar() << endl;
	e2.Subir();
	e2.Subir();
	e2.Subir();
	e2.Descer();
	cout << "O elevador 2 esta no andar: " << e2.GetAndar() << endl;

	cin.get();
	return 0;
}
