#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    int freq[256]={0};
    for(int i=0 ; str[i]!='\0' ; i++){
        freq[(int)str[i]]++;
    }
    for(int i=0 ; str[i]!='\0' ; i++){
        int frequency=freq[(int)str[i]];
        printf("%c: %d\n",str[i],frequency);
    }
}