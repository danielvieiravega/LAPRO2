#ifndef TERMO_H
#define TERMO_H
#include <string>
using namespace std;
class Termo
{
    public:
        Termo(float coef, float expo);
        float getCoef();
        float getExp();
        float calculaTermo(float x);
        string toString();

    private:
        float coef;
        float expo;
};

#endif // TERMO_H
