#include "LabirintoTeste.h"
#include "RoboB9.h"
#include "GL.h"

using namespace std;

int main()
{
    GL::init();

    std::ifstream ifs("labirinto.txt");
    //std::ifstream ifs("labirinto.txt"); //Carrega um arquivo que n�o existe
    if(!ifs.is_open())
    {std::cout << "Falha ao abrir arquivo" << endl;
        return 1; //encerra pois n�o conseguiu abrir o arquivo
    }std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );


    // Carga do labirinto
    Labirinto* lab = new LabirintoTeste();
    lab->loadMaze(content);



    Point posIni = lab->getIniPos();
    cout << "Pos ini: " << posIni.getX() << " , " << posIni.getY() << endl;
    RoboB9* robo = new RoboB9(posIni, lab, 200); // 200 passos no maximo

    GL::setLabirintoRobo(lab, robo);
	// Inicializa janela grafica e inicia programa
	GL::loop();
}


