#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    int max=INT_MIN:
    int min=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d ",min);
    for(int i=0 ;i<n ;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}