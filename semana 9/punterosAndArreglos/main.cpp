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

    cout << arr << endl;  // direccion de memoria del primer elemento del array
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    int *ptr = arr;
    /**ptr = &arr[0];
    ptr = arr;  //lo mismo
    */
    cout << *ptr << endl; //1     //A una direccionde memoria si le sumas 1, suma una unidad del tipo que es el puntero, ejm. +1 = 4 bytes.
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

    //recorrer array (ascendente)
    int* ptr2 = arr;
    for (int i = 0; i < 5; i++, ptr2++){
        cout << *ptr2 << " ";
    }
    cout <<endl;

    cout << *(arr+0) << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;

    //recorrer array (descendente)
    int* ptr3 = arr+4;
    for (int i = 0; i < 5;i++, ptr3--){
        cout << *ptr3 << " ";
    }
    cout<<endl;

    //recorrer (creciente) array con while
    cout << "Usando While" << endl;
    int* ptr4 = arr;
    /**int i =0;
    while(i<5){
        cout << *ptr4 << " ";  //mi solucion
        ptr4++;
        i++;
    }
    cout <<endl;*/

    while(ptr4 < (arr+5)){
        cout << *ptr4 << " ";   //solucion del profesor
        ptr4++;
    }
    cout<<endl;

    //recorrer (descendente) array con While
    int* ptr5=arr+4;
    /**int j=0;
    while(j<5){
        cout << *ptr5 << " ";
        j++;                       //mi solucion
        ptr5--;
    }
    cout<<endl;*/

    while (ptr5 >= arr){
        cout << *ptr5 << " ";   //solucion del profesor
        ptr5--;
    }
    cout<<endl;




    return 0;
}
