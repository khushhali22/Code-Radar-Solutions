#include<string.h>
int findOccurrence(int arr[],int n , int target, char mode){
    if(strcmp(mode,"F")){
        for(int i=0 ; i<n ; i++){
            if(arr[i]==target){
                return i;
            }
        }
    }
    {
        for(int i=n ; i>0 ; i--){
            if(arr[i]==tagret){
                return i;
            }
        }
    }
}