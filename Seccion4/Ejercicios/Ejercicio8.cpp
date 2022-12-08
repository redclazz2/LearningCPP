/* Escriba un programa que sume n números impares*/
#include<iostream>
#include<conio.h>

using namespace std;

int main() 
{
    int n, suma =0;

    cout << "Ingrese el numero de elementos a sumar: "; cin >> n;

    for(int i = 1; i <= 2*n-1; i+=2) 
    {   
        
            suma += i;
        
    }

    cout<< "El total de la suma es: " << suma <<endl;
    getch();

    return 0;


}