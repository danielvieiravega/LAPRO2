#include "LabirintoTeste.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
LabirintoTeste :: LabirintoTeste()
{
}

int LabirintoTeste::getNumberOfCharactersBeforeNewLine(string arquivo, int pos)
{
    int contLine = 0;
    for (unsigned int i=0; i<arquivo.length(); i++)
    {
        if(arquivo[i] == '\n')
            contLine++;
        if(contLine == pos)
            return i;
    }
}
//Obtenho as dimensoes linhas x coluna
void LabirintoTeste::setDim(string arquivo)
{
    int firstNewLine = getNumberOfCharactersBeforeNewLine(arquivo,1);
    string firstLine = arquivo.substr(4, firstNewLine);
    stringstream fl(firstLine);
    fl >> dimy >> dimx;
}

//obtenho as posções x e y do robo
void LabirintoTeste::setPos(string arquivo)
{
    int posx, posy;
    int firstNewLine = getNumberOfCharactersBeforeNewLine(arquivo,1);
    int afterSecondNewLine = getNumberOfCharactersBeforeNewLine(arquivo,1);
    firstNewLine += 5;
    string secondLine = arquivo.substr(firstNewLine, afterSecondNewLine);
    stringstream sl(secondLine);
    sl >> posx >> posy;
    posIni = Point(posx, posy);
}

//Obtenho o tipo de robo
void LabirintoTeste::setRobot(string arquivo)
{
    int robotNumber;
    int afterThirdNewLine = getNumberOfCharactersBeforeNewLine(arquivo,2);
    int afterFourthNewLine = getNumberOfCharactersBeforeNewLine(arquivo,3);
    afterThirdNewLine += 5;
    string thirdLine = arquivo.substr(afterThirdNewLine, afterFourthNewLine);
    stringstream tl(thirdLine);
    tl >> robot;
}

void LabirintoTeste::getMazeFromFile(string arquivo)
{
    int linha = 0;
    int coluna = 0;
    bool isLab = false; //Fica true quando estamos no labirinto dentro do arquivo

    for(unsigned int i =0; i< arquivo.length(); i++) //deixei unsigned por causa do warning do codeblocks: comparison between signed and unsigned integer expressions [-Wsign-compare]|
    {
        if(isLab)
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
            if(arquivo[i] == '\r\n' || arquivo[i] == '\n')
                linha++;
            if(linha == 3) //aqui é para passar as linhas de configuracao do arquivo do labirinto
            {
                isLab = true;
                linha = 0;
                coluna = 0;
            }
        }
    }
}

// Deveria carregar o labirinto de um arquivo,
// aqui so gera um espaco fechado, com uma saida na parte de baixo
void LabirintoTeste :: loadMaze(string arquivo)
{
    setDim(arquivo);
    cout << "dimx: " << dimx << endl << "dimy: " << dimy << endl;

    setPos(arquivo);
    cout << "posx: " << posIni.getX() << endl << "posy: " << posIni.getY() << endl;

    setRobot(arquivo);
    cout << "Robot: " << robot << endl;

    getMazeFromFile(arquivo);
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
