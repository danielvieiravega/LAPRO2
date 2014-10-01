#include <iostream>

using namespace std;

class Lampada
{
  private:
    bool ligada; // false=desl, true=ligada
    int tensao;
    int potencia;
    void setTensao(int t);
    void setPotencia(int p);

  public:
    Lampada(int tensao, int potencia);
	Lampada();
    void ligar();
    void desligar();
    bool getLigada();
    int getTensao();
    int getPotencia();
};

Lampada::Lampada()
{
	setTensao(127);
	setPotencia(100);
}

Lampada::Lampada(int tensao, int potencia)
{
    ligada = false;
    setTensao(tensao);
    setPotencia(potencia);
}

void Lampada::ligar()
{
    ligada = true;
}

void Lampada::desligar()
{
    ligada = false;
}

bool Lampada::getLigada()
{
    return ligada;
}

int Lampada::getTensao()
{
    return tensao;
}

int Lampada::getPotencia()
{
    return potencia;
}

void Lampada::setTensao(int t)
{
    if(t==110 || t==220)
        tensao = t;
}

void Lampada::setPotencia(int p)
{
    if(p >= 10 && p <= 100)
        potencia = p;
}

int main()
{
    Lampada lamp1(110,60), lamp2(220,100);
    cout << "lamp1: " << lamp1.getLigada()
         << ", " << lamp1.getTensao()
         << ", " << lamp1.getPotencia() << endl;
//    lamp1.setTensao(220);
//    lamp1.setPotencia(60);
    lamp1.ligar();
    cout << "lamp1: " << lamp1.getLigada()
         << ", " << lamp1.getTensao()
         << ", " << lamp1.getPotencia() << endl;
//    lamp2.setTensao(220);
//    lamp2.setPotencia(100);
//    lamp2.setPotencia(-2); // nao vai alterar
    lamp2.ligar();
    cout << "lamp2: " << lamp2.getLigada()
         << ", " << lamp2.getTensao()
         << ", " << lamp2.getPotencia() << endl;
    lamp2.desligar();
    cout << "lamp2: " << lamp2.getLigada()
         << ", " << lamp2.getTensao()
         << ", " << lamp2.getPotencia() << endl;
    //lamp1.ligada = true;
    //lamp1.tensao = 110;
    //lamp1.potencia = 60;

	Lampada l[10];


    return 0;
}
