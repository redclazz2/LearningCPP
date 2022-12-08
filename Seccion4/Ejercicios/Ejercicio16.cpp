/*16. Descomponer el factores primos*/
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 2;   n>1;  i++){
        if(n % i == 0){
            cout << i << ' ';
            n /= i;
        }
    }

    return 0;
}