#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int smin=arr[0];
    for(int i=0 ; i<n ; i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];
        }
    }
    printf("%d",smin);
    return 0;
}