#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[] = "Sebastian",
         nombre2[20];
    
    strcpy(nombre2,nombre);

    cout << nombre2;
    return 0;
}