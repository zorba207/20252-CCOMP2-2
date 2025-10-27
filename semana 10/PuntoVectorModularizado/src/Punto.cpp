#include "Punto.h"

using namespace std;

//se pone el codigo de las funciones y construcores , etc

Punto::Punto(){       //primero va el nombre del .h,
     x = 0;
     y = 0;            //luego la de la funcion
}

Punto::Punto(int _x,int _y)
{
    x = _x;
    y = _y;
}

int Punto::getX() const {   //primero va el tipo de funcion
    return x;
}

int Punto::getY() const {
    return y;
}

void Punto::print() const{
    cout << "("  << x <<", " << y << ")" ;
}

void Punto::modificar(int _x, int _y){
    x = _x;
    y = _y;
}
