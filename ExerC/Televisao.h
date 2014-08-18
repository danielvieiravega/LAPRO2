/*
Implemente uma televis�o. A televis�o tem um controle de volume do som e um controle de sele��o de canal.
O controle de volume permite aumentar ou diminuir a pot�ncia do volume de som em uma unidade de cada vez.
O controle de canal tamb�m permite aumentar e diminuir o n�mero do canal em uma unidade, por�m, tamb�m possibilita trocar para um canal indicado.
Tamb�m devem existir m�todos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televis�o e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.
*/
#pragma once
class Televisao
{
private:
	int volume = 0;
	int canal = 1;
public:
	Televisao();
	~Televisao();
	void AumentarVolume();
	void DiminuirVolume();
	int GetVolume();
	void AumentarCanal();
	void DiminuirCanal();
	void TrocarCanal(int c);
	int GetCanal();
};

Televisao::Televisao()
{
}

Televisao::~Televisao()
{
}

void Televisao::AumentarVolume()
{
	volume++;
}

void Televisao::DiminuirVolume()
{
	if (volume > 1)
		volume--;
}

int Televisao::GetVolume()
{
	return volume;
}

void Televisao::AumentarCanal()
{
	canal++;
}

void Televisao::DiminuirCanal()
{
	if (canal > 2)
		canal--;
}

void Televisao::TrocarCanal(int c)
{
	if (c > 0)
		canal = c;
}

int Televisao::GetCanal()
{
	return canal;
}