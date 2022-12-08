#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Digite un numero" << endl; cin >> numero;

    switch (numero)
    {
        case 1: 
        cout << "Es el numero 1!" << endl;
        break;

        case 2:
        cout << "Es el numero 2!" << endl;
        break;

        case 3:
        cout << "Es el numero 3!" << endl;
        break;

        case 4:
        cout << "Es el numero 4!" << endl;
        break;

        case 5:
        cout << "Es el numero 5!" << endl;
        break;

        default:
        cout << "El número no está en el rango de 1 a 5";
        break;
    }
    
    return 0;
}