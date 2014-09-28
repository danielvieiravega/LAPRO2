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
Uma disciplina consiste em um código e um nome. Deve ser possível realizar as seguintes operações:
Construtor, que recebe o código e o nome;
Alterar o código da disciplina;
Alterar o nome da disciplina;
Obter o código da disciplina;
Obter nome da disciplina;*/