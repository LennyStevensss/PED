#include <iostream>
using namespace std;

struct Persona{
       string nombre;
       int edad;
    };

int main()
{
    Persona pers1;
    pers1.nombre ="miguel";
    pers1.edad = 30;

    Persona pers2;
    pers2.nombre ="Jose";
    pers2.edad = 24;

    cout<< "nombre: "<< pers1.nombre <<endl;
    cout<< "edad  : "<< pers1.edad <<endl;
    cout <<"" <<endl;

    cout<< "nombre: "<< pers2.nombre <<endl;
    cout<< "edad  : "<< pers2.edad <<endl;




    return 0;
}