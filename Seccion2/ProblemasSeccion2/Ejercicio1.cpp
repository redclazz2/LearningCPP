#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Ingrese el valor del numero a: "; cin>>a;
    cout<<"Ingrese el valor del numero b: "; cin>>b;
    cout<<"Ingrese el valor del numero c: "; cin>>c;
    cout<<"Ingrese el valor del numero d: "; cin>>d;

    float resultado = (a+b)/(c+d);
    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}