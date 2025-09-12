#include <iostream>

using namespace std;

bool esPrimo(int n){  // dice si es primo o ono (booleaano)
    bool primo = 0;
    int i = 1;
    int d = 0;
    while ( i <= n){
            if (n%i==0){
                d++;
            }
            i++;
    if (d == 2){
        primo = true;
    }
    else{
        primo = false;
    }
    }
    return primo;
}

void imprimirNPrimos(int n){  // imprime los numero primos menores que el numero dado
    int i = 2;
    while (i < n){
        if (esPrimo(i)){
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
}

int NumeroDIgitos(int n){  //da el numero de digitos
   int d = 0;
   int i = n;
   while (i > 0){
        d++;
        i = i / 10;
   }
   return d;
}

int main()
{
    /**
    * Implemente una funcion que determine si un numero es primo
    * no lo es
    */

    int n {0};
    cout << "Ingresa un numero: " << endl;                 // La solucion del profesor esta en una foto
    cin >> n;

    if (esPrimo(n)==true){
        cout <<  "es Primo" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }

    //segunda funcion
    imprimirNPrimos(n);


    /**
    * Implemente una funcion que reciba un entero y retorne el numero de
    * digitos que tiene dicho entero.
    */

    cout << "el numero de digitos es: "<< NumeroDIgitos(n);

    return 0;
}
