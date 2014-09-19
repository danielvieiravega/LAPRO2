#include <string>

using namespace std;

#pragma once
class Disciplina
{
private:
	int codigo;
	string nome;
public:
	Disciplina(int c, string n);
	void setCodigo(int novoCodigo);
	int getCodigo();
	void setNome(string novoNome);
	string getNome();
};

