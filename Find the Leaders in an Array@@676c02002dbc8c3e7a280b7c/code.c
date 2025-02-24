#include<stdio.h>
int main()
    {
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
     }
     for(int i=n-1 ;i>0 ;i--){
        for(int j=n-2 ; j>0 ; j--){
            if(arr[i]<arr[j]){
                printf("%d",arr[j]);
            }
        }
     }
    }
}