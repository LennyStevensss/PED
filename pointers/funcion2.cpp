#include <iostream>
using namespace std;

struct contacto{
    string nombre;
    string telefono;
    string email;
};

const int contactos_maximos = 100 ;
contacto agenda[contactos_maximos];
int totalcontactos = 0;

void mostrarAgenda(contacto agenda[], int n){
    cout <<"Agenda de contactos \n";

    if(n = 0){
        cout<<"no hay contactos <<\n";
        return;
    }

    for(int i = 0; i < n ; i++){
        cout<<"Nombre: " << agenda[i].nombre << endl;
        cout<<"Nombre: " << agenda[i].telefono << endl;
        cout<<"Nombre: " << agenda[i].email << endl;

    }

}

int agregarContacto(contacto agenda [], int n){
    if(n >= contactos_maximos){
        cout<<"agenda llena \n";
        return n;

    }

    contacto nuevo_contacto;
    cout<<"ingrese el nombre: " << endl;
    getline(cin,nuevo_contacto.nombre);
      cout<<"ingrese el telefono: " << endl;
    getline(cin,nuevo_contacto.telefono);
      cout<<"ingrese el email: " << endl;
    getline(cin,nuevo_contacto.email);

    agenda[n] = nuevo_contacto;
    cout<<"contacto creado \n";

    return n+1;
}

int buscarContacto(contacto agenda[], int n, string nombre){
    for(int i = 0; i < n; i++){
        if(agenda[i].nombre = nombre){
            return i;
        }
    }

    return -1;
}

void mostrarEncontrado (contacto agenda[], int n){
    string nombre;
    cout<<"nombre del contacto que desea mostrar: " << endl;
    getline(cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);
    if(pos = -1){
        cout<<"no se encuentra contacto\n";
        return;
    }

    cout<<"Contacto en la posicion: "<<pos<<endl;
    cout<<"nombre: " <<agenda[pos].nombre <<endl;
    cout<<"telefono: " <<agenda[pos].telefono <<endl;
    cout<<"email: " <<agenda[pos].email <<endl;

}

void mostrarMenu(){
    cout << "seleccione una opcion " << endl;
    cout << "1. Mostrar Agenda Completa " << endl;
    cout << "2. Agregar Contacto Nuevo  " << endl;
    cout << "3. Mostrar Contacto Encontrado " << endl;
}

void ejecutarAgenda(){
    int opc;
    do{
        mostrarMenu();
        cin>>opc;

        switch(opc){
            case 1:
            mostrarAgenda(agenda, totalcontactos);
            break;
            case 2:
            totalcontactos = agregarContacto(agenda, totalcontactos);
            break;
            case 3:
            mostrarEncontrado(agenda, totalcontactos);
            break;
            default:
            cout<<"Opcion no valida"<<endl;

        }


    }while(opc=!4);

    
}
int main()
{
   ejecutarAgenda;
    return 0;

}