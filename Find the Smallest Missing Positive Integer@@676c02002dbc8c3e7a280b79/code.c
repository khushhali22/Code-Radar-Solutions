#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
int f=0;
for(int i=0 ; i<n  ; i++){
    if(arr[i]==1){
        f=1;
    }
    // if(arr[i]<=0 || arr[i]>n){
    //     arr[i]=1;
    // }
}
if(f==0){
    printf("1");
    return 0;
}
for(int i=0 ; i<n ; i++){
    int postivenum=abs(arr[i]);
    int index=postivenum-1;
    if(arr[index]<0){continue;}
    else{
        arr[index]*=-1;
    }

}
for(int i=0 ; i<n ;i++){
    if(arr[i]>0){
        printf("%d",i+1);
        return 0;
    }
}
printf("%d",n+1);
return 0;
}
