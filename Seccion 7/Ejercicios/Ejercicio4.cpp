/*Crear una cadena que contenga la siguiente frase: Hola que tal
Luego crear otra cadena para que el usuario ingrese su nombre y por ultimo
anadir el nombre al final de la primera cadena y mostrar el mensaje completo.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char init[] = "Hola que tal ",
            name[200];

    cin.getline(name,200);
    strcat(init,name);

    cout << init;

    return 0;
}