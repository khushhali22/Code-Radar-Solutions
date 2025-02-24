#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        temp[i]=1;
    }
    for(int i=0 ; i<n ; i++){
        if(temp[i]==0){
            continue;
        }
        for(int j=i+1 ; j<n; j++){
            if(temp[j]==0){
                continue;
            }
            if(arr[i]==arr[j]){
                 temp[i]+=1;
                 temp[j]=0;
            }
        }
        int max=INT_MIN;
        int element;
        for(int i=0 ; i<n ; i++){
            // if(temp[i]!=0){
                if(max<temp[i]){
                    max=temp[i];
                    element=arr[i];
                }
            }
        // }
     printf("%d",element);   
    }
    return 0;
}