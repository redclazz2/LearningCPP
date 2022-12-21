#include <iostream>

using namespace std;

int main(){
    
    int arr[9] = {3,1,2,5,4,60,32,12,45}, j = 0, c = 0;

    for(int i = 0; i < 8; i++){
        if(arr[i] > arr[i+1]){
            c = 1;
            j = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = j; 
        }

        if(c == 1){
            c = 0;
            i = 0;
        }
    }

    for (int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}