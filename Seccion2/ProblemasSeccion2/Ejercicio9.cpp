/*Realice un programa que calcule el valor que toma la siguiente función para valores
dados de x e y: 
    f(x,y) = sqr(x)/(y^2-1) */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,y,resultado;
    
    cout<<"Ingrese el valor de la variable x: "; cin>>x;
    cout<<"Ingrese el valor de la variable y: "; cin>>y;

    resultado = sqrt(x)/(pow(y,2)-1);
    cout<<"El resultado de la función es: "<<resultado;

    return 0;
}