/*Convertir dos cadenas de minusculas a mayusculas. Compararlas y decir si son iguales o no*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char arr1[20], arr2[20];

    cin.getline(arr1,20);
    cin.getline(arr2,20);

    strupr(arr1);
    strupr(arr2);

    if(strcmp(arr1,arr2) == 0){
        cout << "iguales";
    }else{
        cout << "no";
    }

    return 0;
}