/*Ejercicio 8 Escriba un programa que lea la entrada estándar de los dos catetos de un triángulo rectángulo y escriba
en la salida estándar su hipotenusa*/
#include<iostream>
#include <math.h>
using namespace std;
int main() 
{
    float catetoA,catetoB,hipotenusa;
    cout<<"Ingrese la longitud de el cateto A: "; cin>>catetoA;
    cout<<"Ingrese la longitud de el cateto B: "; cin>>catetoB;

    hipotenusa = sqrt(pow(catetoB,2)+pow(catetoA,2));
    cout.precision(2);
    cout<<"La hipotenusa tiene un valor de: "<<hipotenusa<<endl;

    return 0;
}