#include <iostream>

using namespace std;

int main()
{
    string cad = "Ciencia de la computacion";
     //"" -> para cadenas
     //'' -> para caracteres
    /**
    * caracter de fin de cadena -> '\0'
    */

    int i = 0, contador{0};
    /**while (cad.at(i) == 'i'){
        i++;
    }
    */
    for (i ; i < cad.length(); i++){  //.at(indice)-> te permite acceder al caracer de laposicion del indice
        if (cad.at(i)=='i')           // .length() -> muestra la cantidad de caracteres (incluye los espacios en blanco)
            contador++;
    }

    cout << i << endl;
    cout << cad.at(5)<< endl; // imprime la letra de indice 5 (cuenta los espacios)
    cout << contador << endl;
     //contar la cantidad de cierto caracter !TAREA¡
    return 0;
}



