#include <iostream>

using namespace std;

int main()
{
    /**
    * BUCLE WHILE
    *   while (CONDICION)  {
            INSTRUCCIONES 1
            INSTRUCCIONES 2
            ...
            INSTRUCCIONES N
    *    }
    */

    // imprimir del 1 al 9
    int i{1};
    while (i < 10){
        cout << i << endl;
        i = i + 1;
    }

    // imprimir del 9 al 1
    i = 9;
    while (i >= 1){
        cout << i << endl;
        i = i - 1;
    }

    // imprimir multiplos de 3 menores a 100
    cout << "multiplos de 3, menores que 100" << endl;
    i = 0;
    while (i <= 100){
        if ( i%3==0 ){
            cout << i << endl;
            i = i + 1;
        }
        else {
            i = i + 1;
        }
    }
    return 0;
}
