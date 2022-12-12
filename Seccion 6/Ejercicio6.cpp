/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/

#include <iostream>

using namespace std;

int main(){
    int arr1[3][3] {1,2,3,4,5,6,7,8,9}, arr2[3][3] {1,1,1,1,1,1,1,1,1}, arr3[3][3];

    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            arr3[i][e] = arr2[i][e] + arr1[i][e];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            cout << arr3[i][e];
        }
        cout << endl;
    }

    return 0;
}