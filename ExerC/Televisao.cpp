#include "Televisao.h"
/*
Implemente uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.
O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.
*/

#include <iostream>
using namespace std;

int main()
{
	Televisao t1, t2;
	t1.DiminuirVolume();
	t1.AumentarVolume();
	t1.AumentarVolume();
	t1.AumentarVolume();
	t1.AumentarVolume();
	t1.AumentarVolume();
	t1.AumentarVolume();

	cout << "O volume ta televisao 1 eh: " << t1.GetVolume() << endl;

	t2.AumentarVolume();
	t2.AumentarVolume();
	t2.AumentarVolume();
	t2.AumentarVolume();
	t2.AumentarVolume();
	t2.AumentarVolume();
	t2.AumentarVolume();

	cout << "O volume ta televisao 2 eh: " << t2.GetVolume() << endl;

	t2.AumentarCanal();
	t2.AumentarCanal();
	t2.AumentarCanal();
	t2.AumentarCanal();

	cout << "O canal da t2 eh: " << t2.GetCanal() << endl;

	t2.TrocarCanal(999);
	cout << "O canal da t2 eh: " << t2.GetCanal() << endl;

	t2.TrocarCanal(-5454);
	cout << "O canal da t2 eh: " << t2.GetCanal() << endl;

	cin.get();

	return 0;
}
