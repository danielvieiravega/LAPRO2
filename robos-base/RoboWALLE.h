#ifndef ROBOWALLE_H
#define ROBOWALLE_H

#include "Labirinto.h"
#include "Robo.h"
#include "Texture.h"

using namespace std;

class RoboWALLE : public Robo
{
public:
    RoboWALLE(const Point& posIni, Labirinto *l, int maxSteps);	// Construtor
    void draw();
    void generateSteps();
    vector<Point> getSteps();
    void percorreLabirinto(int dx, int dy, int &x, int &y);
private:
    TEX* roboTex; // id de textura do robo
};

#endif // ROBOWALLE_H
