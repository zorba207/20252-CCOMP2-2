#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(char *data)
{
    //this->data = data;   //se guarda como un array, pero no se puede modificarlo.por que es un puntero(solo lectura)
    this -> size = 0;
    while (data[this->size] != '\0')this->size++;

    this->data=new char [size+1];  //no olvidar el espacio para el '\0'
    for (int i =0; i<size;i++){
        this->data[i]=data[i];
    }
    this->data[size]='\0';
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

void MyString::toUpper()
{
    for (int i=0;i<size;i++){
        if ('a'<=data[i] && data[i]<='z')
            data[i]= data[i] -32;
    }
}

void MyString::toLower()
{
    for (int i=0;i<size;i++){
        if ('A'<=data[i] && data[i]<='Z')
            data[i]= data[i] +32;

    }
}

MyString::~MyString()
{
    data=nullptr;
    cout << "Puntero Liberado" << endl;
}
