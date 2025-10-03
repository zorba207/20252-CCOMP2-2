#include <iostream>

using namespace std;

int contarCarac(char *ptr, char a){
    contador = 0;
    for(;*ptr != '\0'; ptr++){
        if (*ptr == a){
            contador++;   //falta
        }
        else{
            continue
        }
    }
}
int main()
{
    char cad[] = "ciencia de la computacion";
    cout << contarCarac(cad,'e'); //2
    return 0;
}
