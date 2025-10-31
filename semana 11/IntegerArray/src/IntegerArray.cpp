#include "IntegerArray.h"
using namespace std;

IntegerArray::IntegerArray(int size)
{
    this->size = size;       //porque se llaman igual, el this es un punero a la clase
    this->data = new int[size];
}

int IntegerArray::getData(int idx) const
{
    if (idx >= 0 || idx < size){
        return this ->data[idx];
    }
}


int IntegerArray::getSize () const
{
    return this->size;
}

void IntegerArray::setData (int val, int idx)
{
 if (idx >= 0 || idx < size){
    this ->data[idx] = val;
 }
}


void IntegerArray::print() const
{
    cout << "[ ";
    for (int i=0; i< size; i++){
        cout << this->data[i] << " ";
    }
    cout << "]";
}
IntegerArray::~IntegerArray()
{
    delete[] data;
}
