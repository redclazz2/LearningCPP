/*Escriba un programa que calcule x elevado a la y, donde tanto x como y
son enteros positivos, no utilizar la función Pow. */

#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{

    int x,y,resultado=1;

    cout<<"Porfavor digite el número que se va a potenciar: "<<endl; cin>>x;
    cout<<"Porfavor ingrese la potencia: "<<endl;  cin>>y;

    for (int i = 1; i <= y; i++)
    {   
        resultado *=  x;
    }

    cout<<"El resultado de la potencia es: "<<resultado<<endl;

    getch();

    return 0;
}