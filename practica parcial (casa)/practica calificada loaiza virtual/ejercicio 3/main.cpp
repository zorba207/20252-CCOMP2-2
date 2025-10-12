#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printmatriz(int a[][10]){
    for (int i= 0; i < 10; i++){
        cout << "[ ";
        for (int j=0; j<10; j++){
            cout << a[i][j] << " ";
        }
        cout << " ]";
        cout<<endl;
    }
    cout << endl;
}


bool primo(int a){
    int divisores=0;
    if (a <= 1) return false;
    for (int i=1;i <=a; i++){
        if (a%i==0)
            divisores++;
        else
            continue;
    }
    if (divisores > 2)
        return false;
    else
        return true;
}

void bubblesortDesc (int arr[],int tam){
    for (int i =0; i<tam; i++){
        for (int j = 0; j<tam-1-i;j++){
            if (arr[j]<arr[j+1]){
                int tmp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int matriz[10][10];
    srand(time(0));
    for (int i= 0; i < 10; i++){
        for (int j=0; j<10; j++){
            matriz[i][j]= rand()%101;
        }
    }
    printmatriz(matriz);

    int primos[100];
    int compuestos[100];
    int cantprimos=0;
    int cantcompuestos=0;
    for (int i= 0; i < 10; i++){
        for (int j=0; j<10; j++){
            if (primo(matriz[i][j]) == true){
                primos[cantprimos]= matriz[i][j];
                cantprimos++;
            }
            else{
                compuestos[cantcompuestos] = matriz[i][j];
                cantcompuestos++;
            }
        }
    }

    bubblesortDesc(primos,cantprimos);
    bubblesortDesc(compuestos,cantcompuestos);

    cout<<endl;
    cout << "-----Matriz nueva--------" << endl;

    int matriznueva[10][10];
    int contadorprimos = 0;
    int contadorcompuestos = 0;
    for (int i= 0; i < 10; i++){
        for (int j=0; j<10; j++){
            if (cantprimos != 0){
                matriznueva[i][j]= primos[contadorprimos++];
                cantprimos--;
            }
            else{
                matriznueva[i][j]= compuestos[contadorcompuestos++];
                cantcompuestos--;
            }

        }
    }
    printmatriz(matriznueva);


    return 0;
}
