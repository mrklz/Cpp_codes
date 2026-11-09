#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b, count=0;
        cin>>a>>b;
        count = (b - a%b)%b;
        cout<<count<<endl;
    }
}