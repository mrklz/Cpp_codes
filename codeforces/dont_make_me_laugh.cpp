    #include <iostream>
    #include <algorithm>

    #include <vector>
    using namespace std;
    int main(){
        vector<int> a(4);
        int count = 0;
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        for(int i=1; i<4; i++) if(a[i]==a[i-1]) count++;
        cout<<count;
    }