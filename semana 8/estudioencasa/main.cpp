#include <iostream>

using namespace std;

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

    printArr(arr,5);
    cout<<endl;
    invertir(arr,5);
    printArr(arr,5);
    cout<<endl;
    invertirR(arr,5);
    printArr(arr,5);
    return 0;
}
