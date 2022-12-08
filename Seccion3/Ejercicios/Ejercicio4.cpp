/*Determinar si un número es positivo o negativo*/
#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Ingrese un numero: "<<endl;
    cin >> n1;

    if(n1==0)
    {
        cout<<"El numero es igual a 0.";
    }
    else
    {
        if(n1>0)
        {
            cout<<"El numero es positivo";
        }
        else
        {
            cout<<"El numero es negativo";
        }
    }
    return 0;
}