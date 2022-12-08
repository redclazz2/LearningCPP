/*Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta
multiplicación y división*/
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,suma =0, resta =0, multiplicacion =0,division =0;
    
    cout << "Digite un numero: ";
    cin >> n1;
    cout << "Digite otro numero: ";
    cin >> n2;
    
    suma = n1+n2;
    resta = n1-n2;
    multiplicacion =n1*n2;
    division = n1/n2;
    
    cout << "La suma es: " << suma << endl;
    cout << "la resta es: " << resta << endl;
    cout << "la multiplicacion es: " << multiplicacion << endl;
    cout << "la division es: "<< division<< endl;

    return 0;
}