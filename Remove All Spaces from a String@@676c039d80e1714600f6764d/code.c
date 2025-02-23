#include<stdio.h>
int main(){
     char x[100];
     scanf("%[^\n]c",x);
     int i=0;
     while(x[i]!='\0'){
        if(x[i]!=' '){
            printf("%c",x[i]);
        }
        i++;
     }
    return 0;
}