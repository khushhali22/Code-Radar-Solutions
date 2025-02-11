#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int d,r;
    for(int i=0 ; i<n ;i++){
        r=0;
        int n=abs(arr[i]);
    while(n>0)
    {   d=n%10;
        r=r+d;
        n=n/10;
        }
        printf("%d ",r);

    }
    return 0;
}