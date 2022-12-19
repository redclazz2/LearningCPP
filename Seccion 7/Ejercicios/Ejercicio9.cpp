/*Realice un programa que lea una cadena de caracteres de la entrada estandar
y muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena.*/

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){

    char str[20];
    int a = 0,e = 0,i = 0,o = 0,u = 0;

    cin.getline(str,20);
    strlwr(str);

    for(int w = 0; w < 20; w++){
        switch (str[w])
        {
            case  'a':
                a ++;
                break;

            case  'e':
                e ++;
                break;
            
            case  'i':
                i ++;
                break;

            case  'o':
                o ++;
                break;
            
            case  'u':
                u ++;
                break;
        }
    }

    cout << "A: " << a << endl;
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;

    return 0;
}