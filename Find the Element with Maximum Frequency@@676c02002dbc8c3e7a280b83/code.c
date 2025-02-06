#include <stdio.h>
int main() {
    int n,max=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        temp[i]=1;
    }
    for(int i=0 ; i<n ; i++){
           if(temp[i]==0){
            continue;
           }
           else{
            for(int j=i+1 ; j<n ; j++){
                   if(temp[j]==0){
                    continue;
                   }
                   else{
                    arr[i]==temp[j];
                    temp[i]++;
                    temp[j]=0;
                   }
            }
           }
    }
    for(int i=0 ; i<n ; i++){
        if(temp[i]!=0 && max<temp[i]){
            max=temp[i];
        }
    }
    printf("%d",max);
    return 0;
}