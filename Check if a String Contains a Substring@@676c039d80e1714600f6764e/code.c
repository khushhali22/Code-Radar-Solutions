#include<stdio.h>
#include<string.h>
int main(){
    char str[100],substr[100];
    scanf("%[^\n]c",str);
    scanf(" %[^\n]c",substr);
    int a=strlen(str);
    int b=strlen(substr);
    int j=0;
    for(int i=0 ; i<=a-b ;i++){
        for(j=0 ; j<b ; j++)
        {
            if(str[i+j]!=substr[j])
            {
                break;
            }
        }
        // printf("%d",j);
        // if(j==b){
            printf("Yes");
            return 0;   
        // }
    }
    printf("No");
    return 0;
}