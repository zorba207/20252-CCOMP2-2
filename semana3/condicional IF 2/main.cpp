#include <iostream>

using namespace std;

int main()
{
    char val;
    cout << "Ingrese un caracter porfavor: ";
    cin >> val;// para pedir datos al usuario (entrada)

    cout << "el caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);

    cout << "el valor numerico es: " << num << endl;

    /**
    * EScribir un programa que indique si el valor ingresado es una LETRA MAYUSCULA
    */

    if (num >= 65 && num <= 90){
        cout << "El caracter que ha ingresado es una LETRA MAYUSCULA" << endl;
    }
    else {
        cout << "El caracter que ha ingresado no es una  LETRA MAYUSCULA" << endl;
    }

    /**
    * Escribir un programa que indique si el valor ingresado es una LETRA MAYUSCULA o una LETRA MINUSCULA
    */

    if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122)){
        cout << "Es una letra" << endl;
    }
    else {
        cout << "NO ES una letra" << endl;
    }

    /**
    * Escribir un programa que indique si el valor ingresado es un NUMERO
    */

    if (num >= 48 && num <= 57){
        cout << "Es una letra" << endl;
    }
    else {
        cout << "NO ES NUMERO!!! :c" << endl;
    }


    return 0;

}
