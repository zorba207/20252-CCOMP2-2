#include <iostream>

using namespace std;

int main()
{
    char car = '6';  //solo neceito un byte para alamcenar un caracter, para caracter se usan comillas simples

    int val = static_cast<int>(car);//convertir de char a entero ASCII
    cout << sizeof(val) << endl;
    int result = val - '0';  //resta de ASCIIs
    cout << "el valor entero es:" << val <<endl;  //imprime el codigo ASCII
    cout << result << endl;
    return 0;
}
