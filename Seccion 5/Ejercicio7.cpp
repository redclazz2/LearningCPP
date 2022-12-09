/*Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores
en un nuevo vector, situando en primer lugar los elementos del primer vector seguidos por los elementos del
segundo vector. Muestre el contenido del nuevo vector en la salida estandar.*/

#include <iostream>

using namespace std;

int main(){
    char arr1[] = {'a','b','c'},
            arr2[] = {'d','e','f'},
            arr3[6];

    for(int i = 0; i< 3; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 3; i< 6; i++){
        arr3[i] = arr2[i-3];
    }

    for(int i = 0; i< 6; i++){
            cout << arr3[i];
    }

    return 0;
}



