/*Perdir el nombre al usuario en mayuscula, si el nombre comienza por A convertirlo a minuscula
en caso contrario no convertirlo.*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char pal[20];

    cin.getline(pal,20);
    strupr(pal);

    //TMB SE PUEDE HACER CON:
    //strncmp(from,"CHAR", POS) == 0

    if(pal[0] == 'A'){
        strlwr(pal);
    }

    cout << pal;

    return 0;
}
