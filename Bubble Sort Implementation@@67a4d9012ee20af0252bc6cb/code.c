#include <stdio.h>
// int main() {
    void bubbleSort(int arr[],int n){
        int temp;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<n-i-1 ; j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0 ; i<n ; i++){
            printf("%d",arr[i]);
        }
        void printArray(int arr[],int n){
            for(int i=0 ; i<n ; i++){
                printf("%d",arr[i]);
            }
        }
    
        // int n;
        // scanf("%d",&n);
        // int arr[n];
        // for(int i=0; i<n ; i++){
        //     scanf("%d",&arr[i]);
        // }
        // bubbleSort(arr,n);
        

    return 0;
}