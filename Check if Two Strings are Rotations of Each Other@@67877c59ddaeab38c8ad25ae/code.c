#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    char y[100];
    scanf(" %[^\n]c",y);
    char temp[2*strlen(x)];
    int i=0;
    for(i=0 ; x[i]!='\0' ; i++){
            temp[i]=x[i];
    }
    for(int j=0 ; x[j]!='\0' ; j++){
        temp[i+j]=x[i];
    }
    for(int j=0 ; x[j]!='\0' ; j++){
        for(int k=0 ; y[k]!='\0' ; k++){
            if(temp[j+k]!=y[k]){

                break;
            }
        }
        printf("Yes");
        return 0 ;
    }
}