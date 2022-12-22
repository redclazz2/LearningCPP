#include <iostream>

using namespace std;

int main(){

    int arr[] = {6,1,5,56,2,3,4,0,60}, s = 9, aux = 0,c = 1, t = 1;

    while(s > 0){
        if(t == 1) s /= 2;
        t = 1;
        for(int i = s; i < 9; i ++){
            if(arr[i] <= arr[i - s]){
                aux = arr[i];
                arr[i] = arr[i - s];
                arr[i - s] = aux;
                t = 0;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}