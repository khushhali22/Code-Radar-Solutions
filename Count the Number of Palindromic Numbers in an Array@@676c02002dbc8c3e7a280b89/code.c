#include <stdio.h>
int main() {
    int n,virtualel,cp=0;
    scanf("%d",&n);
    for(int i=0 ;i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int r=0,c=0;
    while(arr[1]>0){
        // int rem=arr[i]%10;
        arr[1]=arr[1]/10;
        c++;
    }
    for(int i=0 ; i<n ; i++){
        arr[i]=virtual;
        while(arr[i]>0){
            int d=n%10;
            r=r+pow(d,c)
            arr[i]=arr[i]/10;
        }
        if(r==virtualel){
            cp++;
        }
    }
    printf("%d",cp);

    return 0;
}