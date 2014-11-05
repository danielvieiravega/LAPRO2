#include <iostream>
#include "termo.h"

using namespace std;

int main()
{
    Termo t1(2,3);
    cout << t1.toString() << endl;
    float x;
    cout << "X ?";
    cin >> x;
    cout << "valor do termo: " << t1.calculaTermo(x)
         << endl;

    Termo t2(-10,5);
    cout << t2.toString() << endl;
    cout << "valor do termo: " << t2.calculaTermo(x)
         << endl;
}
