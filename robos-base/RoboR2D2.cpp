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

void RoboR2D2::percorreLabirinto(int dx, int dy, int &x, int &y, bool &inverte, bool &inverte1)// , bool &inverte2)
{
    if(lab->isEmpty(Point(x+dx, y+dy)))//Caminha "mantendo" a mao à esquerda
    {
        x += dx;
        y += dy;
    }
    else if(lab->isEmpty(Point(x, y+1)))
    {
        if(!inverte)
            dy = -1;
        else
        {
            dy = 1;
            inverte = false;
        }
        y+=dy;
        if(lab->isEmpty(Point(x, y+1)))
            inverte = true;
    }
    else if(lab->isEmpty(Point(x-1, y)))
    {
        if(!inverte)
            dx = -1;
        else
        {
            dx = 1;
            inverte = false;
        }
        x += dx;
        if(lab->isEmpty(Point(x-1, y)))
            inverte = true;
    }else if(lab->isEmpty(Point(x, y-1)))
    {
        if(!inverte1)
            dy = 1;
        else
        {
            dy = -1;
            inverte1 = false;
        }
        y += dy;
        if(lab->isEmpty(Point(x, y-1)))
            inverte1 = true;
    }
    else{
       if(!inverte1)
            dx = 1;
        else
        {
            dx = -1;
            inverte1 = false;
        }
        x += dx;
        if(lab->isEmpty(Point(x+1, y)))
        {
            inverte1 = true;
        }

    }
}

void RoboR2D2::generateSteps()
{
    int cont = 1;
    bool saiu = false;
    int x = posIni.getX();
    int y = posIni.getY();
    steps.push_back(Point(x,y));

    bool inverte = false;
    bool inverte1 = false;
    while(!saiu && cont < maxSteps)
    {
        int dx, dy = 0;
        if(!inverte)
            dx = 1;
        else
            dx = -1;

        if(!inverte1)
            dy = -1;
        else
            dy = 1;

        do
        {
            percorreLabirinto(dx, dy, x, y, inverte, inverte1);
        }
        while(!lab->isEmpty(Point(x, y)));

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
