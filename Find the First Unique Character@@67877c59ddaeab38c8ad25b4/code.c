#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    scanf("%s",x);
    int l=strlen(x);
    for(int i=0 ; i<l ; i++){
        int c=0;
        for(int j=0; j<l ; j++){
            if(x[i]==x[j]){
                c++;
            }
        }
            // printf("%d",c);
            if(c==1){
               printf("%c",x[i]);
                return 0;    
            
        }
    }
    printf("-");
    return 0;
}