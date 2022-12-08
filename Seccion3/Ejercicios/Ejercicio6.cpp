/*Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el caracter es una vocal minuscula
es una vocal mayuscula o no es una vocal*/

#include<iostream>
using namespace std;
int main()
{
    char caracter;
    cout<<"Ingrese un caracter"<<endl;
    cin>>caracter;

    switch(caracter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minúscula!"; break;

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayuscula!"; break;

        default: cout<<"No es una vocal!"; break;
    }

    return 0;
}