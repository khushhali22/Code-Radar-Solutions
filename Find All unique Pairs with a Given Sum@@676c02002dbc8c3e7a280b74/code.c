#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int y;
    scanf("%d",&y);
    int result[100][100]={0};
    int ele1 ,ele2;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==y){
                  ele1=arr[i];
                  ele2=arr[j];
                  if(ele1>ele2){
                    int temp=ele1;
                    ele1=ele2;
                    ele2=temp;
                  }
                  if(result[i][j] == 0){
                    printf("%d %d\n",ele1,ele2);
                    result[i][j]=1;
                  }
            }
        
        }
    }
}