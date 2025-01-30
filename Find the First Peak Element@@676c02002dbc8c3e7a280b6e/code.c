#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1)
    {
        printf("%d",arr[0]);
    }
    else if(n==2)
    {
        if(arr[0]>arr[1]){
            printf("%d",arr[0]);
        }
        else{
            printf("%d",arr[1]);
        }
    }
    else 
    {
    if(arr[0]>=arr[i]){
        printf(arr[0]);
    }
    else if(arr[n-1]>=arr[n-2]){
        printf(arr[n-1]);
    }
    else{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    }
    }
    return 0;
}