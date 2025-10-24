#include <iostream>
#include <cmath>
using namespace std;

class Punto {  //es como crear un nuevo tipo de dato

    private:  //solo accesible dentro de la clase (funciones) (si no esta es por defecto)
        int x;    //propiedades
        int y;

    public:
        Punto() {  //constructor
           x = 0;
           y = 0;
        }

        Punto(int _x, int _y) {  //constructor
           x = _x;
           y = _y;
        }

        int getX() const {   //nos dan las variables privadas
            return x;
        }

        int getY() const {  //const indica si es de lectua o de modificaion, const -> no se modifica
            return y;
        }

        void print(){   //funciones
            cout << "("  << x <<", " << y << ")" ;
        }
        void modificar(int _x, int _y){
            x = _x;
            y = _y;
        }

};

class VectorGeometrico{
    private:  //solo accesible dentro de la clase (si no esta es por defecto)

        Punto ini;  //crear objeto de clase punto
        Punto fin;

    public:

        VectorGeometrico(Punto p1, Punto p2){  //constructor
            ini = p1;
            fin = p2;
        }

        void print(){
            ini.print();
            cout << " -> " ;
            fin.print();
        }
        float modulo(){
            return sqrt(pow(fin.getX()-ini.getX(),2) + pow(fin.getY()-ini.getY(),2));
        }

};
int main()
{

    Punto p1;
    Punto p2 (3,4);
    VectorGeometrico vg(p1,p2);

    vg.print();
    cout << "\n El modulo es: " << vg.modulo() << endl;


    return 0;
}
