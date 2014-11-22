#include "LabirintoTeste.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

LabirintoTeste :: LabirintoTeste()
{
}

// Deveria carregar o labirinto de um arquivo,
// aqui so gera um espaco fechado, com uma saida na parte de baixo
void LabirintoTeste :: loadMaze(string arquivo)
{

    string dimensionsLine = arquivo.substr(4,6);
    stringstream ss(dimensionsLine);
    ss >> dimx >> dimy;

    cout << "dimx: " << dimx <<endl << "dimy: " << dimy << endl;

    string  labirinto = getLabirintoFromFile(arquivo);

    cout << labirinto << endl;

    for(int i= 0; i<dimx; i++)
    {
        for(int j=0; j<dimy; j++)
        {

        }
    }

    robot = 1;
    posIni = Point(1,1);
}

//Método para pegar somente o labirinto a partir do arquivo
string LabirintoTeste :: getLabirintoFromFile(string arquivo)
{
    int cont = 0;
    for(unsigned int i =0; i< arquivo.length(); i++)
    {
        if(arquivo[i] == '\n')
        {
            cont++;
            if(cont == 3)
            {
                int inicio = i + 1;
                int fim = arquivo.length() - 1;
                labirinto = arquivo.substr(inicio, fim);
                break;
            }
        }
    }

    return arquivo;
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
