#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1;
    Point p2(4,5);
    Point p3(7,2);

    Point arr[3]= {p1,p2,p3};
    for (int i = 0; i<3; i++){
        arr[i].print();
    }
    return 0;
}
