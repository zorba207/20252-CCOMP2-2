#include <iostream>

using namespace std;

int main()
{
    /**
    * Implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un "numero primo"
    */
    int num{0};
    cout << "Ingresa un numero: "<< endl;
    cin >> num;

    int i{1};
    int respuesta {0};
    while (i <= num){
        if (num % i == 0) && ( i == 1 || i == num){  // ver respuesta (foto)
            respuesta = num
        }
    }

    /**
    *Implemente un programa que solicite un numero por teclado
    * e imprima los numeros primos menores que dicho numero
    */

    int n{0},i{1},d{0},a{n-1};
    cin >> n;
    while ( a >= 0){
        while ( i <= n){
            if (n%i==0){
                d++;
            }
            i++;
        }
        if (d == 2){
            cout << a << endl;
            a = a -1;
        }
        else{
            a = a-1;
        }

    }

    return 0;
}
