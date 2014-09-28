#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#pragma once
#include <string>

using namespace std;

class Disciplina
{
private:
	string codigo;
	string nome;
public:
	Disciplina();
	Disciplina(string cod, string n);
	void setCodigo(string novoCodigo);
	void setNome(string novoNome);
	string getCodigo();
	string getNome();
};

#endif

/*
Uma disciplina consiste em um c�digo e um nome. Deve ser poss�vel realizar as seguintes opera��es:
Construtor, que recebe o c�digo e o nome;
Alterar o c�digo da disciplina;
Alterar o nome da disciplina;
Obter o c�digo da disciplina;
Obter nome da disciplina;*/