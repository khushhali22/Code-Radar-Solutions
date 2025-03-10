void selectionSort(char arr[],int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if((int)arr[i]>(int)arr[j]){
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