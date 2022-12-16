/*Pedir al usuario q digite dos cadenas y 
decir si son iguales, en caso contrario mostrar la mayor
alfabeticamente.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char p1[20], p2[20];
    cin.getline(p1,20);
    cin.getline(p2,20);

    if(strcmp(p1,p2) == 0){
        cout << "Son iguales!";
    }
    else{
        if(strcmp(p1,p2) > 0){
            cout << "La primera palabra es mayor alfabeticamente.";
        }else{
            cout << "La segunda palabra es mayor alfabeticamente.";
        }
    }
    return 0;
}