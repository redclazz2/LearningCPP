/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta
Recuerde que la traspuesta es aquella en la que la columna i era la fila i de la matriz
original.*/

#include <iostream>

using namespace std;

int main(){

    int arr1[3][3] , arr2[3][3];

    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            cin >> arr1[i][e];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){ //0 0 //0 1 // 0 2
            arr2[e][i] = arr1[i][e];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            cout << arr2[i][e];
        }
        cout << endl;
    }

    return 0;
}