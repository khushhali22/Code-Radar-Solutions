int findKthMissing(int arr[],int n, int k){
    int ans;
    for (int i=0 ; i<n ; i++){
       arr[i]<k;
       k++;
    }
    else{
        ans=k;
        break;
    }
    return ans;
}