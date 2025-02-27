#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]c",str);
    char freq[256]={0};
    for(int i=0 ; str[i]!='\0' ; i++){
        freq[(int)str[i]]++;
        }
    for(int i=0 ; str[i]!='\0' ; i++){
        if(freq[(int)str[i]]==1){
            int index=i;
            printf("%c",str[index]);
            break;
        }
    }
    printf("-");
}