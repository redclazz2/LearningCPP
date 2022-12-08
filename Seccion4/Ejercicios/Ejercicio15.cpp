/*Numero Magico. El programa genera un numero aleatorio del 1 al 100 y el usuario tiene que adivinarlo*/

#include <iostream>
#include<time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int rnd = 1 + rand() % (100), g = 0;

    while(g != rnd){
        cout << "Adivine el numero: "; cin >> g;
        if(g > rnd) cout<< "Mas bajo." << endl ;
        else cout << "Mas alto" << endl;
    }

    cout << "Felicitaciones, ha encontrado el numero: " << rnd;
    return 0;
}