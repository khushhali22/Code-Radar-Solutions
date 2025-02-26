#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    for(int i=0 ;x[i]!='\0' ; i++){
        if(x[i]>='A' && x[i]<='Z'){
            x[i]=x[i]+32;
        }
        else if(x[i]>='a' && x[i]<='z'){
            x[i]=x[i]-32;
        }
    }
    printf("%s",x);
}