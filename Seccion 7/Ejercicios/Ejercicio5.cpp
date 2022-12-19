/*Hacer un programa que determine si una palabra es polindroma*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char pal[20], palrev[20];

    cin.getline(pal,20);
    strcpy(palrev,pal);
    strrev(palrev);

    if(strcmp(pal,palrev) ==  0){
        cout << "Polindroma";
    }else{
        cout << "No";
    }

    return 0;
}