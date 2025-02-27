#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0,j=0;
    char arr[100];
    while(x[i]!='\0')
    {
       if(x[i]!=' ')
       {
           arr[j]=tolower(x[i]);
           j++;
       } 
       i++;
    } 
    arr[j]='\0';
    // printf("%s",arr);
    int f=1;
    int len = strlen(arr);
    for(int k=0 ; k<len/2 ; k++){
      if(arr[k]!=arr[len-k-1]){
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