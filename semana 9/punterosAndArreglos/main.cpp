#include <iostream>

using namespace std;

/**
* El nombre de un arreglo es un puntero al primer elemento del arreglo
*
* ARITMETICA DE PUNTEROS
* ======================
* A los punteros se les puede incrementar/decrementar usando los operadores ++/--, respectivamente
*/
int main()
{
    int arr[]= {1,2,3,4,5};

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    int *ptr = arr;
    /**ptr = &arr[0];
    ptr = arr;  //lo mismo
    */
    cout << *ptr << endl; //1
    ptr++;
    cout << *ptr << endl; //2
    ptr++;
    cout << *ptr << endl; //3
    ptr++;
    cout << *ptr << endl; //4
    ptr++;
    cout << *ptr << endl; //5
    // Por lo tanto, se puede recorrer los elementos de un
    // arreglo usando un puntero.

    int* ptr2 = arr;
    for (int i = 0; i < 5; i++, ptr2++){
        cout << *ptr2 << " ";
    }
    cout <<endl;;
    return 0;
}
