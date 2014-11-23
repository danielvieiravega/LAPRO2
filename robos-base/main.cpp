#include "LabirintoTeste.h"
#include "RoboB9.h"
#include "GL.h"
#include "RoboC3PO.h"
#include "RoboR2D2.h"

using namespace std;

int main()
{
    GL::init();

    std::ifstream ifs("labirinto.txt");
    //std::ifstream ifs("labirinto.txt"); //Carrega um arquivo que não existe
    if(!ifs.is_open())
    {
        std::cout << "Falha ao abrir arquivo" << endl;
        return 1; //encerra pois não conseguiu abrir o arquivo
    }
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                         (std::istreambuf_iterator<char>()    ) );

    // Carga do labirinto
    Labirinto* lab = new LabirintoTeste();
    lab->loadMaze(content);

    Point posIni = lab->getIniPos();
    cout << "Pos ini: " << posIni.getX() << " , " << posIni.getY() << endl;

    RoboB9* robo = new RoboB9(posIni, lab, 200); // 200 passos no maximo
    RoboC3PO* c3po = new RoboC3PO(posIni, lab, 100);
    RoboR2D2* r2d2 = new RoboR2D2(posIni, lab, 300);

    GL::setLabirintoRobo(lab, r2d2);
    // Inicializa janela grafica e inicia programa
    GL::loop();

    return 0;
}


