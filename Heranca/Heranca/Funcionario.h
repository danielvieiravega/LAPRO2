#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;

class Funcionario {
    private:
        string nome;
        int codigo;
        float salarioBase;

    public:

    Funcionario(int codigo, string nome, float salarioBase);
    string getNome();
    int getCodigo();
    float getSalarioBase();
    void setSalarioBase(float salarioBase);
    float getSalarioLiquido();
    string toString();
};
#endif