#include <iostream>

using namespace std;

void printmatriz(char**a, int tam){    //la matriz dinamica solo se declara como un puntero
    for (int i=0; i<tam; i++){
        cout << "[ ";
        for (int j=0; j<tam; j++){
            cout << a[i][j]<< " ";
        }
        cout << "]"<<endl;
    }
}

int main()
{

    //codigo el rombo (solo funciona con matrices de 5x5 y 3x3)
    int tam=0;
    cin >> tam;

    char**matriz= nullptr;
    matriz= new char*[tam];
    for (int i=0; i<tam; i++){  //crea la matriz
        matriz[i]= new char[tam];
    }

    for (int i=0; i<tam;i++){
        for (int j=0; j<tam; j++){
            if (i==tam/2 && j==tam/2){
                matriz[i][j]='@';
                matriz[i-1][j]='@';
                matriz[i+1][j]='@';   //rellena la matriz con los @
                matriz[i][j-1]='@';
                matriz[i][j+1]='@';
            }
            else{
                if (matriz[i][j]=='@'){
                    continue;
                }
                else{
                    matriz[i][j]=' ';
                }
            }
        }
    }


    int a=0,j=tam/2;
    for (int i=0; i<(tam/2)+1;i++){
        matriz[i][j+a]='*';         //rellena la mitad superior de asteriscos
        matriz[i][j-a]='*';
        a++;
    }

    a=0;
    for (int i=tam-1; i!=tam/2;i--){
        matriz[i][j+a]='*';    //rellena la mitad inferior de asteriscos
        matriz[i][j-a]='*';
        a++;
    }


    printmatriz(matriz, tam);
    return 0;
}
