#ifndef VECTORGEOMETRICO_H
#define VECTORGEOMETRICO_H

#include "Punto.h"
#include <cmath>
 //iostrream ya esta en el h de punto

/**las librerias y clases necesarias,solo se invoncan una vez
en el cpp o h (pueden ser en ambas) */

class VectorGeometrico
{
    public:
        VectorGeometrico(Punto p1,Punto p2);

        void print() const;

        float modulo() const;



    private:
        Punto ini;
        Punto fin;
};

#endif // VECTORGEOMETRICO_H
