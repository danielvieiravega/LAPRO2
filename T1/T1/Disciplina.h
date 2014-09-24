#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#pragma once
#include <string>

using namespace std;

class Disciplina
{
private:
	int codigo;
	string nome;
public:
	Disciplina();
	Disciplina(int cod, string n);
	void setCodigo(int novoCodigo);
	void setNome(string novoNome);
	int getCodigo();
	string getNome();
};

#endif