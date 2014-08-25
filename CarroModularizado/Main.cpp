#include "Carro.h"
#include <iostream>

using namespace std;

int main()
{
	Carro c1(20.0, 200.0);
	Carro c2(30.0, 400.0);

	cout << "A distancia do carro 1 foi de " << c1.getDistancia() << "km e o  Combustivel restante eh: " << c1.getCombustivel() << " litros" << endl;
	cout << "A distancia do carro 2 foi de " << c2.getDistancia() << "km e o  Combustivel restante eh: " << c2.getCombustivel() << " litros" << endl;

	cin.get();
	return 0;
}


