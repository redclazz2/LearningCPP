#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Sebastian";
    char nombre[30];

    //EL CIN SE TERMINA CUANDO SE DEJA UN ESPACIO EN LA CADENA cin >> nombre;
    // EL PROBLEMA DEL GETS ES QUE SE PUEDE PASAR DE LA CANTIDAD DE MEMORIA QUE HA SIDO ASIGNADA gets(nombre);
    //La mejor forma puede ser:

    // Variable donde guarda, caracteres, salto de linea
    cin.getline(nombre,20,'\n');

    cout << nombre;

    return 0;
}