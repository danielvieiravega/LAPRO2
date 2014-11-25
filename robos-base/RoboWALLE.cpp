#include "RoboWALLE.h"
#include "GL.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

RoboWALLE::RoboWALLE(const Point& posIni, Labirinto *l, int maxSteps)
    : Robo(posIni, l, maxSteps)
{
    roboTex = CarregaTextura("walle.jpg", false);
}

void RoboWALLE::percorreLabirinto(int dx, int dy, int &x, int &y)
{

}

void RoboWALLE::generateSteps()
{
    int cont = 1;
    bool saiu = false;
    int x = posIni.getX();
    int y = posIni.getY();
    steps.push_back(Point(x,y));

    while(!saiu && cont < maxSteps)
    {
        int dx, dy = 0;
        dx = 1;
        do
        {
            percorreLabirinto(dx, dy, x, y);
        }
        while(!lab->isEmpty(Point(x, y)));

        steps.push_back(Point(x, y));
        cont++;
        if(x >= lab->getWidth() || x < 0 || y >= lab->getHeight() || y < 0)
            saiu = true;
    }
}

void RoboWALLE::draw()
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
