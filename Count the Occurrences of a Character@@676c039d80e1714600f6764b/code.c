#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]",x);
    char y;
    int c=0;
    scanf(" %c",&y);
    for(int i=0 ; x[i]!='\0' ; i++){
            if(x[i]==y){
                c++;
                
            }
        } 
        printf("%d",c);
      return 0;  
}