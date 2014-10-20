#include <sstream>
#include "funcionario.h"
Funcionario::Funcionario(int codigo, string nome, float salarioBase) {
    this->codigo = codigo; this->nome = nome; this->salarioBase = salarioBase;
}

// ... gets ...
void Funcionario::setSalarioBase(float salarioBase) { this->salarioBase = salarioBase; }

float Funcionario::getSalarioLiquido() {
    float inss = salarioBase * 0.1;
    float ir = 0.0;
    if (salarioBase > 2000.0) { ir = (salarioBase-2000.0)*0.12;  }
    return salarioBase - inss - ir;
}

string Funcionario::toString() {
    ostringstream aux;
    aux << "Codigo: " << codigo << " - Nome: " << nome << " - Sal. base: " << salarioBase
        << " - Sal. liquido: " << getSalarioLiquido();
    return aux.str();
}