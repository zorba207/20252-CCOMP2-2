#include <iostream>
#include "DynamicIntegerArray.h"

using namespace std;

int main()
{
    int arr[]={1,3,2,4};
    DynamicIntegerArray dia1(arr,4);

    dia1.print();

    cout<<dia1.getSize()<<endl;
    return 0;
}
