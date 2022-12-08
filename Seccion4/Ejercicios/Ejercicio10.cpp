/* Escriba un programa que calcule el valor de  1! + 2! + 3! + ... + n!*/
#include <iostream>
using namespace std;

int main(){
    int n,fact = 1,suma = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        fact*= i;
        suma += fact;
    }

    cout << suma;
    return 0;
}

