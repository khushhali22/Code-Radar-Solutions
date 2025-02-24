#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int c=0 ,maxcount =INT_MIN;
    for(int i=0 ; i<n-1;i++){
        if(arr[i]+1==arr[i+1]){
            c++;
        }
        else{
            if(c>maxcount){
                maxcount=c;
                c=1;
            }
        }
    }
    printf("%d",maxcount );
}