#include <stdio.h>
#include<limits.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int newarr[100];
    int index=0;
    for(int i=0; i<=n ;i++)
    {
      scanf("%d",&arr[i]);
    }
    if(n==1)
    {
      printf("%d",arr[0]);
       return 0;
    }
    if(arr[0]>arr[1])
    {
        printf("%d",arr[0]);
        return 0;
    }
    for(int i=1 ; i<n-1 ;i++)
    {
       if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            printf("%d",arr[i]);
            return 0;
        }
    }
    if(arr[n-1]>arr[n-2])
    {
        printf("%d",arr[n-1]);
        return 0;
    }
    printf("-1");
    return 0;
}