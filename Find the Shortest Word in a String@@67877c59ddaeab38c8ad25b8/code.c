#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int k=0, j=0;
    char arr[20][10];
    for(int i=0 ; i!='\0' ; i++){
        if(x[i]==' '){
            // arr[k][j];
            k++;
            j=0;
        }
        else{
            arr[k][j]=x[i];
            j++;   
        }
    }
    int min=INT_MAX;
    int m;
    for(int i=0 ; i<=k ; i++){
        if(min>strlen(arr[i])){
            m=i;
        }
    }
    printf("%s",arr[m]);
}