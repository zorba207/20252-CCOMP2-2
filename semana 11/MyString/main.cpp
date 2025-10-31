#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString a1("string",6);
    a1.print();

    a1.intercambio();
    a1.print();

    cout << a1.getSize() << endl;
    return 0;
}
