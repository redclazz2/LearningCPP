/*Escriba un programa que defina un vector de numeros y calcule si existe algun numero
en el vector cuyo valor mayor equivale a la suma del resto de numeros del vector*/

#include <iostream>
 
 using namespace std;

 int main(){
    int arr[] {1,2,3,4,10},c,t,m=0;

    for(int i = 0; i < 5; i ++){
        c =  arr[i];
        t += c;
        if(c > m){
            m = c;
        }
    }

    if(t - m == m){
        cout << "Existe " << m << endl;
    }

    return 0;
 }