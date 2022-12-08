/*Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número
coincide con alguno de los introducidos con anterioridad*/

#include<iostream>
using namespace std;
int main()
{
    char n1,n2,n3,n4;
    cout<<"Ingrese tres números";
    cin>>n1>>n2>>n3;

    cout<<"Ingrese un cuarto número";
    cin>>n4;

    if(n1 == n4 || n2 == n4 || n3 == n4)
    {
        cout<<"coincidencia!";    
    }else
    {
        cout<<"No hay conincidencia!";
    }
    return 0;
}