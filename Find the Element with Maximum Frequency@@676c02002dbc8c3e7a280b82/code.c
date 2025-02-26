#include<stdio.h>
#include<limits.h>
int main(){
    int n,max=0,s;
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        temp[i]=1;
    }
    for(int i=0 ; i<n ;i++){
        int c=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                c++;
            }

        }
        if(c>max){
            max=c;
            s=arr[i];
        }
    }
    printf("%d",s);
    // for(int i=0 ; i<n ; i++){
    //     if(temp[i]==0){
    //         continue;
    //     }
    //     for(int j=i+1 ; j<n; j++){
    //         if(temp[j]==0){
    //             continue;
    //         }
    //         if(arr[i]==arr[j]){
    //              temp[i]+=1;
    //              temp[j]=0;
    //         }
    //     }
    //     int max=INT_MIN;
    //     int element=-1;
    //     for(int i=0 ; i<n ; i++){
    //             if(max<temp[i]){
    //                 max=temp[i];
    //                 element=arr[i];
    //             }
    //         }
    //  printf("%d",element);   
    // }
    return 0;
}