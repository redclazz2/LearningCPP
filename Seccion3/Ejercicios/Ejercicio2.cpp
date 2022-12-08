/* Escriba un programa que lea tres números y determine cuál de ellos es el mayor*/
#include<iostream>
using namespace std;
int main()
{
    int numero1,numero2,numero3;
    cout << "Ingrese el valor del primer número"; cin>>numero1;
    cout << "Ingrese el valor del segundo número"; cin>>numero2;
    cout << "Ingrese el valor del tercer el número"; cin>>numero3;

    if(numero1==numero2==numero3)
    {
        cout << "Los números son iguales" << endl;
    }
    else
    {
        if ((numero1>numero2) && (numero1>numero3))
        {
            cout << "El numero mayor es "<<numero1;
        }
        else
        {
            if ((numero2>numero3) && (numero2>numero1))
            {
                cout << "El número mayor es "<<numero2;
            }
            else
            {
                cout << "El número mayor es "<<numero3;
            }
            
        }
    }
    return 0;
}