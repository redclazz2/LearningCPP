#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Ingrese el numero a: ";
    cin>>a;
    cout<<"Ingrese el numero b: ";
    cin>>b;

    cout.precision(2);
    cout<<"El resultado de la expresion (a/b)+1, es: "<< (a/b) + 1<<endl;
    return 0;
}