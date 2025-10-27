#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>  //no olvidarse de las librerias que se van a usar

//solo se ponene los nombres de las fgunciones (y tipos) y propiedades

class Punto
{
    public:
        Punto();

        Punto(int _x, int _y);

        int getX() const;
        int getY() const;

        void print() const;
        void modificar(int _x, int _y);


    private:
        int x;
        int y;
};

#endif // PUNTO_H
