#include <stdio.h>
#include <stdib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int even;
    int max=0;
    for(int i=0;  i<n; i++){
        int p=abs(arr[i]);
        if(p%2==0)
        {
            even =p;
            if(max<even)
            {
                max=even;
            }
        }
    }
    printf("%d",max);
    return 0;
}