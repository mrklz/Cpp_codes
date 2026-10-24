
#include <iostream>
using namespace std;
int main(){
    int x=0, y=0, n, moves=0;
    cin >> n;
    for(int i=0; i<n; i++){
        moves=0, x=0, y=0;
        int a,b;
        cin >> a >> b;
        if(abs(b)<=a && (a%2==b%2)){
            moves = a;
        }
        else if(abs(b)<=a+1 && ((a+1)%2==b%2)){
            moves = a+1;
        }
        else{
            moves = -1;
        }
        cout << moves << endl;
    }
    
}