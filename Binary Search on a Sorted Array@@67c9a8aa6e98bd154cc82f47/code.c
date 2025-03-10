int binarySearch(int arr[],int n ,int target){
    int index;
    for(int i=0 ; i< n ; i++){
        if(arr[i]==target){
            index=i;
            return index;
        }
    }
    return -1;
}