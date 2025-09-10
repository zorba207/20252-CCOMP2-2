#include <iostream>

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
    int num{0};
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
    }


    // ¡TAREA! usando while y for ( tambien los otros ejercicios)
    return 0;
}
