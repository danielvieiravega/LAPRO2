#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa(void)
{
}

Pessoa::~Pessoa(void)
{
}

string Pessoa::GetNome()
{
	return nome;
}

void Pessoa::SetNome(string n)
{
	nome = n;
}

string Pessoa::GetCpf()
{
	return cpf;
}

bool Pessoa::SetCpf(string cc)
{
	int soma = 0;
	int peso = 2;
	int dv1 = 0;
	int dv2 = 0;
	int controle = 0;

	string c = cc.substr(0,9);

	//Validação DV1
	for (int i=8; i>=0; i--)
	{

		soma += (c[i] - '0') * peso;
		peso++;
	}
	int modDv1 = (soma * 10)%11;
	if(modDv1 == 10)
		dv1 = 0;
	else
		dv1 = modDv1;

	peso = 3;
	int soma2 = 0;
	//Validação DV2
	for (int i=8; i>=0; i--)
	{
		soma2 += (c[i] - '0') * peso;
		peso++;
	}
	int modDv2 = ((soma2 + dv1 * 2) * 10) % 11;
	if(modDv2 == 10)
		dv2 = 0;
	else
		dv2 = modDv2;

	controle = dv1 * 10 + dv2;

	string dvCpf = cc.substr(9,11);
	string ctrl = to_string(controle);

	if(dvCpf == ctrl)
	{
		cpf = cc;
		return true;
	}
		return false;
}

string Pessoa::GetEndereco()
{
	return endereco;
}

void Pessoa::SetEndereco(string end)
{
	endereco = end;
}