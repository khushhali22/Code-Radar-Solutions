#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[k];
    for(int i=0 ; i<k ;i++){
          temp[i]=arr[n-k+1];
    }
    for(int i=0 ; i<k ;i++){
        printf("%d ",temp[i]);
    }
    for(int i=0 ; i<n-k ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}