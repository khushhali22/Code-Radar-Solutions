#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char x[100];
    int l=strlen(x);
    scanf("%[^\n]c",x);
    char y,z;
    scanf("%c",y);
    scanf("%c",z);
    for(int i=0 ; i<l ; i++){
            if(x[i]==y){
                x[i]=z;
            }
        } 
        for(int i=0 ; i<l ; i++){
            printf("%c",x[i]);
        }
        
}