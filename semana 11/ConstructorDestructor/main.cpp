#include <iostream>
#include "Punto.h"
using namespace std;


/**
* CONSTRUCTOR (tiene el mismo nombre que la clase)
*    Es el metodo que se invoca cuando se crea una instancia.
*    Es el metodo que se invoca cuando se asigna memoria a una instancia.
*
* DESTRUCTOR (tiene el mismo nombre que la clase, pero le antecede ~)
*    Es el metodo que se invoca cuando se libera la memoria de
*    una instancia.
*    Solo puede haber uno por clase.
*/

int main()
{
    Punto p1;
    p1.print();

    Punto* p2 = new Punto;
    cout <<endl;
    p2 ->print();    //en puntero se usa una  flecha, enves de un (.)
    (*p2).print();   //-> : un puntero a un objeto
    cout <<endl;

    Punto p3(4,5);
    cout << endl;
    p3.print();
    cout<<endl;

    Punto *p4 = new Punto(2,7);
    cout << endl;
    p4 ->print();
    (*p4).print();
    cout<<endl;


    delete p2;  //libera la memoria del puntero (dinamica)
    delete p4;  //no elimina al mismo puntero, llama al destructor
    return 0;
}
