/*Realice un programa que lea de la entrada estándar numeros hasta que se introduzca un cero. EN ese momento el programa debe terminar y mostrar en la salida estandar el numero
de valores mayores que cero leidos*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{
    int contador=0;
    float numero;

    cout<<"Este programa pide como entrada varios numeros por parte del usuario para poder contar la cantidad de numeros que se introdujeron mayores a 0."<<endl;
    do
    {
        cout << "Ingrese un numero (introduzca 0 para finalizar): "; cin>>numero;

        if (numero>0)
        {
            contador++;
        }
    }while(numero != 0);

    cout<<"La cantidad de numeros introducidos que son mayores a 0 es: "<<contador<<endl;
    
    getch();
    return 0;
}
