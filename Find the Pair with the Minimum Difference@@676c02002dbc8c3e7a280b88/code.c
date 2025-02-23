#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int ele1,ele2
    for(int i=0 ; i<n-1; i++){
        for(int j=i+1 ; j<n ; j++){
              int r=arr[i]-arr[j];
              if(r<min);
              min=r;
            ele1=arr[i];
            ele2=arr[j];
        }

    }
    printf("%d %d",ele1 ,ele2);
    return 0;
}