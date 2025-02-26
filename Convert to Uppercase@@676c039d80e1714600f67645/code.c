#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    for(int i=0 ; x[i]!='\0' ; i++){
        x[i]=x[i]+32;
    }
    printf("%s",x);
    return 0;
}