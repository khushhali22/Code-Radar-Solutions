#include<stdio.h>
int main(){
    int n,g;
    scanf("%d %d",&n,&g);
    int arr[n];
    for(int i=0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>g){
            c++;
        }
    }
    print("%d",c);
    return 0;
}