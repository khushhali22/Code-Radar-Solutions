#include<stdio.h>
int main(){
    char x[100];
    scanf("%[^\n]c",x);
    int i=0;
    int min=100;
    char y;
    while(x[i]!='\0'){
        int j=0;
        int c=0;
        char q[50]=' ';
        while(x[j]!=' ')
        {
            q+=x[j];
            c++;
            j++;
        }
        if(min>c){
            min=c;
            y=x[j];
        }
        i++;
    }
    printf("%c",q);
}