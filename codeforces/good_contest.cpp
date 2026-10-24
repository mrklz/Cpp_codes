#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[3], n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a>>arr[0]>>arr[1]>>arr[2];
        int m=min({arr[0], arr[1], arr[2]});
        a-=m;
        cout<<a<<endl;
    }
    
}