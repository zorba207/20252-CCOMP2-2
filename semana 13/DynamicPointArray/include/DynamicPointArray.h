#ifndef DYNAMICPOINTARRAY_H
#define DYNAMICPOINTARRAY_H
#include "Point.h"

class DynamicPointArray
{
    public:           //tomar como referencia el DynamicIntegerArrays
        DynamicPointArray();
        DynamicPointArray(Point arr[], int size);
        DynamicPointArray(DynamicPointArray &o);

        int getSize() const;
        void print() const;
        void push_back(Point p);
        void insert(Point p, int pos);
        void remove(int pos);

        virtual ~DynamicPointArray();

    private:
        Point *data;
        int size;
};

#endif // DYNAMICPOINTARRAY_H
