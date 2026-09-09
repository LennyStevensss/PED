#include <iostream>
using namespace std;

void depositar (double* saldo, double cantidad){
    *saldo += cantidad;
}
int main()
{
   double saldo= 1000;
   double cantidad =200;

   cout<<"saldo Antes: " << saldo <<endl;
   depositar(&saldo, cantidad);
   cout<<"saldo Despues: "<< saldo << endl;

   return 0;
}