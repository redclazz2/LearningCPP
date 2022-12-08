/*Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el valor mayor*/
#include <iostream>

using namespace std;

int main(){
    int n, arr[100],m = 0,c;

    cout << "Ingrese la cantidad de numeros del arreglo: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Ingrese un numero: ";
        cin >> c;
        arr[i] = c;

        if(c > m){
            m = c;
        }
    }

    cout << m;

    return 0;
}