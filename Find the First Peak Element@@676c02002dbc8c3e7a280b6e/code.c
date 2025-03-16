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
    else if(n==2)
    {
        if(arr[0]<arr[1])
        {
            printf("%d",arr[1]);
            return 0;
        }
    }
    else 
    {
    for(int i=0 ; i<n ;i++)
    {
    if(arr[0]<arr[1])
    {
        newarr=arr[1];
        index++;
    }
    else if(arr[n]>arr[n-1])
    {
         newarr=arr[n];
         index++;
        
    }
    else if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            newarr=arr[n];
            index++;
        }
    }
    }
    int max=INT_MIN;
    for(int i=0 ; i<index; i++){
        if(max<newarr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}