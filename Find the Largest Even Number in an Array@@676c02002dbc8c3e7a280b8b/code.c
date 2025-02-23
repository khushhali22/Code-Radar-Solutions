#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int even;
    int max=INT_MIN;
    for(int i=0;  i<n; i++){
        if(arr[i]%2==0)
        {
            even =arr[i];
            if(max<even)
            {
                max=even;
            }
        }
    }

    if(max==0){
        printf("-1");
    }
    else{
    printf("%d",max);}
    return 0;
}