/*Escriba un programa que calcule las soluciones de una ecuación de segundo grado
de la forma ax^2+bx+c=0, teniendo en cuenta la formula del estudiante*/
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    float a,b,c,resultado1,resultado2;

    cout<<"Ingrese el valor de la varibale a: "; cin>>a;
    cout<<"Ingrese el valor de la variable b: "; cin>>b;
    cout<<"Ingrese el valor de la variable c: "; cin>>c;

    resultado1 = (( -b + (sqrt(pow(b,2)-(4*a*c)) )) / (2 * a));
    resultado2 = (( -b - (sqrt(pow(b,2)-(4*a*c)) )) / (2 * a));

    cout<<"El resultado 1 es: "<<resultado1;
    cout<<"El resultado 2 es: "<<resultado2;

    return 0;
}