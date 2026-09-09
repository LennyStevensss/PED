#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    int *pointer1 = &n; 

    cout<<"valor: " << n <<endl;
    cout<<"Ubicacion de n: "<<&pointer1<<endl; 
    cout<<"Variable que tiene la ubicacion de n:" << pointer1 << endl;

    cout<<" Valor de n: " << *pointer1 << endl;
   
    *pointer1 = 10;

    cout << "nuevo valor de n: " << n << endl;
    
    return 0;
}