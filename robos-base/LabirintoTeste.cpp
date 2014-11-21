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

    dimx = 9;
    dimy = 9;
getMazeFromFile(arquivo);

    robot = 1;
    posIni = Point(2,2);
}
void LabirintoTeste::getMazeFromFile(string arquivo)
{
        int linha = 0;
    int coluna = 0;
    bool is_lab = false; //Fica true quando estamos no labirinto dentro do arquivo

    for(unsigned int i =0; i< arquivo.length(); i++) //deixei unsigned por causa do warning do codeblocks: comparison between signed and unsigned integer expressions [-Wsign-compare]|
    {
        if(is_lab)
        {
            if(arquivo[i] == '\r\n' || arquivo[i] == '\n')
            {
                linha++;
                coluna = 0;
            }
            else
                lab[linha][coluna++] = arquivo[i];
        }
        else
        {
            //aqui é as 3 linhas de configuracao do arquivo do labirinto
            if(arquivo[i] == '\r\n' || arquivo[i] == '\n')
                linha++;
            if(linha == 3)
            {
                is_lab = true;
                linha = 0;
                coluna = 0;
            }
        }
    }
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
