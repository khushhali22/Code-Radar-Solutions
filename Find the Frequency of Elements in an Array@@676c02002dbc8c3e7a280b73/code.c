#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=1;
    }
    for(int i=0 ; i<n ;i++)
    {
        if(temp[i]==0)
        {
            continue;
        }
        else
        {
            for(int j=i+1 ;j<n ; j++)
            {
                      if(temp[j]==0)
                      {
                        continue;
                      }
                      if(arr[i]==temp[j])
                      {
                        temp[i]++;
                        temp[j]=0;

                      }
            }
        }
    }
    for(int i=o ;i<n ;i++)
    {
        if(temp[i]!=0)
        {
            printf("%d %d",arr[i],temp[i]);
        }
    }

   
        
    return 0;
}