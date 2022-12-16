//Longitud de una cadena de caracteres - Function strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "hola, como vamos?";
    int longitud =0;
    
    //strlen devuelve un valor entero, por tanto se debe guardar en un int.

    longitud = strlen(palabra);

    cout << longitud;

    return 0;
}