#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int longitud(char cad[]){
    int contador{0};
    for (int i = 0; cad[i] != '\0';i++){
        contador++;
    }
    return contador;
}

void printArr(int arr[], int tam){
    cout <<"[ ";
    for(int i=0 ; i<tam; i++)
        cout << arr[i]<<" ";
    cout <<"]";
}

void invertir (int arr[], int tam){
    for (int i = 0, j = tam-1; i <= j; i++,j--){
        int tmp = arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
}

void invertirR (int arr[], int tam, int i =0){
    if (i > tam)
        return;
    else{
        int tmp = arr[i];
        arr[i]=arr[tam-1];
        arr[tam-1]=tmp;
        return invertirR(arr, tam-1, i+1);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    char cad1[] = {'c','i','e','n','c','i','a','\0'};
    char cad2[] = "ciencia";

    printArr(arr,5);
    cout<<endl;
    invertir(arr,5);
    printArr(arr,5);
    cout<<endl;
    invertirR(arr,5);
    printArr(arr,5);
    cout<<endl;
    cout << longitud(cad1) << endl;
    cout << longitud(cad2) << endl;

    char matriz[4][4];
    char num[4];
    char mayus[6];
    char minusc[6];
    srand(time({}));
    int letrasM{rand()%26};
    int letrasm{rand()%26};
    int numeros{rand()%10};
    for (int i = 0; i < 6; i++){
        mayus[i]= 65 + letrasM;
        minusc[i]= 97 + letrasm;
    }
    for (int i = 0; i < 4; i++){
        num[i]= 48 + numeros;
    }

    int a{0};
    int b{0};
    int c{0};

    for (int i=0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            int k = rand()%3;
            if (k==0 && a < 4){
                matriz[i][j]= mayus[j];
                a++;
            }
            else if(k == 1 && b<4){
                matriz[i][j]= minusc[j];
                b++;
            }
            else if(k==2 && c<6){
                matriz[i][j]= num[j];
                c++;
            }
            else{
                continue;
            }
        }
    }








    return 0;
}
