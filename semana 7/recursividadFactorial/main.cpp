#include <iostream>
#include <cmath>
using namespace std;
/**
*Recursividad: Cuando una funcion se llama a si misma
*
*  n! = n * (n-1)!
*  5! = 5 * (4)!
*            4 * (3)!
*                 3 * (2)!
*/

long long factorial(long n){
    /**
    * Primero se define el CASO BASE
    * posteriormnente, se define el PASO RECURSIVO
    */
    if (n==1){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

/**
* Fibonacci
* fib(n) = fib(n-1) + fib(n-2)
*       fib(0) = 1
*       fib(1) = 1

*   1 1 2 3 5 8 13 ...
*/


long long fibonacci(long n){
    if (n == 1 || n == 0){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
/**
* Pide un numero n entero positivo y
* de forma recursiva cuantos los digitos que tiene el numero
*/
long long contarDigitos(long n){
    if ( n < 10){
        return 1;
    }
    else{
        return 1 + contarDigitos(n/10);
    }
}
/**
* Dado un numero, dar a conocer si es capicua o no
*/

bool capicua(long n){
    long d = contarDigitos(n);
    long ini{n/static_cast<int>(pow(10, d-1))},fin{n%10};
    if (d==1){
        return true;
    }
    else{
         if(ini == fin){
                return true * capicua(n % static_cast<int>(pow(10, d-1))/10);    //!!TAREA¡¡
        }
        else{
            return false;
    }
}
}




int main(){

    int n {44};
    cout << factorial(5) << endl;
    cout << fibonacci(8) << endl;
    cout << contarDigitos(136) << endl;
    cout << n % static_cast<int>(pow(10, contarDigitos(n)-1))/10 << endl;
    if (capicua(44)== true){
        cout << "es capicua" << endl;
    }
    else{
        cout << "no es capicua"<< endl;
    }
    return 0;
}
