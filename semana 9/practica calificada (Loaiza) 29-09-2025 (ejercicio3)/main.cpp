#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printmatriz(int a[][10], int tam){  //imprime la matriz
    for  (int i=0;i<tam;i++){
        cout<<"[ ";
        for (int j=0;j<tam;j++){
            cout <<a[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
}

void bubbleSortDesc(int arr[], int n) {  // Ordena arrays de mayor a menor
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Función para detectar si un número es primo
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i=2; i*i<=num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
    //ejercicio 3
    int matriz[10][10];
    srand(time(0));  //semilla para el rand

    // Rellenar la matriz
    for  (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            matriz[i][j]=rand()%101;
        }
    }
    printmatriz(matriz,10);
    cout<<endl;

    int primos[100];
    int noprimos[100];
    int nroprimos=0;
    int nronoprimos=0;

    // Clasificar los números
    for  (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            int valor = matriz[i][j];
            if (esPrimo(valor)){
                primos[nroprimos++]=valor;
            } else {
                noprimos[nronoprimos++]=valor;
            }
        }
    }

    // Ordenar de mayor a menor cada grupo
    bubbleSortDesc(primos, nroprimos);
    bubbleSortDesc(noprimos, nronoprimos);

    // Rellenar la matriz nueva, primero los primos, luego los no primos
    int matriznueva[10][10];
    int idx = 0;
    for  (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (idx < nroprimos) {
                matriznueva[i][j] = primos[idx];
                idx++;
            } else {
                matriznueva[i][j] = noprimos[idx-nroprimos];
                idx++;
            }
        }
    }
    cout << "la matriz nueva y ordenada es: "<<endl;
    printmatriz(matriznueva,10);

    return 0;
}
