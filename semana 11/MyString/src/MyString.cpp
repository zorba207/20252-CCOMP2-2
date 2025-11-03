#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(char *data, int size)
{
    this->data = data;   //se guara como un array, pero no se puede modificarlo.(solo lectura)
    this->size = size;
}



int MyString::getSize() const
{
   return  size;
}

char MyString::getData(int idx) const
{
    return *(data+idx);
}

void MyString::print() const
{
    cout << data << endl;
}

/**void MyString::intercambio()
{
    for (int i=0,j=size-1 ; i < j;i++,j--){ //no se puede, a menos que guarde el string del incio en memoria dinamica.
        char a = *(data+i);
        *(data+i) = *(data+j);
        *(data+j) = a;

    }
}*/

MyString::~MyString()
{
    data=nullptr;
    cout << "Puntero Liberado" << endl;
}
