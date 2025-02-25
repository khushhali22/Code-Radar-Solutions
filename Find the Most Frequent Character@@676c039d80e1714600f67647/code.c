#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int freq[26] = {0} ; 
    int max=INT_MIN;
    int index = 0 ;
    char x[100];
    scanf("%[^\n]c",x);
    int len = strlen(x);
    for(int i=0 ; i<len ; i++){
        freq(x[i]-'a')=1;
    }
    for(int i=0 ; i<26 ; i++){
        if(freq[i]>max){
            max=freq[i];
        }
    }
    printf("%c",x[max]);
}