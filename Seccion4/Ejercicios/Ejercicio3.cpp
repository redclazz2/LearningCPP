/*Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los primeros 10 enteros mayores que 0*/
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    float cuadrado, total=0;
    for(int i = 1; i<11; i++)
    {
        cuadrado = i*i;
        total += cuadrado;
    }

    cout <<"El resultado de la suma de los cuadrados de los primeros 10 numeros enteros es: " << total <<endl;

    getch();

    return 0;
}