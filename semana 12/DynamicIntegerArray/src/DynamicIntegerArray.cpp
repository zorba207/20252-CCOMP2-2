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
}

void DynamicIntegerArray::push_back(int val)
{
    int* tmp = new
}

DynamicIntegerArray::~DynamicIntegerArray()
{
    delete[] data;
    cout << "Memoria liberada" << endl;
}
