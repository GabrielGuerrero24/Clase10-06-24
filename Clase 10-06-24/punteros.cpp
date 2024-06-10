#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x; 
    int *apuntador =&x; //Creamos un apuntador de memoria x
    cout <<"Ingrese un numero entero";
    cin >> *apuntador; // Deespues de operar con punteros es necesario liberar memoria.
    apuntador = NULL; 
    cout << "Usted ingreso el numero:" << x <<"\n"; 
    cout << "Usted ingreso el numero:" <<&apuntador <<"\n"; 
    return 0;  
}