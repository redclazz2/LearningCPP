/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja. */
#include<iostream>
#include<conio.h>

using namespace std;

int main() 
{

    float temperatura, mayor = 0, menor = 999, sumaTotal = 0;

    for (int i = 0; i<24; i+=4)
    {
        cout << "Ingrese la temperatura de la hora "<<i<<endl;
        cin >> temperatura;

        sumaTotal += temperatura;

        if(temperatura>mayor)
        {
            mayor = temperatura;
        }

        if(temperatura<menor)
        {
            menor = temperatura;
        }
    }

    cout<<"El promedio de las temperatuas es: " <<sumaTotal/6<<endl;
    cout<<"La temperatura menor fue: "<<menor<<endl;
    cout<<"La temperatura mayor fue: "<<mayor<<endl;
    
    getch();
    return 0;
}