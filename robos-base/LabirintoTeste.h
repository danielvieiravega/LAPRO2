#ifndef LABIRINTOTESTE_H
#define LABIRINTOTESTE_H

#include <fstream>
#include "Labirinto.h"

using namespace std;

class LabirintoTeste : public Labirinto {
	public:
		LabirintoTeste();	// Construtor
        bool isEmpty(const Point& ponto) const;
	    int  getWidth();
	    int  getHeight();
	    void loadMaze(string arquivo);
        int  getRobot();
        Point getIniPos();
        void getMazeFromFile(string arquivo);
	private:
		int dimx, dimy;		// Tamanho do labirinto
        char lab[100][100];	// O labirinto em si
        int robot;
        Point posIni;
};

#endif
