#include "LabirintoTeste.h"
#include "RoboB9.h"
#include "GL.h"
#include "RoboC3PO.h"
#include "RoboR2D2.h"
#include "RoboWALLE.h"

using namespace std;

int main()
{
    GL::init();

    std::ifstream ifs("labirinto.txt");
    if(!ifs.is_open())
    {
        std::cout << "Falha ao abrir arquivo" << endl;
        return 1; //encerra pois não conseguiu abrir o arquivo
    }
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                         (std::istreambuf_iterator<char>()) );

    // Carga do labirinto
    Labirinto* lab = new LabirintoTeste();
    lab->loadMaze(content);

    Point posIni = lab->getIniPos();
    cout << "Pos ini: " << posIni.getX() << " , " << posIni.getY() << endl;

    int robo = lab->getRobot();
    //cout << robo;
    switch (robo) //Aqui instancio o robo conforme o tipo definido no arquivo do labirinto
    {
    case 1:
    {
        RoboC3PO* c3po = new RoboC3PO(posIni, lab, 100);
        GL::setLabirintoRobo(lab, c3po);
        GL::loop();
    }
    break;
    case 2:
    {
        RoboR2D2* r2d2 = new RoboR2D2(posIni, lab, 300);
        GL::setLabirintoRobo(lab, r2d2);
        GL::loop();
    }
    break;
    case 3:
    {
        RoboWALLE* walle = new RoboWALLE(posIni, lab, 400);
        GL::setLabirintoRobo(lab, walle);
        GL::loop();
    }
    break;
    default:
    {
        RoboB9* b9 = new RoboB9(posIni, lab, 200); // 200 passos no maximo
        GL::setLabirintoRobo(lab, b9);
        GL::loop();
    }
    break;
    }

    return 0;
}


