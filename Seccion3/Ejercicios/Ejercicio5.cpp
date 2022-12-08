/*Comporbar is un caracter es una vocal minúscula*/
#include<iostream>
using namespace std;
int main()
{   
    char caracter;
    cout << "Ingrese una letra: "; cin>>caracter;

    if (caracter == char(tolower(caracter)))
    {
        cout << "La vocal es minuscula!";
    }
    else
    {
        cout << "La vocal no es minuscula!";
    }
    return 0;
}