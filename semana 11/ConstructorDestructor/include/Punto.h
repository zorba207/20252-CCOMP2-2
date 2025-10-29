#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

class Punto
{
    public:
        Punto();

        Punto (int _x, int _y);
        ~Punto();
        void print() const;

    private:
        int x;
        int y;
};

#endif // PUNTO_H
