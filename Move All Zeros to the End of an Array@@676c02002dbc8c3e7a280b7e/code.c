#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0){
            c++;
        }
    }
    for(int i=0 ; i<n ;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
        }
    }
    for(int i=0 ; i<c ;i++){
        printf("0 ");
    }
    return 0;
}