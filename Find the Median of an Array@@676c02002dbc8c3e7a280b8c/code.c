#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int a,b,m;
    for (int i=0 ; i<n ; i++){
          if(n%2==0){
             a=(n+1)/2;
             b=(n-1)/2;
            m=(arr[a]+arr[b])/2;
          }
          else{
            a=n/2;
            m=arr[a];
          }
    }
    printf("%d",m);
    return 0;
}