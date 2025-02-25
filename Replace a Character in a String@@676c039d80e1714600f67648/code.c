#include<stdio.h>
// #include<string.h>
// #include<limits.h>
int main(){
    char x[100];
    // int l=strlen(x);
    scanf("%[^\n]c",x);
    char y,z;
    scanf("%c",y);
    scanf("%c",z);
    for(int i=0 ; i!='\0' ; i++){
            if(x[i]==y){
                x[i]=z;
            }
        } 
        for(int i=0 ; i!='\0'; i++){
            printf("%c",x[i]);
        }
        
}