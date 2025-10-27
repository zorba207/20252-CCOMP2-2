#include "VectorGeometrico.h"


using namespace std;

VectorGeometrico::VectorGeometrico(Punto p1, Punto p2)
{
    ini = p1;
    fin = p2;
}


void VectorGeometrico::print() const{
    ini.print();
    cout << " -> " ;
    fin.print();
}

float VectorGeometrico::modulo() const{
    return sqrt(pow(fin.getX()-ini.getX(),2) + pow(fin.getY()-ini.getY(),2));
}
