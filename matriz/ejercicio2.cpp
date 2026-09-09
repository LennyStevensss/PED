#include <iostream>
using namespace std;

int main()
{
    
    const int alumnos = 3;
    const int examenes = 4;

    int notas [alumnos][examenes] = {
        {85, 90, 78, 92},
        {76, 88, 80, 85},
        {90, 91, 89, 95},
    };

    for(int i= 0; i<alumnos; i++){
        int suma =0;
        for(int j=0; i<examenes; j++){
            suma = suma + notas[i][j];
        }

            double promedio = (double)suma/examenes;
            cout<<"promedio: " << promedio;

    }
    
    
    return 0;
}