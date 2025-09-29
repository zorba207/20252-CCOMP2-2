#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printmatriz(char a[][8], int tam){  // Imprime matriz 8x8
    for (int i=0; i<tam; i++){
        cout << "[ ";
        for (int j=0; j<tam; j++){
            cout << a[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

void bubbleSortAsc(char arr[], int n){  // Orden ascendente
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortDesc(char arr[], int n){  // Orden descendente
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] < arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printmatriz1d(char arr[], int tam){
    int idx = 0;
    for (int i=0; i<8; i++){
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << arr[idx++] << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{
    char matriz[8][8];
    srand(time(0));  //semilla para el rand

    // Rellenar la matriz con letras y números aleatorios
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            int tipo = rand()%3;
            char c;
            if (tipo == 0) c = 'a' + rand()%26;
            else if (tipo == 1) c = 'A' + rand()%26;
            else c = '0' + rand()%10;
            matriz[i][j] = c;
        }
    }

    cout << "Matriz original:" << endl;
    printmatriz(matriz,8);
    cout << endl;

    // Separar minúsculas, mayúsculas y números
    char minusculas[64], mayusculas[64], numeros[64];
    int nmin=0, nmay=0, nnum=0;
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            char c = matriz[i][j];
            if (c >= 'a' && c <= 'z'){
                minusculas[nmin]=c; nmin++;
            }
            else if (c >= 'A' && c <= 'Z'){
                mayusculas[nmay]=c; nmay++;
            }
            else if (c >= '0' && c <= '9'){
                numeros[nnum]=c; nnum++;
            }
        }
    }

    bubbleSortAsc(minusculas, nmin);   // a-z
    bubbleSortDesc(mayusculas, nmay); // Z-A
    bubbleSortAsc(numeros, nnum);     // 0-9

    // Crear arreglo final ordenado
    char matrizfinal[64];
    int idx = 0;
    for (int i=0; i<nmin; i++) matrizfinal[idx++] = minusculas[i];
    for (int i=0; i<nmay; i++) matrizfinal[idx++] = mayusculas[i];
    for (int i=0; i<nnum; i++) matrizfinal[idx++] = numeros[i];

    cout << "Matriz ordenada (minusculas a-z, mayusculas Z-A, numeros 0-9):" << endl;
    printmatriz1d(matrizfinal, 64);

    return 0;
}
