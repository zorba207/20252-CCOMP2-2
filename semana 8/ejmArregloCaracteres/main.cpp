#include <iostream>

using namespace std;

int longitud(char cad[]){
    int re                 //respuesta del profesor (foto)
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50}; //no se puede imprimir directamente
    char cad1[] = {'c','i','e','n','c','i','a','\0'};  //siempre terminan en \0, si se pueden imprimir directamente
    char cad2[] = "ciencia";  //equivalente a lo anterior

    cout << arr << endl;
    cout << cad1 << endl;
    cout << cad2 << endl;

    cout << longitud(cad1)<< endl;  //7
    return 0;
}
