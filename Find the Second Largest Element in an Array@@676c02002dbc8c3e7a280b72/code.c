#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int max=-32768;
    int smax=-32768;

    for(int i=0 ;i<n ;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    if(max==smax){
        printf("-1");
    }
    else{
    printf("%d",smax);
    }
    return 0;
}