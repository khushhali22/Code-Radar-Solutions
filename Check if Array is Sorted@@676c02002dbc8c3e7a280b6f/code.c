#include <stdio.h>
int main() {
    int n;
    int f=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1 ; i<n ; i++){
        arr[i]<arr[i-1];
        f=0;
        break;
    }
    if(f==0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}