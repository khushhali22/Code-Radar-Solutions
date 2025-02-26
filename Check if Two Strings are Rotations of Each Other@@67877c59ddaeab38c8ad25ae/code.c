#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    char y[100];
    scanf(" %[^\n]c",y);
    char z[100];
    for(int i=0 ; y[i]!='\0' ; i++){
        z[i]=y[i]
    }
    for(int i=0 ; x[i]!='\0' ; i++){
        for(int j=0 ; x[j]!='\0' ; j++){
                if(x[i+j]!=y[j]){
                     break;
                }
        }
    }
}