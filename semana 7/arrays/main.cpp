#include <iostream>

using namespace std;

/**
* Implemente una funcion que reciba un arreglo de enteros
* y su tamaño y retorne la suma dee los elemons del arreglo
*/
long sumar (int arr[], int tam){  // no hay que poner tamaño del array en los corchetes
    int sum = 0;
    for (int i = 0; i < tam; i++)
        sum = sum + arr[i];

    //for (int i = 0; i < tam; sum += arr[i++])   //lo mismo que el anterior for
        //;
    return sum;
}

//funcion de suma recursiva de una lista
long sumarR(int arr[], int tam){
    /**if (tam == 1){
        return arr[tam-1];
    }
    else{                                         //mi solucion
        return arr[tam-1] + sumarR(arr, tam-1);
    }*/

    if (tam == 0){
        return 0;           //solucion del profesor
    }
    else{
        return arr[tam-1] + sumarR(arr, tam-1);
    }
}

int main()
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    cout << "la suma es: "<< sumar(arr,5) << endl;  //solo va el nombre del arreglo
    cout << sumarR(arr,5)<<endl;
    return 0;
}
