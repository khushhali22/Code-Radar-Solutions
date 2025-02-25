#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]",x);
    char y,z;
    scanf(" %c",&y);
    scanf(" %c",&z);
    for(int i=0 ; x[i]!='\0' ; i++){
            if(x[i]==y){
                x[i]=z;
                printf("%c",x[i]);
            }
            else{
                printf("%c",x[i]);
            }
        } 
        // printf("%s",x);
        // for(int i=0 ; i!='\0'; i++){
        //     printf("%s",x[i]);
        // }
      return 0;  
}