#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int l=strlen(x)
    for(int i=0 ; i<l-1 ; i++){
        for(int j=i+1 ; j<l ; j++){
            if(x[i]!=x[j]);
            // printf("%c",x[i]);
        }
        printf("%c",x[i]);
         break;
    }
    return 0;
}