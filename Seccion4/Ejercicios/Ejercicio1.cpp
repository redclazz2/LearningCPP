/*Realice un programa que solicite de la entrada estandar un entero de 1 al 10 y muestre en la salida estandar su tabla de multiplicar*/
#include<iostream>
using namespace std;
int main()
{
    int numero;

    do
    {
        cout << "Ingrese el numero de 1 a 10 del que se requiere la tabla de multiplicar: "; cin>>numero;
    }while (numero<1 || numero>=10);

    for (int i = 1; i <=10; i++) 
    {
        cout << numero << "*" << i << " = "<<numero*i<<endl;
    }

    return 0;
}