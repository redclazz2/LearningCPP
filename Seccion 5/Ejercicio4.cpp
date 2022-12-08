/*Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso*/

#include <iostream>

using namespace std;

int main(){
    int arr[] {1,2,3,4,5};

    for (int i = 4; i >= 0; i --){
        cout << arr[i];
    }

    return 0;
}