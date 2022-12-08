/* Ejercicio 3: Escribe la siguiente expresión en C++
    a + (b/c)/(d+(e/f)) */

#include<iostream>
using namespace std;
int main()
{
    float a, b, c, d, e, f,resultado;
    cout << "Ingrese el valor del numero a: "; cin>>a;
    cout << "Ingrese el valor del numero b: "; cin>>b;
    cout << "Ingrese el valor del numero c: "; cin>>c;
    cout << "Ingrese el valor del numero d: "; cin>>d;
    cout << "Ingrese el valor del numero e: "; cin>>e;
    cout << "Ingrese el valor del numero f: "; cin>>f;

    resultado = (a + (b/c))/(d+(e/f));
    cout << "El valor del resultado es: "<<resultado<<endl;

    return 0;

}