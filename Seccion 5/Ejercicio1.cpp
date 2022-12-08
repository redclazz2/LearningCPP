/*Realice un programa que defina un vector de números y calcule la suma de sus elementos*/
#include <iostream>

using namespace std;

int main(){
    /*Definir un array en cpp es similar a cs
    La diferencia es que en cpp el [] lo tiene el nombre y no el tipo de dato!*/
    int arr[] {1,2,3,4,5},
          s = sizeof(arr)/sizeof(int),
          sum = 0;
    //Tamb es valido utilizar int arr[] = ...
    
    for (int i = 0; i < s; i ++){
        sum += arr[i];
    }

    cout << sum << endl;
    return 0;
}