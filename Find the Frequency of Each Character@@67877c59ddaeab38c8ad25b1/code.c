#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    int freq[256]={0};
    for(int i=0 ; str[i]!='\0' ; i++){
        freq[(int)str[i]]++;
    }
    for(int i=0 ; str[i]!='\0' ; i++){
       if(freq[(int)str[i]]>0){
        printf("%c: %d\n",str[i],freq[(int)str[i]]);
        freq[(int)str[i]]=0;
    }
}
}