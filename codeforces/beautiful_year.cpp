#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    int year;
    cin>>year;
    while(true){
        year+=1;
        string s = to_string(year);
        if(set<char>(s.begin(), s.end()).size() == s.size()){
            cout<<year;
            break;
        }
    }
}