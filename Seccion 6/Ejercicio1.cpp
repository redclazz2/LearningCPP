/*Hacer un programa para rellenar una matriz, pidiendo al usuario el numero de
filas y columnas, posteriormente mostrar la matriz en pantalla.*/

#include <iostream>

using namespace std;

int main(){
    int n,m, arr[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int e = 0; e < m; e++){
            cin >> arr[i][e];
        }
    }

    for (int i = 0; i < n; i++){
        for (int e = 0; e< m; e++){
            cout << arr[i][e];
        }
        cout << endl;
    }


    return 0;
}