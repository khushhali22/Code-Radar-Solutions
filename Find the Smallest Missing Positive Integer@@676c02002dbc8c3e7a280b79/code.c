#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0 ; i<n ;i++){
    scanf("%d",&arr[i]);
   }
   int f=0;
   for(int i=0; i<n; i++){
    if(arr[i]==1){
        f=1;
    }
    if(arr[i]<=0 || arr[i]>n){
        arr[i]=1;
    }
   }
   if(f==0){
    printf("1");
    return 0;
   }
   for(int i=0 ;i<n ;i++){
    int num=abs(arr[i]);
    int index=num-1;
    if(arr[index]>0){arr[index]*=-1;}
    else{continue;}
   }
   for(int i=0 ; i<n ; i++){
    if(arr[i]>0){
        printf("%d",i+1);
        return 0;
    }
   }
   printf("%d",n+1);
    return 0;
}