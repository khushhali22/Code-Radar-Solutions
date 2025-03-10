void selectionSort(char arr[],int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if((int)arr[i]>(int)arr[j]){
                char ele1=(char)arr[i];
                char ele2=(char)arr[j];
                char temp=ele1;
                ele1=ele2;
                ele2=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
}