#include <iostream>

using namespace std;

int main()
{
    /** comentario de varias lineas.
     Los tipos de datos para manejar enteros son:
        - short (en memoria Ram ocupa 2 bytes)
        - int ~ long (en memoria RAM ocupa 4 bytes)
        - long long (en memoria RAM ocupa 8 bytes)
        sizeof()(indica cuanto espacio ocupa una vaiable)
    */

    unsigned short val1 = ; //unsigned significa que no puede ser negativo o volverse negativo
    cout<<"el valor es"<< val1 << endl;
    val1 = val1 + 1;  // valor maximo por sus 2 bytes
    cout<<"el valor es"<< val1 << endl;
    val1 = val1 + 1;   //saldra negativo
    cout<<"el valor es"<< val1 << endl;
    /**
       SHORT
         2 bytes
       1 byte ~ 8 bits
       2 bytes ~ 16 bits

       2 en binario es -> 010
       3 en binario es -> 011
       4 en binario es -> 100
       ...
       10 en bianrio es -> 1010
       ...
       255 en binario es -> 11111111
       256 en binario es -> 00000001 00000000
       ...
       65535 es          -> 11111111 11111111
       */
    return 0;
}
