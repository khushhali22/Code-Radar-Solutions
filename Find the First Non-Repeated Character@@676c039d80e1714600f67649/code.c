#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    char freq[26]={0};
    for(int i=0 ; str[i]!='\0' ; i++){
        freq[str[i]-'a']++;
        }
    for(int i=0 ; i<26 ; i++){
        if(freq[i]==1){
            int index=i;
            printf("%c",str[index]);
            break;
        }
    }
}