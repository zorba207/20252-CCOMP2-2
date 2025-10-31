#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
    public:
        MyString(char *data, int size);

        void print() const;
        int getSize() const;
        void intercambio();


        virtual ~MyString();


    private:
        int size;
        char *data;
};

#endif // MYSTRING_H
