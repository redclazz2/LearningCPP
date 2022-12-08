//Hacer un programa que imprima la serie de fibonnachi:
#include <iostream>;
using namespace std;

int main(){
    int u,n=0,m=1;

    cin >> u;

    for(int i =1; i <= u; i++){
        m += n;
        n += m;
        
        cout<< m<< " ";
        cout<< n << " ";
    }

    return 0;
}
