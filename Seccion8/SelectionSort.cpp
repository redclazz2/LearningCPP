#include <iostream>

using namespace std;

int main(){
    int arr[] = {2,4,5,1,6,9}, j = 0, c = 0, m = 0, i = 0;

    for(c = 0; c < 6; c++){
        m = c;
        for(i = c + 1;  i < 6; i ++){
            if(arr[i] < arr[m]){
                m = i;
            }
        }
        j = arr[c];
        arr[c] = arr[m];
        arr[m] = j;
    }

    for (i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}