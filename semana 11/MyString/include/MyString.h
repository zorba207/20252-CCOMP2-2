#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
    public:
        MyString(char *data);

        void print() const;
        int getSize() const;
        char getData(int idx) const;
        void intercambio();
        void toUpper();
        void toLower();



        virtual ~MyString();


    private:
        int size;
        char *data;
};

#endif // MYSTRING_H
