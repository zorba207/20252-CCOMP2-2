#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

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

    for (int i= 0; i < 8; i++){   //print matriz
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << matriz[i][j] << " ";
        }
        cout << " ]";
        cout<<endl;
    }
    cout << endl;

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

    for (int i =0; i<nminusc; i++){     //ordena ascendentemente
        for (int j = 0; j<nminusc-1-i;j++){
            if (minusculas[j]>minusculas[j+1]){
                int tmp= minusculas[j];
                minusculas[j] = minusculas[j+1];
                minusculas[j+1]=tmp;
            }
        }
    }

    for (int i =0; i<nnum; i++){     //ordena ascendentemente
        for (int j = 0; j<nnum-1-i;j++){
            if (numeros[j]>numeros[j+1]){
                int tmp= numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1]=tmp;
            }
        }
    }

    for (int i =0; i<nmayus; i++){     //ordena descendente
        for (int j = 0; j<nmayus-1-i;j++){
            if (mayusculas[j]<mayusculas[j+1]){
                int tmp= mayusculas[j];
                mayusculas[j] = mayusculas[j+1];
                mayusculas[j+1]=tmp;
            }
        }
    }

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
    for (int i= 0; i < 8; i++){   //print matriz
        cout << "[ ";
        for (int j=0; j<8; j++){
            cout << matriz[i][j] << " ";
        }
        cout << " ]";
        cout<<endl;
    }
    cout << endl;

    return 0;
}
