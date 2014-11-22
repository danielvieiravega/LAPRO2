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


void RoboC3PO::generateSteps()
{
    int cont = 1;
    bool saiu = false;
    bool estaTrancado = false;
    int x = posIni.getX();
    int y = posIni.getY();
    steps.push_back(Point(x,y));
    while(!saiu && cont < maxSteps)
    {
        int dx, dy;
        do
        {
            dy = 1;
            if(estaTrancado)


        }
        while(!lab->isEmpty(Point(x+dx, y+dy)));
        x += dx;
        y += dy;
        steps.push_back(Point(x, y));
        cont++;
        if(x >= lab->getWidth() || x < 0
                || y >= lab->getHeight() || y < 0)
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

