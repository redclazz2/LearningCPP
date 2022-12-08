/*Escriba un programa que lea dos números y determine cuál de ellos es el mayor*/
#include<iostream>
using namespace std;
int main()
{
    int numero1,numero2;

    cout <<"Ingrese el valor del primer número: "; cin >> numero1;
    cout <<"Ingrese el valor del segundo número: "; cin >> numero2;

    if (numero1==numero2)
    {
        cout <<"Los números son iguales" << endl;
    }
    else
    {
        if(numero1 > numero2)
        {
            cout <<"El número "<<numero1<<" Es mayor que " << numero2 <<endl;
        }
        else
        {
            cout <<"El número "<<numero2<<" Es mayor que " << numero1 <<endl;
        }
    }
    
    return 0;
}