#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(char *data, int size)
{
    this->data = data;
    this->size = size;
}



int MyString::getSize() const
{
   return  size;
}

void MyString::intercambio()
{
    int c = size-1;
    for (int i=0; i<size;i++){
        if (i == c){
            break;
        }
        else{                       //no funciona
            char temp = data[i];
            data[i] = data[c];
            data[c] = temp;
        }
    }
}
void MyString::print() const
{
    cout << data << endl;
}

MyString::~MyString()
{
   data = nullptr;                           //revisar delete
   cout << "Puntero Liberado" << endl;
}
