#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 '; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int temp[size];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<size ; i++){
        temp[i]=-1;
    }
    for(int i=0 ; i<size ;i++){
        int c=1;
        for(int j=i+1 ; j<size ; j++){
            if(arr[i]==arr[j]){
                c++;
                temp[i]=0;
            }
            else{
                  temp[i]=c;
            }
        }
        for(int i=0 ; i<size ; i++){
            printf("%d %d",arr[i],temp[i]);
        }
    }
    return 0;
}