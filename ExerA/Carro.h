#pragma once
/*
Implemente um carro. O tanque de combust�vel do carro armazena no m�ximo 50 litros de gasolina.
O carro consome 15 km/litro. Deve ser poss�vel:
Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada dist�ncia (medida em km);
Retornar a quantidade de combust�vel e a dist�ncia total percorrida.

No programa principal, crie 2 carros. Abaste�a 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a dist�ncia percorrida e o total de combust�vel restante para cada um.
*/

#pragma once
class Carro{
private:
	float tanque = 0;
	float distancia = 0;
public:
	Carro(float t, float d);
	void abastecer(float t);
	void mover(float d);
	float getCombustivel();
	float getDistancia();
};

Carro::Carro(float t, float d)
{
	tanque = t;
	distancia = d;
}

void Carro::abastecer(float t)
{
	if (t > 0.1 && t <= 50.0 && tanque < 50.0)
		tanque += t;
}

void Carro::mover(float d)
{
	distancia = d;
	float qntTanque = distancia / 15.0;
	tanque -= qntTanque;
}

float Carro::getCombustivel()
{
	return tanque;
}

float Carro::getDistancia()
{
	return distancia;
}


