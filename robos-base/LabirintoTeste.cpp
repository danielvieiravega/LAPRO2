#include "LabirintoTeste.h"
#include <iostream>
#include <string>
#include <sstream>

LabirintoTeste :: LabirintoTeste()
{
}

// Deveria carregar o labirinto de um arquivo,
// aqui so gera um espaco fechado, com uma saida na parte de baixo
void LabirintoTeste :: loadMaze(string arquivo)
{
    //TODO: ENCERRAR O PROGRAMA CASO NAO ENCONTRE O ARQUIVO!!
    std::cout << arquivo << endl;
    std::string dimensionsLine = arquivo.substr(4,6);
    std::stringstream ss(dimensionsLine);
    ss >> dimx >> dimy;
    string  labirinto;
    int cont = 0;
    cout << "tam arquivo" << arquivo.length() << endl;
    for(int i =0; i< arquivo.length(); i++)
    {
        if(arquivo[i] == '\n')
        {
            cont++;
            cout << "Qnt \n: " << cont << " posicao " << i << endl;
            if(cont == 3)
            {
                cout << "entreei  " <<  arquivo[i] << "  " << arquivo.length();
                int inicio = i + 1;
                int fim = arquivo.length() - 1;
                cout << endl << "inicio: " << inicio << "  " << "fim: " << fim << endl;
                labirinto = arquivo.substr(inicio, fim);
                break;
            }
        }
    }
    cout << labirinto << endl;
    int tamLabirinto = 0;
    for(int i= 0; i<dimx; i++)
    {
        for(int j=0; j<dimy; j++)
        {
            if(labirinto[tamLabirinto] == '*')
            {
                lab[i][j] = '*';
                tamLabirinto++;
            }

            else if(labirinto[tamLabirinto] == ' ')
                {
                    lab[i][j] = ' ';
                    tamLabirinto++;
                }
        }
        tamLabirinto += dimx;
    }
    //dimx = 20; dimy = 20;
    /*for(int i=0; i<dimy; i++)
        for(int j=0; j<dimx; j++)
            lab[i][j] = ' ';
    for(int i=0; i<dimx; i++)
    {
        lab[0][i] = '*';
        lab[dimy-1][i] = '*';
        lab[i][0] = '*';
        lab[i][dimx-1] = '*';
    }
    lab[dimy-2][dimx-1] = ' '; // saida

    for(int i=0; i<dimx; i++)
        lab[i][3] = '*';
    /* for (int i =0; i<dimx; i++)
        for (int j =0; j<dimx; j++)
            lab[i][j]='*';
            */
    robot = 1;
    posIni = Point(1,1);


//    for(int i=0; i < arquivo.size();i++)
//        cout << arquivo[i] << "[" << i << "]";
}

// Retorna true se a posição x,y do labirinto
// estiver livre (i.e. contenha um espaço em branco)
bool LabirintoTeste :: isEmpty(const Point& pos) const
{
    if(pos.getX()<0 || pos.getX()>=dimx
            || pos.getY()<0 || pos.getY()>=dimy) return true;
    return (lab[pos.getY()][pos.getX()]==' ');
}

// Retorna dimensoes do labirinto
int LabirintoTeste :: getWidth()
{
    return dimx;
}
int LabirintoTeste :: getHeight()
{
    return dimy;
}

int LabirintoTeste::getRobot()
{
    return robot;
}

Point LabirintoTeste::getIniPos()
{
    return posIni;
}
