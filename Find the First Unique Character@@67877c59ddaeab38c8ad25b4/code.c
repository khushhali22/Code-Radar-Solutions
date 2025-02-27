#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%s",x);
    int l=strlen(x);
    int freq[256]={0};
    for(int i=0 ; i<l ; i++){
        freq[(int)x[i]]++;
        }
    for(int i=0 ; i<l ;i++){
        if(freq[(int)x[i]]==1){
            printf("%c",x[i]);
        }
    }   
    
    printf("-");
    return 0;
}