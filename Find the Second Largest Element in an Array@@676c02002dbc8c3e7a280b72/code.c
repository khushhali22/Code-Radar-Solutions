#include <stdio.h>
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
    int max=arr[0];
    int smax=arr[0];

    for(int i=0 ;i<n ;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    // if(max==smax){
    //     printf("-1");
    // }
    // else{
    printf("%d",smax);
    // }
    return 0;
}