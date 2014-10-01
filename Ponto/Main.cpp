#include <iostream>
#include "Ponto.h"

using namespace std;

int main()
{
	Ponto p1;
	Ponto p2;
	p2.setX(4.0);
	p2.setY(5.0);

	float distancia = p2.calculaDistanciaXY(p1);

	cout << "A distancia entre p1 e p2 eh: " << distancia << endl;

	system("pause");
	return 0;
}