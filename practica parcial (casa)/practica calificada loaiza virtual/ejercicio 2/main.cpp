#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printmatriz(char matriz[8][8]){
    for (int i= 0; i < 8; i++){
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << matriz[i][j] << " ";
        }
        cout << " ]";
        cout<<endl;
    }
    cout << endl;
}


void bubblesortAsc(char a[],int tam){
    for (int i =0; i<tam; i++){
        for (int j = 0; j<tam-1-i;j++){
            if (a[j]>a[j+1]){
                int tmp= a[j];
                a[j] = a[j+1];
                a[j+1]=tmp;
            }
        }
    }

}

void bubblesortDesc(char a[], int tam){
    for (int i =0; i<tam; i++){
        for (int j = 0; j<tam-1-i;j++){
            if (a[j]<a[j+1]){
                int tmp= a[j];
                a[j] = a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
int main()
{
    char matriz[8][8];
    srand(time(0));  //semilla generadora

    for (int i=0; i<8 ;i++){    //rellenar lamatriz con elementos aleatorios
        for (int j=0; j<8; j++){
            int tipo=rand()%3;
            if (tipo == 0){
                matriz[i][j]= 'A' + rand()%26;
            }
            else if (tipo == 1){
                matriz[i][j]= 'a' + rand()%26;
            }
            else{
                matriz[i][j]= '0' + rand()%10;
            }
        }
    }

    printmatriz(matriz);

    char mayusculas[64], minusculas[64], numeros[64];    //separa las mayusculas, minusculas y numeros
    int nmayus=0, nminusc=0, nnum=0;
    for (int i=0; i<8 ;i++){
        for (int j=0; j<8; j++){
            if ('a'<= matriz[i][j] <= 'z'){
                minusculas[nminusc++]=matriz[i][j];
            }
            else if ('A'<= matriz[i][j] <= 'Z'){
                mayusculas[nmayus++]=matriz[i][j];
            }
            else{
                numeros[nnum++]=matriz[i][j];
            }
        }
    }

    bubblesortAsc(minusculas,nminusc);

    bubblesortAsc(numeros,nnum);

    bubblesortDesc(mayusculas,nmayus);

    int a=0,b=0,c=0;
    for (int i=0; i<8 ;i++){    //rellenar la matriz (ordenado)
        for (int j=0; j<8; j++){
            if (nnum != 0){
                matriz[i][j]= numeros[a++];
            }
            else if (nminusc != 0){
                matriz[i][j]= minusculas[b++];
            }
            else{
                matriz[i][j]= numeros[c++];
            }
        }
    }

    cout << "---------Matriz ordenada-------------" << endl;
    cout<<endl;
    printmatriz(matriz);
    cout << endl;
    return 0;
}
