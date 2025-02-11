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
        int pn=abs(arr[i]);
    while(pn>0)
    {   d=pn%10;
        r=r+d;
        pn=pn/10;
        }
        printf("%d ",r);

    }
    return 0;
}