#include <stdio.h>
int main() {
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]==k){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}