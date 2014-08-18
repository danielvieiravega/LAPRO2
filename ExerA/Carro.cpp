/*
Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina.
O carro consome 15 km/litro. Deve ser possível:
Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada distância (medida em km);
Retornar a quantidade de combustível e a distância total percorrida.

No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida e o total de combustível restante para cada um.
*/
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
