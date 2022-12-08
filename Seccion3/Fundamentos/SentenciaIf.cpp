#include<iostream>
using namespace std;
int main()
{
    int numero,dato = 5;

    cout<<"Digite un número: ";
    cin>>numero;

    if(numero > dato)
    {
        cout<<"El número es mayor a 5!";
    }
    else
    {
        cout<<"El número es menor a 5!";
    }

    return 0;
}