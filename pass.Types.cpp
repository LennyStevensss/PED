#include <iostream>
using namespace std;

 //paso por valor 
void cambiarvalor(int a){
        a = 20;
    }
    //paso por referencia
    //todo lo que le pase a "b" le pasara a "a"

    void cambiarValorporReferencia(int& b){
      b=0;
    }
//paso por referencia de punteros
//int*& es la direccion de memoria de un puntero
    void cambiarValorReferenciaPtr(int *&a){
      a = nullptr;
    }

int main()
{
  int a = 10;
  int *ptr =&a;

  /*
  cout<<"a: " <<a<<endl; //10
  cambiarValorporReferencia(a);
  cout <<"a: luego de ejecutar funcion: " << a << endl;
  */
   cout<<"ptr: " <<ptr<<endl; //10
  cambiarValorporReferencia(*ptr);
  cout <<"ptr luego de ejecutar funcion: " << ptr << endl;

    return 0;

}