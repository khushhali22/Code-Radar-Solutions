#include<string.h>
int findOccurrence(int arr[],int n , int target, char mode){
    int f=0;
    if(mode=='F'){
        for(int i=0 ; i<n ; i++){
            if(arr[i]==target){
                f=1;
                return i;
            }
        }
    }
     else{   
        for(int i=n ; i>0 ; i--){
            if(arr[i]==target){
                f=1;
                return i;
            }
        }
    }
if(f==0){
    return -1;
}
}