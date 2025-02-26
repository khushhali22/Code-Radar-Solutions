#include<stdio.h>
int main()
    {
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
     }
    //  int maxright=arr[n-1];
    //  int r=maxright;
    //  int newarr[100];
    //  int index=0;
    //  for(int i=n-2 ;i>=0 ;i--){
    //         if(arr[i]>=maxright){
    //             maxright=arr[i];
    //             newarr[index]=maxright;
    //             index++;
    //     }
    //  }
    for(int i=0 ; i<n ;i++){
        int max=arr[i];
            if(arr[i]<=max){
                printf("%d ",arr[i]);
            }
    }
    // for(int i= index-1; i>=0 ; i--){
    //     printf("%d ",newarr[i]);
    // }
    // printf("%d",r);
    }
