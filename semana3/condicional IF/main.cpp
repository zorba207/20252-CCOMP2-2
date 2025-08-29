#include <iostream>

using namespace std;

int main()
{
    /**
    * CONDICIONAL IF
    *
      if (CONDICION) {
          // SENTENCIA A. se ejecuta si la condicion es verdadera
      }  else {
          // SENTENCIA B. se ejecuta si la condicion es falsa.
      }
    * OPERADORES DE COMPARACION
       > mayor que
       < menor que
       >= mayor o igual que
       <= menor o igual que
       == identico a
       != diferente a


    * OPERADORES LOGICOS
       && -> and
       || -> or
       ! -> negacion
       Ejm: a = 10, b = 5
                 (a > 5) -> True
                 (a < 3) -> false
                 (a == 8) -> false
                 (a != 5) -> true
                 (a >= 10 && b < 10) -> true
                 (a < 6 || b == 5) -> true
     */
    int a = 10;
    int b = 5;
    if (a > 5){
        cout<<"El numero " << a << "es mayor que 5" << endl;
    }
    if (a < 3){
        cout << "El numero " << a << "es menor que 3" << endl;
    }
    else {
        cout << "El numero " << a << "es mayor que 3" << endl;
    }
    return 0;
}
