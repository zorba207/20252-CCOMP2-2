#include <iostream>
#include <cmath>
using namespace std;

class Punto {  //es como crear un nuevo tipo de dato
    public:
        int x;    //propiedades
        int y;
        void print(){   //funciones
            cout << "("  << x <<", " << y << ")" << endl;
        }
        void modificar(int _x, int _y){
            x = _x;
            y = _y;
        }
};

float distancia (Punto p1,Punto p2){  //se pone el nombre de la clase y luego el del objeto
    float distancia = sqrt( pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
    return distancia;
}



int main()
{
    // 0,0
    int p1_x = 0;
    int p1_y = 0;

    Punto p1;  //llamar a la clase y crear objeto
    p1.x = 0;
    p1.y = 0;
    p1.print();


    // 3,4
    int p2_x = 3;
    int p2_y = 4;
    Punto p2;
    p2.x = 3;
    p2.y = 4;
    p2.print();


    cout << distancia(p1,p2) << endl;

    p1.modificar(1,1);
    p2.modificar(5,5);
    p1.print();
    p2.print();

    cout << distancia(p1,p2) << endl;


    return 0;
}
