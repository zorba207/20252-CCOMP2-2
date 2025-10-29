#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno
{
    public:
        Alumno(int _edad, char*_nombre);
        ~Alumno();
        void print() const;

    private:
        int edad;
        char *nombre;
};

#endif // ALUMNO_H
