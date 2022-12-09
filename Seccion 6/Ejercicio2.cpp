/*Realiza un programa que defina una matriz 3x3 y escriba un ciclo para que muestre la diagonal
principal de la matriz*/

#include <iostream>

using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0; i < 3; i ++){
        cout << arr[i][i];
    }

    return 0;
}