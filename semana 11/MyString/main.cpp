#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString a1("string");
    a1.print();

    a1.toUpper();
    a1.print();


    cout << a1.getData(2) << endl;

    a1.toLower();


    a1.print();



    cout << a1.getSize() << endl;
    return 0;
}
