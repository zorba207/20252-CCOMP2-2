#include "Punto.h"
using namespace std;
Punto::Punto()
{
    x = 0;
    y = 0;
    cout << "Llamando al constructor" << endl;
}

Punto::Punto(int _x, int _y){
    x = _x;
    y = _y;
    cout << "Llamando al constructor con args" << endl;
}

Punto::~Punto()
{
    cout << "Llamando al destructor" << endl;
}

void Punto::print () const{
    cout << "( " << x << "," << y << " )"<<endl;
}
