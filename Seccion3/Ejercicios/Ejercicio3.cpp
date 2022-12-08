/*Determine si un número es par o impar*/
#include<iostream>
using namespace std;
int main()
{   
    int n1;

    cout<<"Ingrese un número: "<< endl;
    cin>>n1;

    if (n1==0)
    {
        cout<<"El número es 0";
    }else
    {
        if(n1%2==0)
        {
            cout<<"El número es par!";
        }
        else
        {
            cout<<"El número es impar";        
        }
    }
    return 0;
}