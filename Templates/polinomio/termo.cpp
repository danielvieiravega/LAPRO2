#include "termo.h"
#include <sstream>
#include <cmath>

Termo::Termo(float coef, float expo)
{
    this->coef = coef;
    this->expo = expo;
}

float Termo::getCoef()
{
    return coef;
}

float Termo::getExp()
{
    return expo;
}

float Termo::calculaTermo(float x)
{
    return coef*pow(x,expo);
}

string Termo::toString()
{
    ostringstream aux;
    aux << coef << "x" << expo;
    return aux.str();
}
