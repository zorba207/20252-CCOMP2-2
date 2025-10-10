#include <iostream>

using namespace std;

int contarCarac(char *ptr, char a){
    int contador = 0;
    while ( *ptr != '\0' ){
        if (*ptr == a){
            contador++;
        }
        ptr++;
    }
    return contador;
}
int main()
{
    char cad[] = "ciencia de la computacion";
    cout << contarCarac(cad,'e'); //2
    return 0;
}
