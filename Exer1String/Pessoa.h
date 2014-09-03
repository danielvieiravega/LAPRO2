#include <string.h>
#include <iostream>
using namespace std;

#pragma once
class Pessoa
{
private:
	string nome;
	string cpf;
	string endereco;
	string nascimento;
public:
	Pessoa(void);
	~Pessoa(void);
	string GetNome();
	void SetNome(string n);
	string GetCpf();
	bool SetCpf(string c); //bool
	string GetEndereco();
	void SetEndereco(string end);
	string GetNascimento();
	void SetNascimento(string nascimento);

};

