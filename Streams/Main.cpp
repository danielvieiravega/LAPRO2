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
	arq.open( "teste.txt" , ios::in );

	// Se houver erro, sai do programa
	if (!arq.is_open())
	{
		cout << "Nao foi possivel abrir o arquivo teste.txt no diretorio corrente" << endl;
		exit(1);
	}

	// L� cabe�alho
	string cabecalho;
	getline(arq,cabecalho);

	// Exibe cabe�alho na tela
	cout << cabecalho << endl;

	// Agora, l� n registros num�ricos
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

	if(arq.bad() || !arq.eof()) {
		cout << "Erro fatal!" << endl;
		exit(1);		// Aborta programa
	}

	cout << "Fechando o arquivo..." << endl;
	arq.close();

}

int main()
{
	// Cria output file stream (ofstream)
	ofstream arqsaida;

	// Cria e abre arquivo
	arqsaida.open( "teste.txt" , ios::out );

	// Se houver erro, sai do programa
	if (!arqsaida.is_open())
	{
		cout << "Nao foi possivel abrir/criar o arquivo teste.txt" << endl;
		return 0;
	}

	// Gera a semente aleat�ria
	srand(time(0));

	cout << "Gerando dados..." << endl;

	// Grava o cabe�alho
	arqsaida << "Cabecalho do arquivo" << endl;

	// Agora grava os 10000 registros num�ricos
	for (int i = 0; i < 10000; i++) {
		int num = rand() % 10000;
		arqsaida << i << setw(10) << num << endl;
		if(arqsaida.fail()) {
			cout << "Erro fatal!" << endl;
			exit(1);		// Aborta programa
		}
	}

	cout << "Fechando o arquivo..." << endl;
	arqsaida.close();


	ler();


	cin.get();

	system("pause");
	return 0;
}