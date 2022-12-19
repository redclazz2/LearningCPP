/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real. 
Convertirlos a sus respectivos valores y por ultimo, sumarlos.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){

    char ent1[20], ent2[20];
    int num1;
    float num2;

    cin.getline(ent1,20);
    cin.getline(ent2,20);

    num1 = atoi(ent1);
    num2 = atof(ent2);

    cout << num1 + num2;

    return 0;
}