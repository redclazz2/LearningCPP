#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int arr[9] = {3,1,2,5,4,60,32,12,45}, j = 0, c = 0;

    for(int i = 0; i < 9; i++){
        j = i;
        while( (j > 0) && (arr[j - 1] > arr[j])){
            c = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = c;
            j --;
        }
    }

    for (int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}