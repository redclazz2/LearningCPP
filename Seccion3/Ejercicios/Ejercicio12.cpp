/*Hacer un menú que considere las siguientes opciones:
    caso 1: Cubo de un numero
    caso 2: Numero par o impar
    caso 3: salir */

#include<iostream>
using namespace std;
int main()
{   
    int i,numero;
    cout << "Ingrese una opción de las siguientes: " << endl;
    cout << "1. Calcular el cubo de un numero entero" << endl;	
    cout << "2. Numero entero par o impar" << endl;
    cout << "3. salir" << endl;
    cin >> i;

    switch(i) 
    {
        case 1: 
            cout << "Ingrese el número entero al que se desea calcular el cubo: "; cin>>numero;
            cout << "El resultado es: "<< numero*numero*numero;
        break;

        case 2:
            cout << "Ingrese el numero entero para ver si es par o impar: "; cin>>numero; 
            if( numero % 2 == 0)
            {
                cout << "El numero es par!";
            }
            else
            {
                cout << "El numero es impar!";
            }
        break;

        case 3:
            cout << "Finalizando el programa...";
        break;

        default:
            cout << "Entrada no valida, saliendo del programa...";
        break;
    }


    return 0;
}