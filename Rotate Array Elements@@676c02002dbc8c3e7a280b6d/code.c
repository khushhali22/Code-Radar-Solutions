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
          temp[i]=arr[n-k+i];
    }
    for(int i=0 ; i<k ;i++){
        printf("%d\n",temp[i]);
    }
    for(int i=0 ; i<n-k ; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}