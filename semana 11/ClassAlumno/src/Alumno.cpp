#include "Alumno.h"
#include <iostream>
using namespace std;

Alumno::Alumno(int _edad, char*_nombre)
{
    edad = _edad;
    nombre = _nombre;
}

Alumno::~Alumno()
{
    cout << "Llamando al destructor" << endl;
}

void Alumno::print() const
{

    cout << "Nombre: "<<nombre<<endl;
    cout << "Edad: "<<edad<<endl;
}
