/*Pedir al usuario una cadena de caracteres,
almacenarlos en una array y copiar su contenido a otro*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char st1[20],
         st2[20];

    cin.getline(st1,20);
    strcpy(st2,st1);

    cout << st2;
    
    return 0;
}