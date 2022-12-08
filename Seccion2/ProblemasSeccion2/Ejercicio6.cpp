/* Escriba un programa que lea las notas de un alumno y calcule
la nota final media*/
#include <iostream>
using namespace std;

int main()
{
    float nota1,nota2,nota3,promedio;

    cout << "Ingrese el valor de la primera nota: "; cin >> nota1;
    cout << "Ingrese el valor de la segunda nota: "; cin >> nota2;
    cout << "Ingrese el valor de la tercera nota: "; cin >> nota3;

    promedio = (nota1 + nota2 + nota3)/3;

    cout.precision(2);
    cout << "El promedio del alumno es: " << promedio;
    return 0;
}
