#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int r=0;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
               if(arr[i]==arr[j]);
               r=arr[i];
               printf("%d",r);
               break;                                   
        }
    }
    return 0;
}