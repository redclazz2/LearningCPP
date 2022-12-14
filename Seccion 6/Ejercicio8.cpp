/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3*/

#include <iostream>

using namespace std;

int main(){
    int arr1[3][3] {{1,4,7},{2,5,8},{3,6,9}}, arr2[3][3] {{1,-1,2},{2,-1,2},{3,-3,0}}, arr3[3][3];

    for (int i = 0; i < 3; i ++){
        for(int e = 0; e < 3; e++){
            arr3[i][e] = 0;
            for(int k = 0; k < 3; k++){
                arr3[i][e] += arr1[i][k] * arr2[k][e]; 
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int e = 0; e< 3; e++){
            cout << arr3[i][e] << " ";
        }
        cout << endl;
    }

    return 0;
}