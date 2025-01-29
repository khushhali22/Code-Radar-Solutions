#include <stdio.h>
int main() {
    int n,e=0,o=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            e=e+1;
        }
        else{
            o=o+1;
        }
    }
    printf("%d %d",e,o);
    return 0;
}