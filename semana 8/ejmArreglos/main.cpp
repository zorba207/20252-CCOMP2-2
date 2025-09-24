#include <iostream>

using namespace std;

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void printArr(int arr[], int tam){
    cout <<"[ ";
    for(int i=0 ; i<tam; i++)
        cout << arr[i]<<" ";
    cout <<"]";
}
void invertir(int arr[], int tam){
    /**int a {tam-1};
    for(int i=0 ; i<tam; i++){
        arr[i]=arr[a];            //intento de solucion mio
        a=a-1;
    }*/
    for(int i=0 , j = tam-1; i<j; i++, j--){
        int tmp = arr[i];         //solucion del profesor
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void invertirR (int arr[], int tam, int i=0){   //i tendra valor por defecto, no es necesario ponerlo al invocarlo
    /**if (tam == 1){
        int j = tam-1;
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        return 0;
    }
    else{                     //mi INTENTO de solucion (con int)
        int j = tam-1;
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        return invertirR(arr, tam-1);
    }*/

    if(i > tam){
        return;
    }
    else{
        int tmp = arr[i];
        arr[i] = arr[tam-1];    //solucion del profesor
        arr[tam-1] = tmp;
        invertirR(arr, tam-1, i+1);
    }
}

//revisar fotos de intercambio utilizando la funcion intercambio dentro de otras funciones

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "Hello world!" << endl;
    printArr(arr,5);
    invertir(arr,5);
    cout<<endl;
    printArr(arr,5);
    invertirR(arr,5);
    cout<<endl;
    printArr(arr,5);
    return 0;
}
