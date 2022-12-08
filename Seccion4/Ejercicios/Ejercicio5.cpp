/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango de [20-30] o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos*/

#include <stdlib.h>
#include <iostream>
using namespace std;

int main() 
{

    float numeroIntroducido,suma=0;

    do
    {
        cout << "Introduzca el numero a sumar, si está entre 20 y 30 o es 0 se termina el programa para mostrar los resultados"<<endl; cin>> numeroIntroducido;

        if (numeroIntroducido > 0)
        {
            suma += numeroIntroducido;
        }    

    }while((numeroIntroducido!=0) && ((numeroIntroducido<20) || (numeroIntroducido>30)));

    cout << "La suma es: " << suma<<endl;
    system("pause");
    
    return 0;
}