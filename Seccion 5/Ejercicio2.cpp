/* Realice un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos*/

#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5},
         sum = 1;

    for (int i = 0; i < 5; i++){
        sum *= arr[i];
    }

    cout << sum;

    return 0;
}