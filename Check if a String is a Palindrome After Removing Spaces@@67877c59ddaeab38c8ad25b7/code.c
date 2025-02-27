#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0,j=0;
    char arr[100];
    while(x[i]!='\0')
    {
       if(x[i]!=' ')
       {
           arr[j]=x[i];
           j++;
       } 
       i++;
    } 
    int f=1;
    len = strlen(arr);
    for(int k=0 ; k<len/2 ; k++){
      if(arr[i]!=arr[len-i-1]){
        f=0;
        break;
      }
    }
    if(f==0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}