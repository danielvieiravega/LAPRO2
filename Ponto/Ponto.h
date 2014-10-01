#pragma once
/*
Crie uma classe Ponto para representar um ponto no plano (x,y). Inclua métodos para setar e obter as coordenadas do ponto,
construtores necessários e um método para calcular a distância entre este ponto e outro ponto informado como parâmetro
(dica: você precisa aplicar o Teorema de Pitágoras).
*/
class Ponto
{
private:
	float x;
	float y;
public:
	Ponto();
	~Ponto(void);
	void setX(float valor);
	void setY(float valor);
	float getX();
	float getY();
	float calculaDistanciaXY(Ponto p);
};

