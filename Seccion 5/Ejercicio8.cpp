/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro vector multiplicados por 2 y
muestre el segundo arreglo*/

#include <iostream>

using namespace std;

int main(){

    int arr1[5], arr2[5],n,c;

    for (int i = 0; i < 5; i++){
        cin >> c;
        arr1[i] = c;
        arr2[i] = arr1[i] * 2;
    }

    for (int i = 0; i < 5; i++){
        cout << arr2[i];
    }

    return 0;
}