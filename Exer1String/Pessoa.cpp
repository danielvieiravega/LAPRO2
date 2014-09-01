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

int Pessoa::SetCpf(string c)
{
	int soma = 0;
	int peso = 2;

	//Validação DV1
	for (int i=8; i>=0; i--)
	{
		soma += (int)(c[i]) * peso;
		cout << soma << " caract c " << c[i] << "* peso " << peso << endl;
		peso++;
	}
	return soma;

	//return true or false obviamente
}

string Pessoa::GetEndereco()
{
	return endereco;
}

void Pessoa::SetEndereco(string end)
{
	endereco = end;
}