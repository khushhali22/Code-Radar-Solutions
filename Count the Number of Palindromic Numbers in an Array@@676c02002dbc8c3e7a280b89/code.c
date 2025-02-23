#include <stdio.h>
#include<math.h>
int main() {
    int n,e,cp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int d,r=0,c=0;
    // while(arr[1]>0){
    //     // int r=0,c=0;
    //     // int rem=arr[i]%10;
    //     arr[1]=arr[1]/10;
    //     c++;
    // }
    for(int i=0 ; i<n ; i++)
    {
        e=arr[i];
        while(arr[i]>0)
        {
            d=arr[i]%10;
            r=r + pow(d,c);
            arr[i]=arr[i]/10;
        }
        if(r==e){
            cp++;
        }
    }
    printf("%d ",cp);

    return 0;
}