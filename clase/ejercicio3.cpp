#include <iostream>

void caras(int cantidad, int* dado){
    for(int i = 5; i < cantidad; i--){

    }
}

int main()
{
    int dado[]{10, 20, 30, 40, 50};
    int cantidad = 5; 

    caras(cantidad, dado);
    std::cout<<"posicion de los dados es: " <<std::endl;

     for(int i = 0; i < cantidad; i++)
    {
        std::cout<<*(dado +i)<<std::endl;
    }

    return 0;
}