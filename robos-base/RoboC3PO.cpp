#include "RoboC3PO.h"
#include "GL.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

RoboC3PO::RoboC3PO(const Point& posIni, Labirinto *l, int maxSteps)
    : Robo(posIni, l, maxSteps)
{
    roboTex = CarregaTextura("c3po.jpg", false);
}

void RoboC3PO::percorreLabirinto(int dx, int dy, int &x, int &y, bool &isTrancado)
{
    if(lab->isEmpty(Point(x+dx, y+dy)))//Caminha à direita
    {
        x += dx;
        y += dy;
    }
    else
    {
        dy = 1;
        if(lab->isEmpty(Point(x, y+dy))) //Testa se a DIREITA tá livre
        {
            y+=dy;
        }
        else //Testa se a ESQUERDA tá livre
        {
            dy = -1;
            if(lab->isEmpty(Point(x, y+dy)))
            {
                y+=dy;
            }
            isTrancado = true;
        }
    }
}

void RoboC3PO::generateSteps()
{
    int cont = 1;
    bool saiu = false;
    int x = posIni.getX();
    int y = posIni.getY();
    steps.push_back(Point(x,y));

    bool isTrancado = false; //Usar se o professor disser para o robo andar para "tras" trancado

    while(!saiu && cont < maxSteps)
    {
        int dx, dy = 0;
        //if(isTrancado)
        //    dx = -1;
        //else
        dx = 1;
        do
        {
            percorreLabirinto(dx, dy, x, y, isTrancado);
        }
        while(!lab->isEmpty(Point(x, y)));

        steps.push_back(Point(x, y));
        cont++;
        if(x >= lab->getWidth() || x < 0 || y >= lab->getHeight() || y < 0)
            saiu = true;
    }
}

void RoboC3PO::draw()
{
    float rx,ry;
    float deltax = GL::getDeltaX();
    float deltay = GL::getDeltaY();
    rx = pos.getX() * deltax;
    ry = pos.getY() * deltay;
    GL::enableTexture(roboTex->texid);
    GL::setColor(255,255,255);
    GL::drawRect(rx, ry, rx+deltax, ry+deltay);
    GL::disableTexture();
}
