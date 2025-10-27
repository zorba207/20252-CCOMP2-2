#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printarray ( char a[], int tam){
    cout << "[ ";
    for (int i = 0; i< tam; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl;
    cout<<endl;
}

void printmatriz( char matriz[7][7]){
    for (int i=0; i<7 ; i++){
         cout << "[ ";
         for (int j = 0; j<7; j++){
            cout << matriz[i][j] << " ";
         }
         cout << "]" << endl;
    }
    cout<<endl;
}

void printmatriz02( char matriz[5][5]){
    for (int i=0; i<5 ; i++){
         cout << "[ ";
         for (int j = 0; j<5; j++){
            cout << matriz[i][j] << " ";
         }
         cout << "]" << endl;
    }
    cout<<endl;
}

void bubblesort(char a[],int tam){
    for (int i=0; i< tam-1;i++){
        for ( int j=0; j<tam-1-i;j++){
            if (a[j]>a[j+1]){
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    // ejercicio 4
    cout <<"Ejercicio 4" << endl;
    char matriz01[7][7]={                 // creacion de las matrices
        {'A','F','F','Y','0','7','C'},
        {'a','6','D','x','z','J','d'},
        {'m','D','n','N','e','M','4'},
        {'4','Q','3','O','1','N','b'},
        {'G','T','S','7','H','g','K'},
        {'c','Z','0','I','f','J','e'},
        {'L','L','6','G','1','G','5'}
    };
    char matriz02[7][7];
    cout << "-----------Matriz01 (desordenada)--------" << endl;
    printmatriz(matriz01);

    char mayusculas[49];   //creacion de arrays
    char minusculas[49];
    char numeros[49];
    int tammayus{0},tamminus{0},tamnum{0};   //no olvidar inicializar las variables

    for (int i=0; i<7 ; i++){    //rellena los arrays
         for (int j = 0; j<7; j++){
            if (('A' <= matriz01[i][j]) && (matriz01[i][j] <= 'Z')){
                mayusculas[tammayus++] = matriz01[i][j];
            }
            else if (('a' <= matriz01[i][j]) && (matriz01[i][j] <= 'z')){
                minusculas[tamminus++] = matriz01[i][j];
            }
            else{
                numeros[tamnum++] = matriz01[i][j];
            }
         }
    }
    cout << "-----------Arrays desordenados--------" << endl;
    printarray(mayusculas,tammayus);
    printarray(minusculas,tamminus);
    printarray(numeros,tamnum);

    bubblesort(mayusculas,tammayus);  //ordena los arrays
    bubblesort(minusculas,tamminus);
    bubblesort(numeros,tamnum);
    cout << "-----------Arrays ordenados--------" << endl;
    printarray(mayusculas,tammayus);
    printarray(minusculas,tamminus);
    printarray(numeros,tamnum);


    int idx_M{0},idx_m{0},idx_N{0};
    int i=0,j=3,k=3;
    while (i<4){            //mitad superior  //j -> inicio, k --> final
        int temp =j;
        for (; temp<k+1; temp++){
            matriz02[i][temp] = mayusculas[idx_M++];
        }
        i++;
        j--;
        k++;
    }
    for (int i=0;i<4;i++){
        for ( int j=0; j<7; j++){
            if (('A' <= matriz02[i][j]) && (matriz02[i][j] <= 'Z') ){
                continue;
            }
            else{
                matriz02[i][j] = numeros[idx_N++];
            }
        }
    }

    i=4;
    j=1;  //inicio
    k=5;  //final
    while (i<7){            //mitad inferior
        int temp =j;
        for (; temp<k+1; temp++){
            matriz02[i][temp] = mayusculas[idx_M++];
        }
        i++;
        j++;
        k--;

    }
    for (int i=4;i<7;i++){
        for ( int j=0; j<7; j++){
            if (('A' <= matriz02[i][j]) && (matriz02[i][j] <= 'Z') ){
                continue;
            }
            else{
                matriz02[i][j] = minusculas[idx_m++];
            }
        }
    }

    cout << "-----------Matriz02 (ordenada)--------" << endl;
    printmatriz(matriz02);



    //ejercicio 3.5
    cout << "Ejercicio 3.5 (sin punteros y matriz fija) "<<endl;   //sin punteros, no se puede a menos que sea una matriz aleatoria
    cout << "-----------Matriz 01 (no convertida)-----------"<<endl;
    char matriz03[5][5]={
        {'A','K','L','y','D'},
        {'b','c','K','j','o'},
        {'z','V','u','P','p'},
        {'r','c','t','g','H'},
        {'B','C','H','i','M'}
    };
    char matriz04[5][5];
    printmatriz02(matriz03 );

    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i<=j){
                if (('a' <= matriz03[i][j]) && (matriz03[i][j] <= 'z') ){
                    matriz04[i][j] = matriz03[i][j]-32;
                }
                else{
                    matriz04[i][j] = matriz03[i][j];
                }
            }
            else{
                if (('A' <= matriz03[i][j]) && (matriz03[i][j] <= 'Z') ){
                    matriz04[i][j] = matriz03[i][j]+32;
                }
                else{
                    matriz04[i][j] = matriz03[i][j];
                }
            }
        }
    }

    cout << "-----------Matriz 02 (convertida)-----------"<<endl;
    printmatriz02(matriz04);


    //ejercicio 3.5 (con punteros, pero con amtriz aleatoria)

    cout << "Ejercicio 3.5 (con punteros, matriz aleatoria y dinamica)" << endl;

    char **matriz05=nullptr;    //creacion de las matrices dinamicas
    matriz05 = new char*[5];
    for (int i=0; i<5 ; i++){
        matriz05[i] = new char[5];
    }

    char **matriz06 = nullptr;
    matriz06 = new char*[5];
    for (int i=0; i<5 ; i++){
        matriz06[i] = new char[5];
    }

    srand(time((0)));
    for (int i =0; i<5 ; i++){    //rellena la matriz05
        for (int j=0; j<5; j++){
            int tipo = rand()%2;
            if (tipo == 0){
                matriz05[i][j] = 97 + (rand()%26);
            }
            else{
                matriz05[i][j] = 65 + (rand()%26);
            }
        }
    }

    cout << "--------Matriz 01 (no convertida)---------" << endl;
    for (int i=0; i<5 ; i++){       //print matriz05
         cout << "[ ";
         for (int j = 0; j<5; j++){
            cout << matriz05[i][j] << " ";
         }
         cout << "]" << endl;
    }
    cout<<endl;


    for (int i = 0; i<5 ; i++){
        for (int j =0; j<5;j++){
            char c = *(*(matriz05 + i) + j);
            if(i<=j){
                if (('a' <= c) && (c <= 'z') ){
                        *(*(matriz06 + i) + j) = c-32;
                    }
                else{
                    *(*(matriz06 + i) + j)= c;
                }
            }
            else{
                if (('A' <= c) && (c <= 'Z') ){
                    *(*(matriz06 + i) + j) = c+32;
                }
                else{
                    *(*(matriz06 + i) + j) = c;
                }
            }
        }
    }

    cout << "--------Matriz 02 (convertida)---------" << endl;
    for (int i=0; i<5 ; i++){       //print matriz06
         cout << "[ ";
         for (int j = 0; j<5; j++){
            cout << matriz06[i][j] << " ";
         }
         cout << "]" << endl;
    }
    cout<<endl;






    return 0;
}
