#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola",
         palabra2[] = "Hola!";
    
    if(strcmp(palabra1,palabra2) ==  0){
        cout << "Son Iguales!";
    }
    else{
        cout << "Son Distintas!";
    }

    /*La funcion strcmp compara alfabeticamente
    retornaria q a > b, o b < a*/

    return 0;
}