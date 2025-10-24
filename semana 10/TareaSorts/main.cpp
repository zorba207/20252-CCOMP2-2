#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/**
* Insertionsort
* Mergesort        // !TAREA¡
* Quicksort
*/

void printarray (int *a,int tam){
    cout << "[ ";
    for (int i=0; i<tam; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl;
    cout<<endl;
}

void BubbleSort (int*a, int tam){
    for (int i = 0; i<tam-1;i++){
        for (int j=0; j<tam-1-i; j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void InsertionSort (int*a,int tam){
    for (int i =1; i<tam;i++){
        int j = i;
        while ( j>0 && a[j-1]>a[j]){
            int temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}


void MergeSort (int*a,int tam,int inicio, int fin){
    int longi = (fin - inicio)+1;
    if (longi == 1){
        return;
    }
    else{
        int left[longi/2];
        for (int i=0; i<longi/2;i++){
            left[i]=a[i];
        }
        int right[longi/2];
        for (int i=(longi/2)+1,j=0; i<longi-1;i++){
            right[i]=a[i];
        }
        MergeSort(left,)
    }
}


int main()
{
    int *a = nullptr;
    a = new int[4];
    srand(time(0));
    for (int i = 0; i<4 ;i++){
        a[i] = rand()%50;
    }

    int *b = new int[6];
    for (int i = 0; i<6 ;i++){
        b[i] = rand()%50;
    }
    cout << "BubbleSort" << endl;
    printarray(a,4);
    BubbleSort(a,4);
    printarray(a,4);
    cout<<endl;
    cout << "InsertionSort" << endl;
    printarray(b,6);
    InsertionSort(b,6);
    printarray(b,6);
    return 0;
}
