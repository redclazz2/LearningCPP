/*Escriba un programa que solicite una edad (entero) e indique en la salida estándar
si la edad introducida está en el rango [18-25]*/
#include<iostream>
using namespace std;
int main()
{
    int edad;

    cout<<"Ingrese la edad de la persona: "; cin>>edad;

    if(edad>=18 && edad<=25)
    {
        cout<<"La edad se encuentra en el rango!";
    }
    else
    {
        cout<<"La edad no se encuentra en el rango";
    }

    return 0;
}
