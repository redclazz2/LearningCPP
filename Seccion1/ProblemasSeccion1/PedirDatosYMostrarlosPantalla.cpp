/* Realice un programa que lea de la entrada estándar los siguientes datos de una persona: Edad, Sexo, Altura en metros
Tras leer los datos, el programa debe mostrarlos en la salida estándar*/
#include<iostream>
using namespace std;
int main()
{
    int edad;
    char sexo[10];
    double altura;

    cout << "Ingrese la edad de la persona: "; cin >> edad;
    cout <<"Ingrese el sexo de la persona: "; cin >> sexo;
    cout <<"Ingrese el altura de la persona: "; cin >> altura;

    cout << "Se ha registrado a una persona de "<<edad << " años "<<"con altura de: "<<altura <<" y sexo "<<sexo <<endl;

    return 0;
}