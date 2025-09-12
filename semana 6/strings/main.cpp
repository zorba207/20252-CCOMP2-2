#include <iostream>

using namespace std;

int main()
{
    string cad = "Ciencia de la computacion";
    // "" -> para cadenas
    // '' -> para caracteres
    /**
    * caracter de fin de cadena -> '\0'
    */

    int i = 0;
    while (cad.at(i) == 'i'){
        i++;
    }

    cout << i << endl;
    cout << cad.at(5)<< endl; // imprime la letra de indice 5 (cuenta los espacios)
    // contar la cantidad de cierto caracter !TAREA¡
    return 0;
}
