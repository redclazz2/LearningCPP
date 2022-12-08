/*La calificación final de un estudiante es el promedio de tres notas*/
#include<iostream>
using namespace std;
int main()
{
    float practicas,teoria,participacion,notaFinal;
    cout << "Ingrese la nota de las practicas"; cin>>practicas;
    cout << "Ingrese la nota de la teoria"; cin>>teoria;
    cout << "Ingrese la nota de la participacion"; cin>>participacion;

    notaFinal = (practicas*0.3)+(teoria*0.6)+(participacion*0.1);
    cout << "La nota final del estudiante es: " << notaFinal << endl;

    return 0;
}