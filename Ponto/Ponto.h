#pragma once
/*
Crie uma classe Ponto para representar um ponto no plano (x,y). Inclua m�todos para setar e obter as coordenadas do ponto,
construtores necess�rios e um m�todo para calcular a dist�ncia entre este ponto e outro ponto informado como par�metro
(dica: voc� precisa aplicar o Teorema de Pit�goras).
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

