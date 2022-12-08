/*Programa que intercambie los valores de dos variables*/
#include <iostream>
using namespace std;
int main(){

    int a,b,aux;
    cout << "Ingrese el valor de la variable a: "; cin>>a;
    cout << "Ingrese el valor de la variable b: "; cin>>b;

    aux = a;
    a = b;
    b = aux;

    cout << "Despues de invertir, el valor de la variable a es: " << a << ", el valor de la variable b es: " << b;
    return 0;
}