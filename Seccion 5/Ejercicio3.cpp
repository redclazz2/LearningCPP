/*Escribe un programam que lea de la entrada estandar de un vector de numeros y muestre
en pantalla por salida estandar los numeros del vactor con sus indices asociados*/

#include <iostream>
using namespace  std;

int main(){
    int arr[100],n;

    cout << "Ingrese el numero de elementos que debe tener el arreglo: LIM 100";
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i ++){
        cout << arr[i] << " " << i << endl;
    }

    return 0;
}
