#include "DynamicPointArray.h"
#include <iostream>
using namespace std;

DynamicPointArray::DynamicPointArray()
{
    size = 0;
    data = new Point[size];
}

DynamicPointArray::DynamicPointArray(Point arr[], int size)
{
    this->size = size;
    data = new Point[size];
    for (int i=0; i<size; i++){
        data[i]=arr[i];
    }
}

DynamicPointArray::DynamicPointArray(DynamicPointArray &o)
{
    this->size = o.size;
    this->data = new Point[size];
    for (int i=0; i<size; i++){
        this->data[i]=o.data[i];
    }
}

int DynamicPointArray::getSize() const
{
    return size;
}

void DynamicPointArray::print() const
{
    cout << "[ ";
    for (int i=0; i< size; i++){
        data[i].print();
        cout << " ";
    }
    cout << "]";
}

void DynamicPointArray::push_back(Point p)
{
    Point* tmp = new Point [size+1];
    for (int i = 0; i<size; i++){
        tmp[i] = this->data[i];
    }
    tmp[size]= p;
    size++;
    delete[] data;
    this-> data = tmp;
}

void DynamicPointArray::insert(Point p, int pos)
{
    Point* tmp = new Point [size+1];
    for (int i = 0; i<pos ; i++){
        tmp[i] = this-> data[i];
    }

    for(int i = pos; i<size;i++){
        tmp[i+1] = this-> data[i];
    }
    tmp[pos]=p;
    size++;
    delete[] data;
    this->data = tmp;
}

void DynamicPointArray::remove(int pos)
{
    Point* tmp = new Point [size-1];
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

DynamicPointArray::~DynamicPointArray()
{
    delete []data;
    cout << "Memoria Liberada" << endl;
}
