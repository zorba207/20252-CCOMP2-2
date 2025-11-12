#include "DynamicIntegerArray.h"
#include <iostream>
using namespace std;

DynamicIntegerArray::DynamicIntegerArray()
{
    this->size = 0;
    this->data = new int [size];
}

DynamicIntegerArray::DynamicIntegerArray(int arr[],int size)
{
    this -> size = size;

    this->data = new int [size];
    for (int i = 0; i< size;i++){
        this->data[i] = arr[i];
    }
}

//Constructor copia
DynamicIntegerArray::DynamicIntegerArray(DynamicIntegerArray &o)
{
    this->size = o.size;
    this->data = new int [size];
    for (int i = 0; i< size;i++){   //solucion del profesor
        this->data[i] = o.data[i];
    }
    /**int*temp = new int [size];
    for (int i = 0; i< size;i++){   //solucion mia
        temp[i] = o.data[i];
    }
    this->data = temp;*/
}

int DynamicIntegerArray::getSize()
{
    return size;
}

void DynamicIntegerArray::print() const
{
    cout << "[ ";
    for (int i=0; i< size; i++){
        cout << this->data[i] << " ";
    }
    cout << "]";
    cout<<endl;
}

void DynamicIntegerArray::push_back(int val)
{
    int* tmp = new int [size+1];
    for (int i = 0; i<size; i++){
        tmp[i] = this->data[i];
    }
    tmp[size]=val;
    size++;
    delete[] data;
    this-> data = tmp;
}

void DynamicIntegerArray::insert(int val, int pos)
{
    int* tmp = new int [size+1];
    for (int i = 0; i<pos ; i++){
        tmp[i] = this-> data[i];
    }

    for(int i = pos; i<size;i++){
        tmp[i+1] = this-> data[i];
    }
    tmp[pos]=val;
    size++;
    delete[] data;
    this->data = tmp;
}

void DynamicIntegerArray::remove(int pos)
{
    int* tmp = new int [size-1];
    size--;
    for (int i = 0; i<pos;i++){
        tmp[i] = data[i];
    }
    for (int i= pos; i<size;i++){
        tmp[i] = data[i+1];
    }
    delete[]data;
    this-> data = tmp;
}

DynamicIntegerArray::~DynamicIntegerArray()
{
    delete[] data;
    cout << "Memoria liberada" << endl;
}
