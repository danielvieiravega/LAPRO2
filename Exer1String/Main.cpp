#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{
	Pessoa p;
	bool result;
	string entrada;

	cout << "Informe o nome da pessoa: " << endl;
	cin >> entrada; 
	p.SetNome(entrada);

	cout << "Informe o CPF para ser validado: ";
	cin >> entrada;
	result = p.SetCpf(entrada);
	if(result)
		cout << "O CPF informado é valido" << endl;
	else
		cout << "O CPF informado é invalido" << endl;
	cout << result << endl;

	cout << "Nome: " << p.GetNome() << endl;
	cout << "CPF: " << p.GetCpf() << endl;

	system("pause");
	return 0;
}