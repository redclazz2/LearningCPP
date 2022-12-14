/*Hacer un programa que pida al usuario que digite una
cadena de caracteres, luego verifique la longitud y si supera los 10 caracteres
mostrarla en pantalla, si no no se muestra*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra[20]; 

    cin.getline(palabra,20,'\n');

    if(strlen(palabra) >= 10){
        cout << palabra;
    }

    return 0;
}