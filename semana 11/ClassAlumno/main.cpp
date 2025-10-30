#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    Alumno alumno01(18,"Juan");
    cout << "Datos del estuidante01: "<<endl;
    alumno01.print();

    Alumno*alumno02 = new Alumno(19,"Jose");
    alumno02->print();
    delete alumno02;
    return 0;
}
