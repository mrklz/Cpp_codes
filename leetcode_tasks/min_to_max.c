#include <stdio.h>
#define MAX 1000

int main() {
    int arr[MAX], len=0;
    while(scanf("%d", &arr[len])==1 && arr[len]!='\n') {
        len++;
    }
    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }

}