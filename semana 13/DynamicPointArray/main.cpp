#include <iostream>
#include "Point.h"
#include "DynamicPointArray.h"
using namespace std;

int main()
{
    Point p1;
    Point p2(4,5);
    Point p3(7,2);

    Point arr[3]= {p1,p2,p3};
    DynamicPointArray da(arr, 3);
    da.print();
    cout<<endl;

    Point p4(6,7);
    da.push_back(p4);
    da.print();
    cout<<endl;

    Point p5(8,2);
    da.insert(p5,2);
    da.print();
    cout<<endl;

    da.remove(3);
    da.print();
    cout<<endl;

    cout << da.getSize() << endl;

    return 0;
}
