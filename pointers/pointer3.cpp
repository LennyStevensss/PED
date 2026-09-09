#include <iostream>
using namespace std;
int main(){

    //x es una variable que contiene el 10
    int x = 10;

    //p es una variable (puntero) que contiene la ubicacion de la variable que contiene el 10
    int* p = &x;

    //pp es una  variable (puntero) que contiene una variable que contiene la ubicacion de la variable que contiene el 10
    int ** pp = &p;

    int *** ppp = &pp;


    return 0;
}