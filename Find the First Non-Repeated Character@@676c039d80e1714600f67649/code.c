#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    for(int i=0 ; str[i]!='\0' ; i++){
        for(int j=i+1 ; x[j]!='\0' ; j++){
            if(str[i]!=str[j]){
                char nonre=str[i];
            }
        }
        printf("%c",nonre);
    }
}