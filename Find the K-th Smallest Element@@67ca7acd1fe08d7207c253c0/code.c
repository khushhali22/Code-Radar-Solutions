int kthSmallest(int arr[],int n,int k){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<i+1 ; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return arr[k-1];
}