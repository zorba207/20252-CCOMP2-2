#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void printmatriz(char**a){    //la matriz dinamica solo se declara como un puntero
    for (int i=0; i<4; i++){
        cout << "[ ";
        for (int j=0; j<4; j++){
            cout << a[i][j]<< " ";
        }
        cout << "]"<<endl;
    }
}

void printarray (char a[],int tam){
    cout <<"[ ";
    for (int i=0; i<tam ;i++){
        cout << a[i] <<" ";
    }
    cout << "]"<<endl;
}
void funcionrecursiva(int i, int j){  //funcion del ejercicio 1
    if (j%25!=0 && i>=70){
        return;
    }
    else{
        cout<<" i = "<<i<<endl;
		cout<<" j = "<<j<<" % 25 = "<<j%25<<endl;
		j++; i++;
        return funcionrecursiva(i,j);   //no es necesario el return
    }
}
int main()
{
    //ejercicio 1
    cout << "sin funcion recursiva" << endl;
    int i{0},j{1};
    while (i<70 || j%25==0){
        cout<<" i = "<<i<<endl;
		cout<<" j = "<<j<<" % 25 = "<<j%25<<endl;
		j++; i++;
    }


    cout << "con funcion recursiva" << endl;
    i=0;
    j=1;
    funcionrecursiva(i,j);



    //ejercicio 2
    char**matriz=nullptr;
    char*mayusculas=nullptr;
    char*minusculas=nullptr;
    char*digitos=nullptr;
    matriz = new char*[4];   //generar matriz
    for (int i=0 ;i<4;i++){
        matriz[i]=new char[4];
    }

    mayusculas=new char[6];
    minusculas= new char[6];  //generar arrays
    digitos = new char [4];
    srand(time(0));  //semilla generadora

    for (int i=0; i<6; i++){               //rellenar los arrays de letras
        mayusculas[i]= 'A'+(rand()%26);
        minusculas[i]= 'a'+(rand()%26);
    }

    for (int i=0; i<4; i++){               //rellenar el array de digitos
        digitos[i] = '0'+(rand()%10);
    }


    printarray(mayusculas,6);
    printarray(minusculas,6);
    printarray(digitos,4);


    cout << "Matriz ordenada" << endl;
    int idx_M=0,idx_m=0,idx_d=0;
    for (int i=0; i<4; i++){            //rellena la matriz
        for (int j=0; j<4; j++){
            if (i<=1 && j<=1){
                matriz[i][j]=mayusculas[idx_M++];
            }
            else if (i>=2 && j>=2){
                matriz[i][j]=minusculas[idx_m++];    //rellena la esquina superior izquierda y la esquina inferior derecha
            }
            else{
                continue;
            }
        }
    }

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if(i<=1 && j>=2){
                if (idx_M >=6){
                    matriz[i][j]=digitos[idx_d++];
                }
                else{
                    matriz[i][j]=mayusculas[idx_M++];    //rellena las esquinas faltantes
                }

            }
            else if (i>=2 && j<=1){
                if (idx_m <2){
                    matriz[i][j]=minusculas[idx_m++];
                }
                else{
                    if (idx_m >=6){
                        matriz[i][j]=digitos[idx_d++];
                    }
                    else{
                        matriz[i][j]=minusculas[idx_m++];
                    }
                }
            }
        }
    }



    for (int i=0; i<4; i++){
        cout << "[ ";
        for (int j=0; j<4; j++){
            cout << matriz[i][j]<< " ";  //print matriz
        }
        cout << "]"<<endl;
    }
    cout << "print matriz con funcion" << endl;
    printmatriz(matriz);

    return 0;
}
