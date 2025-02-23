#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0,j=0;
    char arr[100];
    while(x[i]!='\0')
    {
       if(x[i]==' ')
       {
           arr[j]=x[i];
           j++;
       } 
       i++;
    } 
    arr[j]='\0';
    printf("%s",arr);
    return 0;
}