#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    int start=0, end=0;
    int n=strlen(str);
    for(int i=0 ; i<=n ; i++){
        if(str[i]==' ' || str[i]=='\0'){
            end=i-1;
             while(start<end){
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
             }
             start=i+1;
        }
    }
    printf("%s",str);
}