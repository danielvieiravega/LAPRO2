#include "RoboR2D2.h"
#include "GL.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

RoboR2D2::RoboR2D2(const Point& posIni, Labirinto *l, int maxSteps)
    : Robo(posIni, l, maxSteps)
{
    roboTex = CarregaTextura("r2d2.jpg", false);
}

void RoboR2D2::percorreLabirinto(int &dx, int &dy, int &x, int &y)
{
    while(!lab->isEmpty(Point(x + dx, y + dy)))
    {
        //vira para a direita
            if(dx == 1)
            {
                dx = 0;
                dy = 1;
            }
            else if (dx == -1)
            {
                dx = 0;
                dy = 1;
            }
            else if(dy == 1)
            {
                dy = 0;
                dx = 1;
            }
            else if (dy == -1)
            {
                dx = 1;
                dy = 0;
            }

        if(!lab->isEmpty(Point(x + dx, y + dy)) && !lab->isEmpty(Point(x + dx, y + dy)))
        {
            if(dx == 1)
            {
                dx = 0;
                dy = 1;
            }
            else if (dx == -1)
            {
                dx = 0;
                dy = 1;
            }
            else if(dy == 1)
            {
                dy = 0;
                dx = 1;
            }
            else if (dy == -1)
            {
                dx = 1;
                dy = 0;
            }
        }
        else
        {
            if(dx == 1)
            {
                dx = 0;
                dy = 1;
            }
            else if (dx == -1)
            {
                dx = 0;
                dy = 1;
            }
            else if(dy == 1)
            {
                dy = 0;
                dx = 1;
            }
            else if (dy == -1)
            {
                dx = 1;
                dy = 0;
            }
        }
    }

    x += dx;
    y += dy;
}
/*
while(!mapa->vazio(direcao){
  if ((!mapa->vazio(direcao + viraDireita) && (mapa->vazio(direcao + viraEsquerda)){
     //viraEsquerda
  }else{
   //viraDireita
 }
}
*/

void RoboR2D2::generateSteps()
{
    int cont = 1;
    bool saiu = false;
    int x = posIni.getX();
    int y = posIni.getY();
    steps.push_back(Point(x,y));
    int dx, dy;
    dx = 1;
    dy = 0;

    while(!saiu && cont < maxSteps)
    {
        percorreLabirinto(dx, dy, x, y);

        steps.push_back(Point(x, y));
        cont++;
        if(x >= lab->getWidth() || x < 0 || y >= lab->getHeight() || y < 0)
            saiu = true;
    }
}

void RoboR2D2::draw()
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
