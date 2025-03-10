void insertionSort(char arr[],int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]>arr[j]){
                char temp=arr[i];
                arr[i]=(char)arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%c ",arr[i]);
    }
}