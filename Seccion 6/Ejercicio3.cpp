/*Hacer una matriz de tipo entera de 2*2, llenarla de números y luego copiar todo su contenido hacia otra matriz*/
 #include <iostream>
 
 using namespace std;

 int main(){
    int arr1[2][2] {1,2,3,4}, arr2[2][2];

    for(int i = 0; i < 2; i++){
        for(int e = 0; e < 2; e++){
            arr2[i][e] = arr1[i][e];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int e = 0; e < 2; e++){
            cout << arr2[i][e];
        }
        cout << endl;
    }

    return 0;
 }