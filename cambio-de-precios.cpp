#include <iostream>

void  adjus_price(double* precios, int cantidad){
    for(int i = 0; i < cantidad; i++)
    {
        //aumenta 10% de cada elemento
        *(precios + 1) *=1.10 ;
    }
}

int main()
{
    double price[] = {100, 250, 75 ,500, 120};
    int cantidad =5;

    adjus_price(price, cantidad);

    std::cout<<"precios actualizados: " <<std::endl;

     for(int i = 0; i < cantidad; i++)
    {
        std::cout<<*(price +i)<<std::endl;
    }

    return 0;
}