int searchInRotatedArray(int arr[],int n, int target){
    int c=0;
    for(int i=0 ; i< n ; i++){
        if(arr[i]==target){
            c=1;
            return i;
        }
    }
    if(c==0){
        return -1;
    }
}