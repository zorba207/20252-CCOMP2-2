#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    char matriz[8][8];
    srand(time(0));  //semilla para el rand

    // Rellenar la matriz con letras y números aleatorios
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            int tipo = rand()%3;
            char c;
            if (tipo == 0) c = 'a' + rand()%26;          // minúscula
            else if (tipo == 1) c = 'A' + rand()%26;     // mayúscula
            else c = '0' + rand()%10;                    // número
            matriz[i][j] = c;
        }
    }

    // Imprimir matriz original
    cout << "Matriz original:" << endl;
    for (int i=0; i<8; i++){
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "]" << endl;
    }
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

    // Ordenar minúsculas (a-z)
    for (int i=0; i<nmin-1; i++){
        for (int j=0; j<nmin-i-1; j++){
            if (minusculas[j] > minusculas[j+1]){
                char temp = minusculas[j];
                minusculas[j]=minusculas[j+1];
                minusculas[j+1]=temp;
            }
        }
    }

    // Ordenar mayúsculas (Z-A)
    for (int i=0; i<nmay-1; i++){
        for (int j=0; j<nmay-i-1; j++){
            if (mayusculas[j] < mayusculas[j+1]){
                char temp = mayusculas[j];
                mayusculas[j]=mayusculas[j+1];
                mayusculas[j+1]=temp;
            }
        }
    }

    // Ordenar números (0-9)
    for (int i=0; i<nnum-1; i++){
        for (int j=0; j<nnum-i-1; j++){
            if (numeros[j] > numeros[j+1]){
                char temp = numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=temp;
            }
        }
    }

    // Construir matriz ordenada
    char matrizordenada[8][8];
    int idx = 0;
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if (idx < nmin){
                matrizordenada[i][j] = minusculas[idx];
            } else if (idx < nmin + nmay){
                matrizordenada[i][j] = mayusculas[idx-nmin];
            } else {
                matrizordenada[i][j] = numeros[idx-nmin-nmay];
            }
            idx++;
        }
    }

    // Imprimir matriz ordenada
    cout << "Matriz ordenada (minusculas a-z, mayusculas Z-A, numeros 0-9):" << endl;
    for (int i=0; i<8; i++){
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << matrizordenada[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
