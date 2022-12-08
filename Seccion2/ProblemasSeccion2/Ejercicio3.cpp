/* Escribe la siguiente expresión como expresión en c++:
    a + (b/(c-d)) */
    
#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,resultado = 0;
    cout << "Ingrese el valor del número a: "; cin >> a;
    cout << "Ingrese el valor del número b: "; cin >> b;
    cout << "Ingrese el valor del número c: "; cin >> c;
    cout << "Ingrese el valor del número d: "; cin >> d;

    resultado = a + (b/(c-d));
    cout << "El resultado es: "<< resultado<<endl;


    return 0;
}