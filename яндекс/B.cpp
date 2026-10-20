#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        vector<ll> h(n), inc(n, 0), dec(n, 0);
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        for (int i=1; i<n; i++){
            if(h[i]>h[i-1]){
                inc[i]=inc[i-1]+1;
            }
        }
        for (int i=n-2; i>=0; i--){
            if(h[i]>h[i+1]){
                dec[i]=dec[i+1]+1;
            }
        }
    
        ll ans=0;
        for(int i=1; i<n-1; i++){
            ans+=inc[i]*dec[i];
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
