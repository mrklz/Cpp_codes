#include <iostream>
using namespace std;
int main(){
    int n, check=0;
    cin>>n;
    while(n--){
        int pers;
        cin>>pers;
        if(pers==1){
            cout<<"HARD";
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"EASY";
    }
}