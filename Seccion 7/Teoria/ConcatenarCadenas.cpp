/* Anadir o concatenar una cadena con otra - strcat()*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char pal1[] = "Hola",
            pal2[] = " Sebastian",
            pal3[200];

    strcpy(pal3,pal1);
    strcat(pal3,pal2);

    cout << pal3;

    return 0;
}