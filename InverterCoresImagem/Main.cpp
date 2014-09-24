#include "Main.h"
#include <fstream>   // para usar file streams (ifstream,ofstream)
#include <iostream>  // para usar cin,cout
#include <string>	// para usar string
#include <iomanip>   // para usar manipuladores (setw, right, ...)
#include <cstdlib>   // para usar srand(), rand() e exit()

using namespace std;

Main::Main(void)
{
}
Main::~Main(void)
{
}

void ler()
{
	// Cria input file stream (ifstream)
	ifstream arq;

	cout << "Abrindo arquivo texto..." << endl;

	// Abre arquivo
	arq.open( "teste.ppm" , ios::in );

	// Se houver erro, sai do programa
	if (!arq.is_open())
	{
		cout << "Nao foi possivel abrir o arquivo teste.ppm no diretorio corrente" << endl;
		exit(1);
	}

	// Lê cabeçalho
	string cabecalho;
	getline(arq,cabecalho);

	do
	{
		int num, valor;
		arq >> num >> valor;
		if(!arq.fail()) {
			cout << num << "\t" << valor << endl;
		}
		else
		{
			cout << "FALHA: erro ao ler o arquivo" << endl;
			exit(1);
		}
	} while(arq.good());


	arq.close();

}

int main()
{
	struct cor
	{
		unsigned char R;
		unsigned char G;
		unsigned char B;
	};

	int linha, coluna;
	ler();

	system("pause");
	cin.get();
	return 1;
}