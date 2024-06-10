#include <iostream>
using namespace std;
int main (int argc, char * argv[])
{
    int e;
    int *puntero = &e;
    cout << "Ingrese su edad: ";
    cin >> *puntero;

    if (*puntero > 17)
    {
        cout << "Usted es mayor de edad" << e << "anos. \n";
        cout << "El espacio de memoria de la variable es: " << &puntero;
    }

    else if (*puntero < 0)
    {
        cout << "Error de anos";
    }

    else
    {
        cout << "Usted es menor de edad" << e << "anos. \n";
        cout << "El espacio de memoria de la variable es: " << &puntero;
    }
    
    
    


    return 0;
}