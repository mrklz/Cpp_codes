#include <iostream>
using namespace std;
#define MAX 100
int main(){
    int arr[MAX];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=n;
    for(int i=0;i<n;i++){
        int max=arr[0];
        int index=0;
        for(int j=0;j<k;j++){
            if(arr[j]>max){
                max=arr[j];
                index=j;
            }
        }
        arr[index]=arr[k-1];
        arr[k-1]=max;
        k--; 
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
    }
        cout<<endl;
    }
     
}
