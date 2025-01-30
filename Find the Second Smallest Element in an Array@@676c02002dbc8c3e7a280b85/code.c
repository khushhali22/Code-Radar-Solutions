#include <stdio.h>
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
    int min=arr[0];
    int smin=arr[0];
    for(int i=0 ; i<n ; i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];
        }
    }
    if(min==smin){
    printf("%d",smin);}
    else{
        printf("-1");
    }
    return 0;
}