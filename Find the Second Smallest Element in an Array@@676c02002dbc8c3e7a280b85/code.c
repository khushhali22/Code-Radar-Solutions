#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
        return 0;
    }
    int min=INT_MAX;
    int smin=INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];
        }
        if(arr[i]<smin && arr[i]!=min){
            smin=arr[i];
        }
    }
    // if(min!=smin){
    // printf("%d",smin);}
    if(min==smin || smin==INT_MAX){
        printf("-1");
    }
    else{
        printf("%d",smin);
    }
    return 0;
}