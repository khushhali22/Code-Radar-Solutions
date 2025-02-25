#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%s",x);
    int l=strlen(x);
    for(int i=0 ; i!='\0' ; i++){
        int c=0;
        for(int j=i+1 ; j!='\0' ; j++){
            if(x[i]==x[j]){
                c++;
            }
            if(c==0){
               printf("%c",x[i]);
                return 0;    
            }
        }
    }
    printf("-");
    return 0;
}