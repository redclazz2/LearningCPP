/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios
copiar el contenido a otra matriz y por ulitmo mostrarla en pantalla*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int arr1[100][100], f,c, arr2[100][100];

    cin >> f >> c;

    srand(time(NULL));

    for(int i = 0; i < f; i++){
        for(int e = 0; e < c; e++){
            arr1[i][e] = 1+rand()%(10);
        }
    }

    for(int i = 0; i < f; i++){
        for(int e = 0; e < c; e++){
            arr2[i][e] = arr1[i][e];
        }
    }

    for(int i = 0; i < f; i++){
        for(int e = 0; e < c; e++){
            cout << arr2[i][e];
        }
        cout << endl;
    }

    return 0;
}