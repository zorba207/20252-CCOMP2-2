#include <iostream>

using namespace std;

int main()
{
    /**
    *Implemente un programa que solicite un numero por teclado
    * e imprima los numeros primos menores que dicho numero
    */


    int n{0};
    int i{1};
    int d{0};
    cin >> n;
    int a{n-1};


    for(a ; a>0 ; a=a-1){
        for (i ; i <=n ; i++){
           if (a%i==0){
                d++;
            }
        }
        if (d == 2){
            cout << a << endl;   //hay otra solucion (foto) jorge
            d = 0;
            i = 1;
        }
        else{
            d = 0;
            i = 1;
        }
    }


    /**while ( a > 0){   // while que pasa por cada numero menor que n, y que imprime los numeros primos
        while ( i <= n){   // while que verifica si son numeros primos
            if (a%i==0){  //otra solucion (foto) jorge
                d++;
            }
            i++;
        }
        if (d == 2){
            cout << a << endl;   //hay otra solucion (foto) jorge
            a = a -1;
            d = 0;
            i = 1;
        }
        else{
            a = a-1;
            d = 0;
            i = 1;
        }
    }*/

    return 0;
}
