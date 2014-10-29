#include <string>

using namespace std;

#pragma once

class Relatavel
{
public:
    virtual int nroLinhas() = 0;
    virtual string cabecalho() = 0;
    virtual string rodape() = 0;
    virtual string proxLinha() = 0;
};

