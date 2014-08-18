/*
Implemente uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.
O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.
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