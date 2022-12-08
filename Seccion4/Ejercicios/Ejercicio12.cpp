//Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5...

#include <iostream>;

using namespace std;

int main(){
    int n, t, tmp;
    cin >> n;
    for(int i = 1; i <= n; i++){
        tmp = i;
        if(i % 2 == 0){
            tmp *= -1;
        } 
        t += tmp;
    }
    cout << t;
    return 0;
}