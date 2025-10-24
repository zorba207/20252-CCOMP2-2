#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int sumArray(int *ptr, int tam){
    /**int suma = 0;
    for (int i = 0; i < tam; i++){   //solucon mia
        suma +=ptr[i];
    }
    return suma;*/

    int sum = 0;
    for (int i = 0; i < tam; sum+=ptr[i++]);      //solucion del profer
    return sum;
}

int sumArrayRecursivo(int *ptr,int tam){
    /**if (tam == 1){
        return *ptr;                                    //solucion mia
    }
    else{
        return ptr[tam-1]+ sumArrayRecursivo(ptr,tam-1);
    }*/

    if (tam == 0){
        return 0;
    }
    return *ptr + sumArrayRecursivo(++ptr, --tam);   //solucion del profer
}

void intercambio (int &a, int &b){   //Si no pones los & o punteros solo intercambia en la funcion,
    int temp = a;                   //no en la lista o lo que esta fuera de la funcion
    a=b;
    b= temp;
}

/**
* Implemetnar un algoritmo de ordenamiento Burbujita
*/

void Bubblesort(int *ptr,int tam){
    /**for (int i=0; i< tam-1; i++){
        for (int j =0; j<tam-1-i; j++){
            if (ptr[j] > ptr[j+1]){
                int temp = ptr [j];     //solucion mia
                ptr[j]=ptr[j+1];
                ptr[j+1]= temp;
            }
        }
    }*/

    for (int i=0; i< tam-1; i++){
        for (int j =0; j<tam-1-i; j++){
            if (ptr[j] > ptr[j+1]){
                intercambio(ptr[j],ptr[j+1]);
            }
        }
    }

}


/**
* Insertionsort
* Mergesort        // !TAREA¡
* Quicksort
*/




int main()
{
    int tam = 5;
    int *ptr = new int[tam];
    srand(time(0));
    for (int i = 0; i < tam; i++){
        ptr[i] = rand()%5;
    }
    for (int i = 0; i < tam; i++){
        cout << ptr[i] << " ";
    }

    cout << endl;
    cout << sumArray(ptr , tam) << endl;
    cout << sumArrayRecursivo(ptr , tam) << endl;

    Bubblesort(ptr, tam);
    for (int i =0; i< tam ; i++)
        cout << ptr [i] << " ";

    delete[] ptr;

    return 0;
}
