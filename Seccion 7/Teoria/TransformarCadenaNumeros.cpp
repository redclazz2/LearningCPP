/*Transformar una cadena a numeros - funcion atoi  y atof*/

//atoi -> "123" -> 123
//atof -> "12,3" -> 12.3

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char cad[] = "123.4",
            cad2[] = "1234";
    float num;
    int num2;

    num2 = atoi(cad2);
    num = atof(cad);

    cout << num << endl;
    cout << num2;
    return 0;
}