#include <iostream>

using namespace std;


void printArray(int *arr, int size){
    cout << "[ ";
    for(int i = 0; i < size; i++, arr++){
        cout << *arr << " ";
    }
    cout << "]" << endl;
}

void intercambio(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
* Implemente una funcion para invertir los
* elementos de un arreglo.
*/

void invertirArray(int *ini, int* fin){
    /**for (; *ini != *fin ; ini++, fin--){
        int tmp = *ini;
        *ini= *fin;               //mi solucion
        *fin = tmp;
    }*/

    while(ini<fin){
        intercambio(ini++,fin--);   //solucion del profesor
    }
}

//recursiva
void invertirArrayrecursiva(int *ini,int*fin){
    /**if (*ini == *fin){
        return 0;
    }
    else{                                  //INTENTO de solucion mia
        intercambio(ini,fin);
        return invertirArrayrecursiva(ini++,fin--);
    }*/
    if(ini>=fin){
        return;
    }
    else{                                    //solucion del profesor
        intercambio(ini,fin);
        return invertirArrayrecursiva(++ini,--fin);//cuidado con donde ponesw el ++ y el --
    }
}



int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);  //sizeof() -> te da la cantidad de bytes de una variable o array
    printArray(arr,tam);  //le envias una direccion de memoria con arr
    cout << "---------------------"<< endl;
    int x = 10;
    int y = 20;
    intercambio(&x,&y);
    cout << "x = " << x << endl; // 20
    cout << "y = " << y << endl; //10
    cout << "---------------------" << endl;


    invertirArray(arr,arr+tam-1);
    printArray(arr,tam);
    cout << "---------------------" << endl;

    invertirArrayrecursiva(arr,arr+tam-1);
    printArray(arr,tam);

    return 0;
}
