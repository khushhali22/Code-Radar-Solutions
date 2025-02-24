#include<stdio.h>
int main()
    {
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
     }
     int maxright=arr[n-1];
     int r=maxright;
     int newarr[n];
     for(int i=n-2 ;i>=0 ;i--){
            if(arr[i]>maxright){
                maxright=arr[i];
                newarr[i]=maxright;
        }
     }
    for(int i=n ; i>0 ; i--){
        printf("%d ",newarr[i]);
    }
    printf("%d",r);
    }
