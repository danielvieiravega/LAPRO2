/*
Implemente uma conta. A conta será utilizada em um restaurante, para calcular o total a ser pago. 
Antes de receber os dados de um cliente, o total acumulado deve ser definido como zero. 
A seguir, serão informadas as parcelas da conta, uma de cada vez. Ao final, pode ser solicitado o total com ou sem a taxa de serviço (10%). 
O cliente então fornece uma quantidade em dinheiro e deve ser calculado o troco devido.
*/
#include <iostream>
#include <string>

using namespace std;
#pragma once
class Conta
{
private:
	double TotalDevido;
	string Nome;
	string Telefone;
public:
	Conta();
	string GetDadosCliente();
	double Devido(double valor, bool taxa);
	double Troco(double dinheiro);
};

Conta::Conta()
{
	TotalDevido = 0;
	Nome = "";
	Telefone = "";
}

string Conta::GetDadosCliente()
{
	return "Nome: " + Nome + "Telefone: " + Telefone;
}

double Conta::Devido(double valor, bool taxa)
{
	if(taxa)
		TotalDevido = valor + valor*0.1;
	else
		TotalDevido = valor;
	return TotalDevido;
}

double Conta::Troco(double dinheiro)
{
	return dinheiro - TotalDevido;
}