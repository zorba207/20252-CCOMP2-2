#include <iostream>

using namespace std;

int main()
{
    //esto es un comentario
    int val1 = 20;
    float val2 = 8;
    int suma = val1 + val2;  //28
    int resta = val1 - val2;  //12
    int multi= val1 * val2; //160
    float div = val1 / val2; //2, porque es division entre enteros, convertir una variable a float y a la variable que recibe la division
    cout << "La suma es:" << suma << endl;
    cout << "La resta es:" << resta << endl;
    cout << "La multiplicacion es:" << multi << endl;
    cout << "La division es:" << div << endl;


    return 0;
}
