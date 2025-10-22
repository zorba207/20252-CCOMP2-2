#include <iostream>

using namespace std;

/**
* OPERADOR new
*    sirve para reservar memoria para una variable/objeto
* OPERADOR delete
*   sirve para liberar la memoria de una variable/objeto
*/
int* fun(){
    int *ptr = new int;
    *ptr = 10;
    return ptr;
    //int x = 10;
    //return &x;
}
int main()
{
    int *ptr = fun();
    cout << *ptr << endl;  //en el caso de funciones, no funcionara la direccion de memoria

    /** int* ptr;
    if(true){
        int x = 10;
        ptr = &x;    //peligroso por el scope de x
    }
    cout << *ptr << endl;
    //cout << x << endl;  fuera del if no fue declarado x */




    return 0;
}
