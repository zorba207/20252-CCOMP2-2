#include <iostream>

using namespace std;

int main()
{
    int c = 10;

    int a = c++; //primero asigna y luego incrementa (10), c valdra 11
    int b = ++c; //primero incrementa(c vale 11) y luego asigna  (11)
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    int d = c--;  //misma logica que el ++
    int e = --c;
    cout << d << endl;
    cout << e << endl;
    cout << c << endl;

    int i = --c
    cout << ++i << endl;  //primero aumenta y luego imprime
    cout << i-- << endl;  //primero imprime luego decrementa

    return 0;
}
