#include <stdio.h>
int main() {
    int f=1;
    char x[100];
    scanf("%s",x);
    int arr[100];
    for(int i=0 ; i<n ; i++){
        arr[i]=x[n-i-1];
    }
    for (int i= ; i<n ;i++){
        if(arr[i]!=x[i]){
            f=0;
            break;
        }
    }
    if(f==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}