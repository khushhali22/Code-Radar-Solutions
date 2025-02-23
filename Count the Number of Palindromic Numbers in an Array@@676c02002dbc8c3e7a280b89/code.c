#include <stdio.h>
int main() {
    int n,e,cp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int d,temp;
    for(int i=0 ; i<n ; i++)
    {
        e=arr[i];
        int r=0;
        while(arr[i]>0)
        {
            d=arr[i]%10;
            r=(r*10)+d;
            arr[i]=arr[i]/10;
        }
        printf("%d\n",r);
        if(r==e){
            cp++;
        }
    }
    printf("%d ",cp);

    return 0;
}