//Escriba un programa que calcule el valor de 2^1 + 2^2 + .... + 2^n
#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int n,t;
    cin >> n;

    for(int i = 1; i <= n; i++){
        t += pow(2,i);
    }

    cout << t;

    return 0;
}