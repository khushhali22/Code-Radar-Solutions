#include <stdio.h>
int main() {
    int n,decreasing=1 ,increasing=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1 ;i<n ;i++){
        if(arr[i]<arr[i-1]){
            decreasing=0;
            break;
        }
        if(arr[i]>arr[i-1]){
            increasing=0;
            break;
        }
    }
    if(decreasing || increasing){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}