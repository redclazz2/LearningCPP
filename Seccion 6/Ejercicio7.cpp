/*Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta*/

#include <iostream>

using namespace std;

int main(){
    int arr1[100][100],f,c,arr2[100][100],b = 0;

    cin >> f >> c;

    for(int i = 0; i < f; i ++){
        for(int e = 0; e < c; e ++){
            cin >> arr1[i][e];
        }
    }

    if(f == c){
        b = 1;
        for(int i = 0; i < f; i ++){
            for(int e = 0; e < c; e ++){
                if(arr1[i][e] != arr1[e][i]){
                    b = 0;
                }
            }
        }
    }

    if(b == 1){
        cout << "Es simetrica.";
    }else{
        cout << "No es simetrica.";
    }

    return 0;
}