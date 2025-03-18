#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>
int main(){
    int freq[26] = {0} ; 
    int max=INT_MIN;
    int index = 0 ;
    char x[100];
    scanf("%[^\n]c",x);
    int len = strlen(x);
    for(int i=0 ; i<len ; i++){
        int ele=tolower(x[i])-'a';
        freq[ele]++;
    }
    for(int i=0 ; i<26 ; i++){
        if(freq[i]>max){
            max=freq[i];
            index = i ;
        }
    }
    printf("%c",index+'a');
}