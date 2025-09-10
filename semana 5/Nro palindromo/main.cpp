#include <iostream>
#include <cmath>  //libreira de maematicas
using namespace std;

int main()
{
    /**
    * Escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue si dicho numero es un palindromo
    * Ejm
            13331 -> es palindromo
            2133214 ->no es palindromo
            31311313 -> es palindromo
    */

    /**int num{0};
    cout << "Escribe un numero (3 a 9 digitos): ";
    cin >> num;
    int temp = num;
    int invertido = 0;
    while(temp > 0){
        invertido = (invertido * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == invertido){
        cout << "Es palindromo" << endl;
    }
    else{
        cout << "No es palindromo" << endl;
    }*/


    // Solucion del profesor

    long n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int numC = n;
    int numDigits = 0;
    while (numC > 0){  // halla el numero de cifras
        numC /= 10;
        numDigits++;s
    }
    while (n != 0) {
        int ini = n / pow(10, numDigits-1);  //pow -> potencia  (retorna un decimal)
        int fin = n % 10;
        if (ini != fin ){
            cout << "NO ES PALINDROMO" << endl;
            break;
        }
        n = (n % static_cast<int>(pow(10, numDigits-1)))/10; // convierte la potencia a entero con el static_cast
        numDigits-=2;
        cout << ini << endl;
        cout << fin << endl;
        cout << n << endl;
    }



    // ¡TAREA! usando while y for ( tambien los otros ejercicios)
    return 0;
}
