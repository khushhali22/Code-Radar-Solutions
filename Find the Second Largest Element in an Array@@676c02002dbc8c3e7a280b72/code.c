#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0 ;i<n ;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(arr[i] > smax && arr[i] != max) smax = arr[i] ; 
    }
    // if(max==smax){
    //     printf("-1");
    // }
     if(smax == INT_MIN){
        printf("-1"); 
    }
    printf("%d",smax);
    return 0;
}