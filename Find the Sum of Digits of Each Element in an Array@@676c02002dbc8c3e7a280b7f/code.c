#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int d,r=0;
    for(int i=0 ; i<n ;i++){
    while(arr[i]>0)
    {   d=arr[i]%10;
        r=r+d;
        arr[i]=arr[i]/10;
        }
        printf("%d ",r);

    }
    return 0;
}